import json
import re
import string

EnumText = '''
	typedef enum tagEnumCatalog
	{
		EC_GENERAL_INSPECTION,                    // 一般检查
		EC_FUNCTIONAL_TEST,                       // 功能试验
		EC_SAFTY_REQUIREMENT,                     // 安全要求试验
		EC_CHARGING_MODE_AND_CONN_METHOD,         // 充电模式和连接方式检查
		EC_CONN_DEV_AND_CABLE_CHECK,              // 充电连接装置及电缆检查
		EC_ELECTRICAL_ISOLATION_CHECK,            // 电气隔离检查
		EC_ELECTRIC_SHOCK_PROTECT,                // 电击防护试验
		EC_CREEPAGE_DISTANCES_AND_CLEARANCES_CHK, // 电气间隔和爬电距离试验
		EC_INSULATION_CHECK,                      // 绝缘性能试验
		EC_EARTH_TEST,                            // 接地试验
		EC_CHARGING_OUTPUT_TEST,                  // 充电输出试验
		EC_STANDBY_POWER_CONSUMPTION_TEST,        // 待机功耗试验
		EC_PROTOCOL_CONFORMANCE_TEST,             // 协议一致性试验
		EC_CONTROL_GUIDANCE_TEST,              	  // 控制导引试验
		EC_INTEROPERABILITY_EXPERIMENT            // 互操作性测试
	}EnumCatalog;


	typedef enum tagEnumGeneralInspectionId
	{
		GI_APPEARANCE_INSPECTION,                // 外观检查
		GI_IDENTITY_INSPECTION,                  // 标志检查
		GI_BASIC_CONSTRUCTION_INSPECTION,        // 基本构成检查
		GI_MECHANICAL_SWITCHGEAR_INSPECTION,     // 机械开关设备检查
		GI_LIGHTING_PROTECTION_INSPECTION,       // 防雷措施检查
		GI_ANTI_THEFT_MEASURE_INSPECTION,        // 防盗措施检查
		GI_CUT_OFF_POWER_SUPPLY_FUNC_INSPECTION, // 供电设备断电控制功能检查
		GI_LOCKER_INSPECTION                     // 锁紧装置检查
	}EnumGeneralInspectionId;

	typedef enum tagEnumFunctionalTestId
	{
		FT_CHARGING_CONTROL_FUNCTION,              // 充电控制功能试验
		FT_COMMUNICATION_FUNCTION,                 // 通信功能试验
		FT_INSULATION_DETECTION_FUNCTION,          // 绝缘检测功能试验
		FT_DC_CIRCUIT_SHORT_DETECTION_FUNCTION,    // 直流输出回路短路检测功能试验
		FT_VEHICLE_CONNECTOR_LOCKING_FUNCTION,     // 车辆插头锁止功能试验
		FT_PREPARE_CHARGE_FUNCTION,                // 预充电功能试验
		FT_DISPLAY_FUNCTION,                       // 显示功能试验
		FT_INPUT_FUNCTION,                         // 输入功能试验
		FT_METERING_FUNCTION,                      // 计量功能试验
		FT_EMERGENCY_STOP_FUNCTION                 // 急停功能试验
	}EnumFunctionalTestId;

	typedef enum tagEnumSaftyRequirementTestId
	{
		SRT_INPUT_OVER_VOLT_PROTECTION,          // 输入过压保护试验
		SRT_INPUT_UNDER_VOLT_PROTECTION,         // 输入欠压保护试验
		SRT_OUTPUT_OVER_VOLT_PROTECTION,         // 输出过压保护试验
		SRT_OUTPUT_SHORT_PROTECTION,             // 输出短路保护试验
		SRT_OVER_TEMPERATURE_PROTECTION,         // 过温保护试验
		SRT_OPEN_DOOR_PROTECTION,                // 开门保护试验
		SRT_EMERGENCY_STOP_PROTECTION,           // 启动急停装置试验
		SRT_INPUT_CURRENT_OVERSHOOT_PROTECTION,  // 输入电流过冲试验
		SRT_REVERSE_BATTERY_CONNECOR_PROTECTION, // 蓄电池反接试验
		SRT_COUNTER_CURRENT_PROTECTION,          // 防逆流功能试验
		SRT_CONTACTOR_STICKING_PROTECTION        // 接触器粘连试验
	}EnumSaftyRequirementTestId;


	typedef enum tagEnumConnDevAndCableCheckId
	{
		CDC_CONNECTION_DEV_CHECK,               // 充电连接装置检查
		CDC_CABLE_MANAGEMENT_AND_STORAGE_CHECK  // 电缆管理及贮存检查
	}EnumConnDevAndCableCheckId;


	typedef enum tagEnumElectricShockProtectId
	{
		ESP_DIRECT_CONTACT_PROTECTION,      // 直接接触防护试验
		ESP_DEAL_WITH_POWER_SUPPLY_LOSS     // 动力电源输入失电试验
	}EnumElectricShockProtectId;

	typedef enum tagEnumInsulationCheckId
	{
		IC_INSULATION_RESISTANCE,     // 绝缘电阻试验
		IC_DIELECTRIC_STRENGTH,       // 介电强度试验
		IC_IMPULSE_WITHSTAND_VOLT     // 冲击耐压试验
	}EnumInsulationCheckId;


	typedef enum tagEnumChargeOutputTestId
	{
		COT_MAXIMUM_CONSTANT_POWER,             // 最大恒功率输出试验
		COT_POWER_CONTROL,                      // 功率控制试验
		COT_STABILIZE_CURRENT_ACCURACY,         // 稳流精度试验
		COT_STABILIZE_VOLT_ACCURACY,            // 稳压精度试验
		COT_VOLT_RIPPLE_FACTOR,                     // 电压纹波因数试验
		COT_CURRENT_RIPPLE_PARAMETER,               // 电流纹波试验
		COT_CURRENT_OUTPUT_ACCURACY,                // 输出电流设定误差试验
		COT_VOLT_OUTPUT_ACCURACY,                   // 输出电压设定误差试验
		COT_VOLT_LIMITING_FEATURE,                  // 限压特性试验
		COT_CURRENT_LIMITING_FEATURE,               // 限流特性试验
		COT_OUTPUT_CURRENT_STOP_RATE,               // 输出电流停止速率试验
		COT_START_OUTPUT_OVERSHOOT_CTRL,            // 启动输出过冲试验
		COT_OUTPUT_CUR_MEASURE_ACCURACY,            // 输出电流测量误差试验
		COT_OUTPUT_VOLT_MEASURE_ACCURACY,           // 输出电压测量误差试验
		COT_MEASURE_PARAM_UPDATE_RATE,              // 测量值更新时间试验
		COT_CHARGING_ENERGY_EFFICIENT,              // 效率试验
		COT_POWER_FACTOR,                           // 功率因数试验
		COT_CHARGING_LOAD_DROP_CTRL                 // 充电负荷突减载控制试验
	}EnumChargeOutputTestId;


	typedef enum tagEnumCtrlGuidanceTestId
	{
		CGT_EARTHING_CONDUCTOR_DISCONNECT,        // 保护接地连续性试验
		CGT_CONNECT_DETECTION_LINE_BREAK,         // 连接检测信号断开试验
		CGT_OUTPUT_CURRENT_SHOCK,                 // 输出冲击电流试验
		CGT_BATTERY_VOLT_FRAME_DISAGREE,          // 蓄电池电压与通信报文不符试验
		CGT_BATTERY_VOLT_OUT_CHARGER_CAPACITY,    // 蓄电池电压超过充电机范围试验
		CGT_BATTERY_DUAL_PROTECTION_FUNCTION,     // 蓄电池二重保护功能试验
		CGT_BAD_VEHICLE_TOLERABLE_VOLT_CLIMAX,    // 车辆最高允许充电总电压不匹配试验
		CGT_CHARGING_REQUEST_OVER_BATTERY_SPEC    // 充电需求大于电池参数试验
	}EnumCtrlGuidanceTestId;

	typedef enum tagEnumInteroperabilityTestId
	{
		IT_CONNECT_CONFIRM,                   // 连接确认测试
		IT_SELF_CHECK,                        // 自检阶段测试
		IT_CHARGE_PREPARE,                    // 充电准备就绪测试
		IT_CHARGING_PHASE,                    // 充电阶段测试
		IT_NORMAL_CHARGING_ENDDING,           // 正常充电结束测试
		IT_CONNECT_SEQUENCE_CTRL,             // 充电连接控制时序测试
		IT_COMMUNICATION_INTERRUPT,           // 通讯中断测试
		IT_BINARY_S_BREAK,                    // 开关S断开测试
		IT_VEHICLE_CONNECTOR_BREAK,           // 车辆接口断开测试
		IT_OUTPUT_VOLT_OVER_VEHICLE_PERMIT,   // 输出电压超过车辆允许值测试
		IT_INSULATION_FAULT,                  // 绝缘故障测试
		IT_EARTHING_CONDUCTOR_DISCONNECT,     // 保护接地导体连续性丢失测试
		IT_OTHER_CHARGING_FAULT,              // 其他充电故障测试
		IT_GUIDE_CTRL_VOLT_INTERACTIVE        // 控制导引电压限值测试
	}EnumInteroperabilityTestId;


	typedef enum tagEnumCompatibilityTestId
	{
		CT_AUX_POWER_ON_AND_SHAKE_HANDS,    // 低压辅助上电及充电握手阶段检验
		CT_CHARGING_PARAM_NEGOTIATE,        // 参数配置阶段检验
		CT_CHARGE_WORKING,                  // 充电阶段检验
		CT_CHARGE_END                       // 充电结束阶段检验
	}EnumCompatibilityTestId;


	typedef enum tagEnumAuxPowerAndShakeHandsId
	{
		APS_CHM_DP1001,                       // DP.1001充电机握手报文CHM发送检验
		APS_CRM_0X00_DP1002,                  // DP.1002充电机辨识报文CRM(SPN2560=0x00)发送检验
		APS_CRM_0XAA_DP1003,                  // DP.1003充电机辨识报文CRM(SPN2560=0xAA)发送检验
		APS_BRM_TIMEOUT_DN1001,               // DN.1001充电机接收BMS和车辆辨识报文BRM超时检验（未收到任何报文）
		APS_BRM_DATA_FAULT_DN1002,            // DN.1002充电机接收BRM传输协议发送异常处理检验
		APS_CRM_0X00_RESP_BHM_TIMEOUT_DN1003, // DN.1003充电机发送CRM（SPN2560=0x00）报文时，持续收到BHM报文超时处理检验
		APS_CRM_0XAA_RESP_BRM_TIMEOUT_DN1004  // DN.1004充电机发送CRM（SPN2560=0xAA）报文时，持续收到BRM报文超时处理检验
	}EnumAuxPowerAndShakeHandsId;

	typedef enum tagEnumChargeParaNegotiateId
	{
		CPN_CML_CTS_DP2001,                      // DP.2001充电机最大输出能力报文CML和时间同步信息报文CTS发送检验
		CPN_BRO_WITH_NOT_READY_DP2002,           // DP.2002充电机收到BMS未做好充电准备报文BRO（SPN2829=0x00）处理检验
		CPN_CRO_DP2003,                          // DP.2003充电机输出准备就绪报文CRO (SPN2830=0x00)发送检验
		CPN_BCP_TIMEOUT_DN2001,                  // DN.2001充电机接收动力蓄电池充电参数报文BCP超时检验（未收到任何报文）
		CPN_BCP_DATA_FAULT_DN2002,               // DN.2002充电机接收BCP传输协议发送异常处理检验
		CPN_BRO_TIMEOUT_WITH_NO_FRAME_DN2003,    // DN.2003充电机接收BMS充电准备就绪报文BRO(SPN2829=0X00)超时检验(未收到任何报文)
		CPN_BRO_TIMEOUT_WITH_WRONG_FRAME_DN2004, // DN.2004充电机接收BMS充电准备就绪报文BRO(SPN2829=0X00)超时检验(报文类型错)
		CPN_BRO_READY_TIMEOUT_DN2005,            // DN.2005充电机接收BMS完成充电准备报文BRO（SPN2829=0xAA）超时检验
		CPN_CML_RESP_BCP_TIMEOUT_DN2006,         // DN.2006充电机发送CTS（可选）和CML报文时，持续收到BCP报文超时处理检验
		CPN_CRO_RESP_BRO_READY_TIMEOUT_DN2007,   // DN.2007充电机发送CRO（SPN2830=00）报文充电准备过程中，中断接收BRO(SPN2829=0xAA)报文超时处理检验
		CPN_CRO_RESP_TEST_DN2008,                // DN.2008充电机发送CRO（SPN2830=00）报文充电准备过程中，接收与BRO(SPN2829=0xAA)类型不符报文超时处理检验
		CPN_CONFORMANCE_TEST_DN2009,                 // DN.2009充电机发送CRO（SPN2830=00）报文时，接收到BRO（SPN2829=0x00）报文处理检验
		CPN_CONFORMANCE_TEST_DN2010    // 一致性测试 DN2010
	}EnumChargeParaNegotiateId;

	typedef enum tagEnumChargeWorkingId
	{
		ID_CONFORMANCE_TEST_DP3001,    // 一致性测试 DP3001
		ID_CONFORMANCE_TEST_DP3002,    // 一致性测试 DP3002
		ID_CONFORMANCE_TEST_DP3003,    // 一致性测试 DP3003
		ID_CONFORMANCE_TEST_DP3004,    // 一致性测试 DP3004
		ID_CONFORMANCE_TEST_DP3005,    // 一致性测试 DP3005
		ID_CONFORMANCE_TEST_DP3006,    // 一致性测试 DP3006
		ID_CONFORMANCE_TEST_DP3007,    // 一致性测试 DP3007
		ID_CONFORMANCE_TEST_DN3001,    // 一致性测试 DN3001
		ID_CONFORMANCE_TEST_DN3002,    // 一致性测试 DN3002
		ID_CONFORMANCE_TEST_DN3003,    // 一致性测试 DN3003
		ID_CONFORMANCE_TEST_DN3004,    // 一致性测试 DN3004
		ID_CONFORMANCE_TEST_DN3005,    // 一致性测试 DN3005
		ID_CONFORMANCE_TEST_DN3006,    // 一致性测试 DN3006
		ID_CONFORMANCE_TEST_DN3007,    // 一致性测试 DN3007
		ID_CONFORMANCE_TEST_DN3008,    // 一致性测试 DN3008
		ID_CONFORMANCE_TEST_DN3009,    // 一致性测试 DN3009
		ID_CONFORMANCE_TEST_DN3010    // 一致性测试 DN3010
	}EnumChargeWorkingId;

	typedef enum tagEnumChargeEndId
	{
		ID_CONFORMANCE_TEST_DP4001,    // 一致性测试 DP4001
		ID_CONFORMANCE_TEST_DP4002,    // 一致性测试 DP4002
		ID_CONFORMANCE_TEST_DN4001,    // 一致性测试 DN4001
		ID_CONFORMANCE_TEST_DN4002,    // 一致性测试 DN4002
		ID_CONFORMANCE_TEST_DN4003,    // 一致性测试 DN4003
		ID_CONFORMANCE_TEST_DN4004     // 一致性测试 DN4004
	}EnumChargeEndId;
'''

enum_def_lines = EnumText.split("\n")
line_pattern = "(.+)//(.+)"

experiment_dict = {}

for line in enum_def_lines:
	s = line.strip()
	result = re.match(line_pattern, s)
	if result:
		group_words = result.group(1).replace(",", "").replace(" ", "").split("_")
		word_list = group_words[1:]
		en = " ".join(word_list).lower()
		cn = result.group(2).replace(" ", "")
		enum = result.group(1).replace(",", "").replace(" ", "").strip()
		experiment_dict[cn] = {
			"en": en,
			"enum": enum,
		}

exp_filename = "experiment_trans.json"
exp_jobj = json.load(open(exp_filename, encoding='utf-8'))

for cat in exp_jobj["categories"]:
	d = experiment_dict.get(cat["name"])
	if d:
		cat["id"] = d["en"]
		cat["enum"] = d["enum"]
	else:
		print(cat["name"])
		continue
	for exp in cat["experiments"]:
		d = experiment_dict.get(exp["name"])
		if d:
			exp["id"] = d["en"]
			exp["enum"] = d["enum"]
		else:
			print(exp["name"])
			continue

outfile = "out.json"
with open(outfile, 'w', encoding="gbk") as f:
	json.dump(exp_jobj, f, ensure_ascii=False)
