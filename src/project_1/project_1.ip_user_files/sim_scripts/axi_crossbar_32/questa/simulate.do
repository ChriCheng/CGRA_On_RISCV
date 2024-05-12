onbreak {quit -f}
onerror {quit -f}

vsim -t 1ps -lib xil_defaultlib axi_crossbar_32_opt

do {wave.do}

view wave
view structure
view signals

do {axi_crossbar_32.udo}

run -all

quit -force
