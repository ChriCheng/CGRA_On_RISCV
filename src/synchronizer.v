module simple_synchronizer( 
input              signal_in,   
input              clk_ddr,
input              syn_signal,      
output	reg        signal_out  
);


reg signal_r1;
always @(posedge clk_ddr or negedge syn_signal)begin
	signal_r1 <= signal_in;
	signal_out <= (syn_signal == 1'b1)?signal_r1:1'b0;
    
end

endmodule



// module simple_synchronizer (
//     input wire locked,         //clk locked
//     input  wire clk_ddr,      // 高频 DDR 时钟
//     input  wire cpu_signal,   // 来自 CPU 的低频信号
//     input wire syn_ddr,
//     output wire ddr_signal    // 同步后的信号
// );
// reg sync_0 = 1'b0;
// reg sync_1 = 1'b0;
// reg dout_enable = 1'b0;


//     // 在高频时钟域上升沿进行信号同步
//     always @(posedge clk_ddr) begin
//             // 两级寄存器级联

//         if (locked) begin
            
        
//         sync_0 <= cpu_signal;   // 第一级寄存器
//         sync_1 <= sync_0;       // 第二级寄存器
//         if (syn_ddr)
//             dout_enable <= 1'b0; // 下一个周期将 dout 设置为 0
//         else
//             dout_enable <= 1'b1; // 保持 dout 有效输出
//     end
// end

//     // 输出最终同步的信号
//     assign ddr_signal = dout_enable?sync_1:1'b0;

// endmodule
