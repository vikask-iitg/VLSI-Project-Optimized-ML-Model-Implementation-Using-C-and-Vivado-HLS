set moduleName k2c_affine_matmul_1
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {k2c_affine_matmul.1}
set C_modelType { void 0 }
set C_modelArgList {
	{ C float 32 regular {array 4 { 0 3 } 0 1 }  }
	{ C1 float 32 regular {array 4 { 0 3 } 0 1 }  }
	{ C7 float 32 regular {array 4 { 0 3 } 0 1 }  }
	{ A float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ A8 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ d float 32 regular {array 32 { 1 3 } 1 1 }  }
	{ outrows int 8 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "C", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "C1", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "C7", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "A", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A8", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "d", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "outrows", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 28
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ C_address0 sc_out sc_lv 2 signal 0 } 
	{ C_ce0 sc_out sc_logic 1 signal 0 } 
	{ C_we0 sc_out sc_logic 1 signal 0 } 
	{ C_d0 sc_out sc_lv 32 signal 0 } 
	{ C1_address0 sc_out sc_lv 2 signal 1 } 
	{ C1_ce0 sc_out sc_logic 1 signal 1 } 
	{ C1_we0 sc_out sc_logic 1 signal 1 } 
	{ C1_d0 sc_out sc_lv 32 signal 1 } 
	{ C7_address0 sc_out sc_lv 2 signal 2 } 
	{ C7_ce0 sc_out sc_logic 1 signal 2 } 
	{ C7_we0 sc_out sc_logic 1 signal 2 } 
	{ C7_d0 sc_out sc_lv 32 signal 2 } 
	{ A_address0 sc_out sc_lv 4 signal 3 } 
	{ A_ce0 sc_out sc_logic 1 signal 3 } 
	{ A_q0 sc_in sc_lv 32 signal 3 } 
	{ A8_address0 sc_out sc_lv 4 signal 4 } 
	{ A8_ce0 sc_out sc_logic 1 signal 4 } 
	{ A8_q0 sc_in sc_lv 32 signal 4 } 
	{ d_address0 sc_out sc_lv 5 signal 5 } 
	{ d_ce0 sc_out sc_logic 1 signal 5 } 
	{ d_q0 sc_in sc_lv 32 signal 5 } 
	{ outrows sc_in sc_lv 8 signal 6 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "C_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "C", "role": "address0" }} , 
 	{ "name": "C_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C", "role": "ce0" }} , 
 	{ "name": "C_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C", "role": "we0" }} , 
 	{ "name": "C_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C", "role": "d0" }} , 
 	{ "name": "C1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "C1", "role": "address0" }} , 
 	{ "name": "C1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C1", "role": "ce0" }} , 
 	{ "name": "C1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C1", "role": "we0" }} , 
 	{ "name": "C1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C1", "role": "d0" }} , 
 	{ "name": "C7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "C7", "role": "address0" }} , 
 	{ "name": "C7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C7", "role": "ce0" }} , 
 	{ "name": "C7_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C7", "role": "we0" }} , 
 	{ "name": "C7_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C7", "role": "d0" }} , 
 	{ "name": "A_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A", "role": "address0" }} , 
 	{ "name": "A_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A", "role": "ce0" }} , 
 	{ "name": "A_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A", "role": "q0" }} , 
 	{ "name": "A8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A8", "role": "address0" }} , 
 	{ "name": "A8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A8", "role": "ce0" }} , 
 	{ "name": "A8_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A8", "role": "q0" }} , 
 	{ "name": "d_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "d", "role": "address0" }} , 
 	{ "name": "d_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "d", "role": "ce0" }} , 
 	{ "name": "d_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "d", "role": "q0" }} , 
 	{ "name": "outrows", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "outrows", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4"],
		"CDFG" : "k2c_affine_matmul_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "5", "EstimateLatencyMax" : "262174",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "C", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "C1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "C7", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "A", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "d", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "outrows", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_fadd_32ns_ocq_U187", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_fadd_32ns_ocq_U188", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_fmul_32ns_pcA_U189", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_fmul_32ns_pcA_U190", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	k2c_affine_matmul_1 {
		C {Type O LastRead -1 FirstWrite 30}
		C1 {Type O LastRead -1 FirstWrite 30}
		C7 {Type O LastRead -1 FirstWrite 30}
		A {Type I LastRead 5 FirstWrite -1}
		A8 {Type I LastRead 5 FirstWrite -1}
		d {Type I LastRead 10 FirstWrite -1}
		outrows {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "5", "Max" : "262174"}
	, {"Name" : "Interval", "Min" : "5", "Max" : "262174"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	C { ap_memory {  { C_address0 mem_address 1 2 }  { C_ce0 mem_ce 1 1 }  { C_we0 mem_we 1 1 }  { C_d0 mem_din 1 32 } } }
	C1 { ap_memory {  { C1_address0 mem_address 1 2 }  { C1_ce0 mem_ce 1 1 }  { C1_we0 mem_we 1 1 }  { C1_d0 mem_din 1 32 } } }
	C7 { ap_memory {  { C7_address0 mem_address 1 2 }  { C7_ce0 mem_ce 1 1 }  { C7_we0 mem_we 1 1 }  { C7_d0 mem_din 1 32 } } }
	A { ap_memory {  { A_address0 mem_address 1 4 }  { A_ce0 mem_ce 1 1 }  { A_q0 mem_dout 0 32 } } }
	A8 { ap_memory {  { A8_address0 mem_address 1 4 }  { A8_ce0 mem_ce 1 1 }  { A8_q0 mem_dout 0 32 } } }
	d { ap_memory {  { d_address0 mem_address 1 5 }  { d_ce0 mem_ce 1 1 }  { d_q0 mem_dout 0 32 } } }
	outrows { ap_none {  { outrows in_data 0 8 } } }
}
