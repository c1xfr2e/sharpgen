
import os
import json
import string
from jinja2 import Environment, PackageLoader, select_autoescape


def create_experiment_class(cat_dir, category, experiment):
	class_name = string.capwords(experiment["id"]).replace(" ", "")

	h_path = cat_dir + "/" + class_name + ".h"
	cpp_path = cat_dir + "/" + class_name + ".cpp"

	env = Environment(loader=PackageLoader("app"), autoescape=select_autoescape())
	tmpl_h = env.get_template("experiment_class_h.tmpl")
	text_h = tmpl_h.render(
		cn_name=experiment["name"],
		class_name=class_name,
	)
	with open(h_path, 'w', encoding="utf-8") as f:
		f.write(text_h)

	tmpl_cpp = env.get_template("experiment_class_cpp.tmpl")
	text_cpp = tmpl_cpp.render(
		class_name=class_name,
		exp_id_enum=experiment["enum"],
		cat_id_enum=category["enum"]
	)
	with open(cpp_path, 'w', encoding="utf-8") as f:
		f.write(text_cpp)


def create_pro(categories):
	env = Environment(loader=PackageLoader("app"), autoescape=select_autoescape())
	tmpl = env.get_template("pro.tmpl")
	text = tmpl.render(categories=categories)
	with open("out.pro", 'w', encoding="utf-8") as f:
		f.write(text)


def create_dir_and_files(root_dir, categories):
	for cat in categories:
		capword = string.capwords(cat["id"]).replace(" ", "")
		cat["capword"] = capword
		cat_dir = root_dir + "/" + capword
		if not os.path.exists(cat_dir):
			os.mkdir(cat_dir)
		for exp in cat["experiments"]:
			capword = string.capwords(exp["id"]).replace(" ", "")
			exp["capword"] = capword
			create_experiment_class(cat_dir, cat, exp)

	create_pro(categories)


if __name__ == "__main__":
	filename = "experiment_trans.json"
	jobj = json.load(open(filename, encoding='utf-8'))
	create_dir_and_files("cpp", jobj["categories"])

