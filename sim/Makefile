TOP_NAME := testbench
SRC_DIR  := ../src
SRC_FILE := $(shell find $(SRC_DIR) -name '*.vh') $(shell find $(SRC_DIR) -name '*.svh') $(shell find $(SRC_DIR) -name '*.v') $(shell find $(SRC_DIR) -name '*.sv')

.PHONY: run clean

obj_dir/V$(TOP_NAME): src/* $(SRC_FILE)
	verilator -cc -Wno-NULLPORT -Wno-COMBDLY -Wno-PINMISSING -Wno-MODDUP --exe --trace --trace-structs --build --timing  src/sim_main.cpp $(SRC_FILE) -I$(SRC_DIR) --top $(TOP_NAME)   -j `nproc`

run: obj_dir/V$(TOP_NAME)
	./obj_dir/V$(TOP_NAME)

clean:
	rm -rf obj_dir
