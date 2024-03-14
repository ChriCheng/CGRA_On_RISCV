TOP_NAME := CPU
SRC_DIR  := ../src
INC_FILE := $(shell find $(SRC_DIR) -name '*.vh') $(shell find $(SRC_DIR) -name '*.svh') $(shell find $(SRC_DIR) -name '*.v') $(shell find $(SRC_DIR) -name '*.sv')

.PHONY: run clean

run: obj_dir/V$(TOP_NAME)
	./obj_dir/V$(TOP_NAME)

clean:
	rm -rf obj_dir
	