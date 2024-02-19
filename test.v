module test #(
    parameter ENABLE_PCPI = 1,
    parameter ENABLE_MUL = 1,
    parameter ENABLE_FAST_MUL = 0,
    parameter ENABLE_DIV = 0
) (
    input         pcpi_wr,
    input  [31:0] pcpi_rd,
    input         pcpi_wait,
    input         pcpi_ready,
    input         pcpi_mul_ready,
    input         pcpi_mul_wait,
    output reg    pcpi_int_wr,
    output reg [31:0] pcpi_int_rd,
    output reg    pcpi_int_wait,
    output reg    pcpi_int_ready
);

always @* begin
    pcpi_int_wr = 0;
    pcpi_int_rd = 32'bx;
    pcpi_int_wait  = |{ENABLE_PCPI && pcpi_wait,  (ENABLE_MUL || ENABLE_FAST_MUL) && pcpi_mul_wait, ENABLE_DIV && pcpi_div_wait};
    pcpi_int_ready = |{ENABLE_PCPI && pcpi_ready, (ENABLE_MUL || ENABLE_FAST_MUL) && pcpi_mul_ready, ENABLE_DIV && pcpi_div_ready};

    (* parallel_case *)
    case (1'b1)
        pcpi_ready: begin
            pcpi_int_wr = pcpi_wr;
            pcpi_int_rd = pcpi_rd;
        end
        (ENABLE_MUL || ENABLE_FAST_MUL) && pcpi_mul_ready: begin
            pcpi_int_wr = pcpi_mul_wr;
            pcpi_int_rd = pcpi_mul_rd;
        end
    endcase
end

endmodule
