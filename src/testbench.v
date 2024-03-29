           
`timescale 1ns/10ps
`define CYCLE_TIME 10.0          	  // Modify your clock period here
`define SDFFILE    "WIN.sdf"	  // Modify your sdf file name
`define End_CYCLE  300             // Modify cycle times once your design need more cycle times!


module testbench;

`ifdef SDF
	initial $sdf_annotate(`SDFFILE, CPU);
`endif

reg                Clk;
reg                Start;
reg                DataOrReg;
reg [4:0]          address;
reg [7:0]          instr_i;
reg                reset;//used to initalize memorys and registers
reg [7:0]          instr_store[0:(64*4+1)];
reg [1:0]             vout_addr;
wire[7:0]               value_o;
wire          is_positive;
wire [2:0]        easter_egg;
integer            i, outfile, counter;
integer            stall, flush,idx;
integer j,k;
integer err;
reg  [7:0] golden [0:63];

always #(`CYCLE_TIME/2) Clk = ~Clk;    

CPU CPU(
    .clk_i  (Clk),
    .DataOrReg(DataOrReg),
    .address(address),
    .instr_i(instr_i),
    .reset(reset),
    .vout_addr(vout_addr),
    .value_o(value_o),
    .is_positive(is_positive),
    .easter_egg(easter_egg)
);
  
initial begin
    counter = 0;
    stall = 0;
    flush = 0;
    idx = 0;
    DataOrReg = 1;
    address = 5'd8;
    vout_addr = 2'b11;
    err = 0;
    instr_i = 0;
    for(k=0;k < (64*4+1) ;k=k+1) instr_store[k] = 0;
    // Load instructions into instruction memory
    $readmemb("../dat/instruction2.txt", instr_store);
    $readmemh("../dat/golden.dat",golden);
    // Open output file
    outfile = $fopen("../dat/output.txt");
    if (outfile == 0) begin
    // Handle error, e.g., print an error message
    $display("Error: failed to open output file.");
    // Optionally, set outfile to a default value or terminate the simulation
    // $finish;
end
    
    Clk = 1;

    // reset = 0;
    // reset = 1;
    // #(`CYCLE_TIME)
    reset = 0; 
end

initial begin
    $dumpfile("CPU.vcd");
    $dumpvars(0, testbench);
	// $fsdbDumpfile("CPU.fsdb");
	// $fsdbDumpvars;
    // $fsdbDumpMDA;
   //$dumpfile("CPU.vcd");
   //$dumpvars; 
end

always@(posedge Clk) begin
    if(counter<256)begin
        #(`CYCLE_TIME/4)
        instr_i = instr_store[counter];
    end
    else instr_i = 0;
end
//8'b1111_1110 = start
//8'b1111_1111 = end
/* initial begin
    j =0 ;
     $display("--------------------------- [ Simulation Starts !! ] ---------------------------");
        #(`CYCLE_TIME*234);
        for(j=0;j<64;j=j+1)begin
            if((j%4==0)&&(j!=0))address = address + 5'd1;
            @(posedge Clk);
            vout_addr = vout_addr - 2'b1;
            if(value_o !== golden[j])begin
                 err = err + 1;
                 $display("pattern%d is wrong:output %h != expected %h",j,value_o,golden[j]);
            end
            else begin
                 $display("pattern%d is correct:output %h == expected %h",j,value_o,golden[j]);
            end
        end
        #(`CYCLE_TIME*2); 
     $display("--------------------------- Simulation Stops !!---------------------------");
     if (err!=0) begin 
     	$display("============================================================================");
		$display("             ▄▄▄▄▄▄▄ "); 
		$display("         ▄▀▀▀       ▀▄"); 
		$display("       ▄▀            ▀▄ 		ERROR FOUND!!"); 
		$display("      ▄▀          ▄▀▀▄▀▄"); 
		$display("    ▄▀          ▄▀  ██▄▀▄"); 
		$display("   ▄▀  ▄▀▀▀▄    █   ▀▀ █▀▄ 	There are"); 
		$display("   █  █▄▄   █   ▀▄     ▐ █  %d errors in total.", err); 
		$display("  ▐▌  █▀▀  ▄▀     ▀▄▄▄▄▀  █ "); 
		$display("  ▐▌  █   ▄▀              █"); 
		$display("  ▐▌   ▀▀▀                ▐▌"); 
		$display("  ▐▌               ▄      ▐▌ "); 
		$display("  ▐▌         ▄     █      ▐▌ "); 
		$display("   █         ▀█▄  ▄█      ▐▌ "); 
		$display("   ▐▌          ▀▀▀▀       ▐▌ "); 
		$display("    █                     █ "); 
		$display("    ▐▌▀▄                 ▐▌"); 
		$display("     █  ▀                ▀ "); 
        $display("============================================================================");
	end
     else begin 

        $display("============================================================================");
        $display("\033[1;36mrrrrrrrr\033[m    \033[38;5;208mRCCCCCCCCC\033[0m                                                                                      \033[38;5;208mrrrr           riscv\033[0m      ");
        $display("\033[1;36mrsssssssir\033[m  \033[38;5;208mrCCCCCCCCR\033[0m        \033[1;36mrrsssssssssssssssssir   ssi   iisssssssssssssssss    riisssssssssssssss\033[m        \033[38;5;208mvCSc          iSCI\033[0m       ");
        $display("\033[1;36mrssssssssr\033[m  \033[38;5;208mrCCCCCCCr\033[0m         \033[1;36mrrssr             rssr  ssi  issr                  risi\033[m                         \033[38;5;208mrCCR        cSCi\033[0m        ");
        $display("\033[1;36mrsr\033[m         \033[38;5;208mICCCCCs\033[0m           \033[1;36mrrssiiiiiiiiiiiiiiisr   ssi   ssiiiiiiiiiiiiiirr   iss\033[m                   \033[38;5;208mvvvvvv   ICSr     RCC\033[0m          ");
        $display("\033[1;36mrsi\033[m     \033[38;5;208mrivSCCCCS\033[0m    \033[1;36mri        rssr         isss      ssi                   isi  rssr\033[m                            \033[38;5;208mcCSc  rSCI\033[0m           ");
        $display("\033[1;36mrssir\033[m    \033[38;5;208mvCCCCCi\033[0m   \033[1;36mrris        rss            ssir    ssi  rrrrrrrrrrrrrrrrriss   rssirrrrrrrrrrrrrrr\033[m             \033[38;5;208mrCCRcSCc\033[0m            ");
        $display("\033[1;36mrssssir\033[m    \033[38;5;208mSCc\033[0m   \033[1;36mrrisss        rss             rssr   ssi  issssssssssssssssi         sssssssssssssss\033[m               \033[38;5;208mRCCC\033[0m              ");
        $display("\033[1;36mrssssssir\033[m       \033[1;36mrisssss\033[m                                                                                                               ");
        $display("\033[1;36mrssssssssi\033[m     \033[1;36mrissssss\033[m   ");
        $display("============================================================================");
        $finish;
                                                                                   
	end
$finish; 
 
end */

initial begin
    j =0 ;
     $display("--------------------------- [ Simulation Starts !! ] ---------------------------");
        // #(`CYCLE_TIME*234);
        for(j=0;j<264;j=j+1)begin
            if((j%4==0)&&(j!=0))address = address + 5'd1;
            @(posedge Clk);
            vout_addr = vout_addr - 2'b1;
            $display("%d instruction is %h, correct instruction is %h , address is %h , value_o is %h , correct pattern is %h, vout_addr is %h, counter is %d,",j,instr_i,instr_store[j],address,value_o,golden[j],vout_addr,counter);
            // $display("%d address is %h , value_o is %h , correct pattern is %h, vout_addr is %h, counter is %d,",j,address,value_o,golden[j],vout_addr,counter);
            // $display("goden[%d] is %h",j,golden[j]);
            // if(value_o !== golden[j])begin
            //      err = err + 1;
            //      $display("pattern%d is wrong:output %h != expected %h",j,value_o,golden[j]);
            // end
            // else begin
            //      $display("pattern%d is correct:output %h == expected %h",j,value_o,golden[j]);
            // end
        end
        #(`CYCLE_TIME*2); 
     $display("--------------------------- Simulation Stops !!---------------------------");
end

always@(posedge Clk) begin
    if(counter == 300)    // stop after 240 cycles
        $finish;
    
    counter = counter + 1;
    
      
end

  
endmodule
