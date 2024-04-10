onbreak {quit -f}
onerror {quit -f}

vsim -t 1ps -lib xil_defaultlib IMemory_opt

do {wave.do}

view wave
view structure
view signals

do {IMemory.udo}

run -all

quit -force
