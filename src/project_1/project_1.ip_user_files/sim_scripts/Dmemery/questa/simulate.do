onbreak {quit -f}
onerror {quit -f}

vsim -t 1ps -lib xil_defaultlib Dmemery_opt

do {wave.do}

view wave
view structure
view signals

do {Dmemery.udo}

run -all

quit -force
