onbreak {quit -force}
onerror {quit -force}

asim -t 1ps +access +r +m+IMemory -L blk_mem_gen_v8_4_4 -L xil_defaultlib -L unisims_ver -L unimacro_ver -L secureip -O5 xil_defaultlib.IMemory xil_defaultlib.glbl

do {wave.do}

view wave
view structure

do {IMemory.udo}

run -all

endsim

quit -force
