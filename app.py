
import json
from jinja2 import Environment, PackageLoader, select_autoescape


if __name__ == "__main__":
	env = Environment(
		loader=PackageLoader("app"),
		autoescape=select_autoescape()
	)

	exp_filename = "experiments.json"
	jobj = json.load(open(exp_filename, encoding='utf-8'))

	categories = jobj["categories"]
	enum_start = 0
	for cat in categories:
		cat["enum_start"] = enum_start
		enum_start += 100

	template = env.get_template("experiment_id_enum.tmpl")
	print(template.render(categories=categories))
