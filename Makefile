wave: sim  
	gtkwave waveform.vcd

sim: build 
	./obj_dir/VSingle_Cycle

build:
	verilator --cc Single_Cycle.sv -Wno-fatal -Wno-WIDTH -Wno-CASEINCOMPLETE
	verilator -Wall --trace -cc Single_Cycle.sv --exe tb_Single_Cycle.cpp -Wno-fatal -Wno-WIDTH -Wno-CASEINCOMPLETE
	make -C obj_dir -f VSingle_Cycle.mk VSingle_Cycle -Wno-fatal -Wno-WIDTH -Wno-CASEINCOMPLETE

clean:
	rm -rf obj_dir waveform.vcd

.PHONY: clean
