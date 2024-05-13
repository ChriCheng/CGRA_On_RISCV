module Top(
    input               clk,
    input               rst,
    // DDR interface(output)
    output wire [16 : 0] ddr4_adr,
    output wire [1 : 0] ddr4_ba,
    output wire [0 : 0] ddr4_cke,
    output wire [0 : 0] ddr4_cs_n,
    inout wire [7 : 0] ddr4_dm_dbi_n,
    inout wire [63 : 0] ddr4_dq,
    inout wire [7 : 0] ddr4_dqs_c,
    inout wire [7 : 0] ddr4_dqs_t,
    output wire [0 : 0] ddr4_odt,
    output wire [0 : 0] ddr4_bg,
    output wire ddr4_reset_n,
    output wire ddr4_act_n,
    output wire [0 : 0] ddr4_ck_c,
    output wire [0 : 0] ddr4_ck_t
    // output wire ddr4_ui_clk,
    // output wire ddr4_ui_clk_sync_rst
);
wire [31:0] douta,pc,instr,mem_rdata,mem_wdata;
wire [9:0] mem_addr;
wire data_mem_wea;
wire ddr4_ui_clk;
// wire init_calib_complete;


wire axi_awlock_cpu, axi_awvalid_cpu, axi_awready_cpu, axi_wlast_cpu, axi_wvalid_cpu, axi_wready_cpu;
wire axi_bready_cpu, axi_bvalid_cpu, axi_arlock_cpu, axi_arvalid_cpu, axi_arready_cpu;
wire axi_rready_cpu, axi_rlast_cpu, axi_rvalid_cpu;
wire [1:0] axi_awid_cpu, axi_awburst_cpu, axi_bresp_cpu, axi_arburst_cpu, axi_rresp_cpu;
wire [2:0] axi_awsize_cpu, axi_awprot_cpu, axi_arsize_cpu, axi_arprot_cpu;
wire [3:0] axi_arid_cpu,axi_awcache_cpu, axi_awqos_cpu, axi_bid_cpu, axi_arcache_cpu, axi_arqos_cpu, axi_rid_cpu;
wire [7:0] axi_awlen_cpu, axi_arlen_cpu;
wire [31:0] axi_awaddr_cpu, axi_araddr_cpu;
wire [3:0] axi_wstrb_cpu;
wire [31:0] axi_wdata_cpu, axi_rdata_cpu;
wire Imem_enable;

CPU CPU(
    .clk_i        ( clk        ),
    .reset        ( rst        ),
    .inst_addr    ( pc    ),
    .instr    ( instr    ),
    .axi_stall (Imem_enable),
    // .init_calib_complete (init_calib_complete),
    // .data_mem_wea ( data_mem_wea ),
    // .mem_addr     ( mem_addr     ),
    // .mem_wdata    ( mem_wdata    ),
    // .mem_rdata    ( mem_rdata    ),
    .axi_awid     ( axi_awid_cpu     ),
    .axi_awaddr   ( axi_awaddr_cpu   ),
    .axi_awlen    ( axi_awlen_cpu    ),
    .axi_awsize   ( axi_awsize_cpu   ),
    .axi_awburst  ( axi_awburst_cpu  ),
    .axi_awlock   ( axi_awlock_cpu   ),
    .axi_awcache  ( axi_awcache_cpu  ),
    .axi_awprot   ( axi_awprot_cpu   ),
    .axi_awregion ( axi_awregion_cpu ),
    .axi_awqos    ( axi_awqos_cpu    ),
    .axi_awvalid  ( axi_awvalid_cpu  ),
    .axi_awready  ( axi_awready_cpu  ),
    .axi_wdata    ( axi_wdata_cpu    ),
    .axi_wstrb    ( axi_wstrb_cpu    ),
    .axi_wlast    ( axi_wlast_cpu    ),
    .axi_wvalid   ( axi_wvalid_cpu   ),
    .axi_wready   ( axi_wready_cpu   ),
    .axi_bid      ( axi_bid_cpu      ),
    .axi_bresp    ( axi_bresp_cpu    ),
    .axi_bvalid   ( axi_bvalid_cpu   ),
    .axi_bready   ( axi_bready_cpu   ),
    .axi_arid (axi_arid_cpu),
    .axi_araddr(axi_araddr_cpu),
    .axi_arlen(axi_arlen_cpu),
    .axi_arsize(axi_arsize_cpu),
    .axi_arburst(axi_arburst_cpu),
    .axi_arvalid(axi_arvalid_cpu),
    .axi_arready(axi_arready_cpu),
    .axi_rid(axi_rid_cpu),
    .axi_rdata(axi_rdata_cpu),
    .axi_rresp(axi_rresp_cpu),
    .axi_rlast(axi_rlast_cpu),
    .axi_rvalid(axi_rvalid_cpu),
    .axi_rready(axi_rready_cpu) 
);

wire locked,clk_out;

//PLL PLL
//(
// // Clock out ports
// .clk_out1(clk_out),     // output clk_out1
// // Status and control signals
// .reset(rst), // input reset
// .locked(locked),       // output locked
//// Clock in ports
// .clk_in1(clk));      // input clk_in1


IMemory inst_rom (
  .clka(clk),    // input wire clka
  .ena(~Imem_enable),      // input wire ena 
  .addra({2'b0, (pc[9:0]>>2)}),  // input wire [9 : 0] addra
  .douta(instr)  // output wire [31 : 0] douta
);

// Dmemery data_ram (
//   .clka(clk),    // input wire clka
//   .ena(1'b1),      // input wire ena
//   .wea(data_mem_wea),      // input wire [0 : 0] wea
//   .addra(mem_addr),  // input wire [9 : 0] addra
//   .dina(mem_wdata),    // input wire [31 : 0] dina
//   .douta(mem_rdata)  // output wire [31 : 0] douta
// );
/* -------------------------DDR------------------------- */
wire axi_awlock_ddr,axi_awvalid_ddr,axi_awready_ddr,axi_wlast_ddr,axi_wvalid_ddr,axi_wready_ddr;
wire axi_bready_ddr,axi_bvalid_ddr,axi_arlock_ddr,axi_arvalid_ddr,axi_arready_ddr;
wire axi_rready_ddr,axi_rlast_ddr,axi_rvalid_ddr;
wire [1:0] axi_awburst_ddr,axi_bresp_ddr,axi_arburst_ddr,axi_rresp_ddr;
wire [2:0] axi_awsize_ddr,axi_awprot_ddr,axi_arsize_ddr,axi_arprot_ddr;
wire [3:0] axi_awid_ddr,axi_awcache_ddr,axi_awqos_ddr,axi_bid_ddr,axi_arid_ddr,axi_arcache_ddr,axi_arqos_ddr,axi_rid_ddr;
wire [7:0] axi_awlen_ddr,axi_arlen_ddr;
wire [31:0]axi_awaddr_ddr,axi_araddr_ddr;
wire [3 : 0] axi_wstrb_ddr;     
wire [31 : 0] axi_wdata_ddr,axi_rdata_ddr;    
/* -------------------------CGRA------------------------- */
wire axi_awlock_CGRA,axi_awvalid_CGRA,axi_awready_CGRA,axi_wlast_CGRA,axi_wvalid_CGRA,axi_wready_CGRA;
wire axi_bready_CGRA,axi_bvalid_CGRA,axi_arlock_CGRA,axi_arvalid_CGRA,axi_arready_CGRA;
wire axi_rready_CGRA,axi_rlast_CGRA,axi_rvalid_CGRA;
wire [1:0] axi_awburst_CGRA,axi_bresp_CGRA,axi_arburst_CGRA,axi_rresp_CGRA;
wire [2:0] axi_awsize_CGRA,axi_awprot_CGRA,axi_arsize_CGRA,axi_arprot_CGRA;
wire [3:0] axi_awid_CGRA,axi_awcache_CGRA,axi_awqos_CGRA,axi_bid_CGRA,axi_arid_CGRA,axi_arcache_CGRA,axi_arqos_CGRA,axi_rid_CGRA;
wire [7:0] axi_awlen_CGRA,axi_arlen_CGRA;
wire [31:0]axi_awaddr_CGRA,axi_araddr_CGRA;
wire [3 : 0] axi_wstrb_CGRA;     
wire [31 : 0] axi_wdata_CGRA,axi_rdata_CGRA;    

/* -------------------------DDR------------------------- */
wire [63 : 0] Oc_axi_awaddr;
wire [15 : 0] Oc_axi_awlen;
wire [5 : 0] Oc_axi_awsize;
wire [3 : 0] Oc_axi_awburst;
wire [1 : 0] Oc_axi_awvalid;
wire  [63 : 0] Oc_axi_wdata;
wire [7 : 0] Oc_axi_wstrb;
wire [1 : 0] Oc_axi_wlast;
wire [1 : 0] Oc_axi_wvalid;
wire [1 : 0] Oc_axi_bready;
wire [7 : 0] Oc_axi_awid;
wire [7 : 0] Oc_axi_arid;
wire [63 : 0] Oc_axi_araddr;
wire [15 : 0] Oc_axi_arlen;
wire [5 : 0] Oc_axi_arsize;
wire [3 : 0] Oc_axi_arburst;
wire [1 : 0] Oc_axi_arvalid;
wire [1 : 0] Oc_axi_rready;

assign axi_awid_ddr = Oc_axi_awid[3:0];
assign axi_awaddr_ddr = Oc_axi_awaddr[31:0];
assign axi_awlen_ddr = Oc_axi_awlen[7:0];
assign axi_awsize_ddr = Oc_axi_awsize[2:0];
assign axi_awburst_ddr = Oc_axi_awburst[1:0];

assign axi_awvalid_ddr = Oc_axi_awvalid[0:0];


assign axi_wdata_ddr = Oc_axi_wdata[31:0];
assign axi_wstrb_ddr = Oc_axi_wstrb[3:0];
assign axi_wlast_ddr = Oc_axi_wlast[0:0];
assign axi_wvalid_ddr = Oc_axi_wvalid[0:0];

assign axi_bready_ddr = Oc_axi_bready[0:0];

assign axi_arid_ddr  =Oc_axi_arid [3 : 0] ;
assign axi_araddr_ddr =Oc_axi_araddr [31 : 0] ;
assign axi_arlen_ddr =Oc_axi_arlen [7 : 0] ;
assign axi_arsize_ddr  =Oc_axi_arsize [2 : 0] ;
assign axi_arburst_ddr  =Oc_axi_arburst [1 : 0] ;
assign axi_arvalid_ddr  =Oc_axi_arvalid [0 : 0] ;

assign axi_rready_ddr  =Oc_axi_rready [0 : 0] ;
/* -------------------------CGRA------------------------- */
assign axi_awid_CGRA = Oc_axi_awid[7:4];
assign axi_awaddr_CGRA = Oc_axi_awaddr[63:32];
assign axi_awlen_CGRA = Oc_axi_awlen[15:8];
assign axi_awsize_CGRA = Oc_axi_awsize[5:3];
assign axi_awburst_CGRA = Oc_axi_awburst[3:2];

assign axi_awvalid_CGRA = Oc_axi_awvalid[1:1];


assign axi_wdata_CGRA = Oc_axi_wdata[63:32];
assign axi_wstrb_CGRA = Oc_axi_wstrb[7:4];
assign axi_wlast_CGRA = Oc_axi_wlast[1:1];
assign axi_wvalid_CGRA = Oc_axi_wvalid[1:1];

assign axi_bready_CGRA = Oc_axi_bready[1:1];
assign axi_arid_CGRA  =Oc_axi_arid[ 7: 4];
assign axi_araddr_CGRA =Oc_axi_araddr[ 63: 32];
assign axi_arlen_CGRA =Oc_axi_arlen[ 15: 8];
assign axi_arsize_CGRA  =Oc_axi_arsize[ 5: 3];
assign axi_arburst_CGRA  =Oc_axi_arburst[ 3: 2];
assign axi_arvalid_CGRA  =Oc_axi_arvalid[ 1: 1];
assign axi_rready_CGRA  =Oc_axi_rready[ 1: 1];











axi_crossbar_32 axi_crossbar_32 (
  .aclk(clk),                      // input wire aclk
  .aresetn(~rst),                // input wire aresetn
  /* -----------------------CPU IS MASTER----------------------- */
  .s_axi_awid(axi_awid_cpu),          // input wire [3 : 0] s_axi_awid
  .s_axi_awaddr(axi_awaddr_cpu),      // input wire [31 : 0] s_axi_awaddr
  .s_axi_awlen(axi_awlen_cpu),        // input wire [7 : 0] s_axi_awlen
  .s_axi_awsize(axi_awsize_cpu),      // input wire [2 : 0] s_axi_awsize
  .s_axi_awburst(axi_awburst_cpu),    // input wire [1 : 0] s_axi_awburst
//   .s_axi_awlock(s_axi_awlock),      // input wire [0 : 0] s_axi_awlock
//   .s_axi_awcache(s_axi_awcache),    // input wire [3 : 0] s_axi_awcache
//   .s_axi_awprot(s_axi_awprot),      // input wire [2 : 0] s_axi_awprot
//   .s_axi_awqos(s_axi_awqos),        // input wire [3 : 0] s_axi_awqos
  .s_axi_awvalid(axi_awvalid_cpu),    // input wire [0 : 0] s_axi_awvalid
  .s_axi_awready(axi_awready_cpu),    // output wire [0 : 0] s_axi_awready

  .s_axi_wdata(axi_wdata_cpu),        // input wire [31 : 0] s_axi_wdata
  .s_axi_wstrb(axi_wstrb_cpu),        // input wire [3 : 0] s_axi_wstrb
  .s_axi_wlast(axi_wlast_cpu),        // input wire [0 : 0] s_axi_wlast
  .s_axi_wvalid(axi_wvalid_cpu),      // input wire [0 : 0] s_axi_wvalid
  .s_axi_wready(axi_wready_cpu),      // output wire [0 : 0] s_axi_wready

  .s_axi_bid(axi_bid_cpu),            // output wire [3 : 0] s_axi_bid
  .s_axi_bresp(axi_bresp_cpu),        // output wire [1 : 0] s_axi_bresp
  .s_axi_bvalid(axi_bvalid_cpu),      // output wire [0 : 0] s_axi_bvalid
  .s_axi_bready(axi_bready_cpu),      // input wire [0 : 0] s_axi_bready

  .s_axi_arid(axi_arid_cpu),          // input wire [3 : 0] s_axi_arid
  .s_axi_araddr(axi_araddr_cpu),      // input wire [31 : 0] s_axi_araddr
  .s_axi_arlen(axi_arlen_cpu),        // input wire [7 : 0] s_axi_arlen
  .s_axi_arsize(axi_arsize_cpu),      // input wire [2 : 0] s_axi_arsize
  .s_axi_arburst(axi_arburst_cpu),    // input wire [1 : 0] s_axi_arburst
  .s_axi_arvalid(axi_arvalid_cpu),    // input wire [0 : 0] s_axi_arvalid
  .s_axi_arready(axi_arready_cpu),    // output wire [0 : 0] s_axi_arready
  .s_axi_rid(axi_rid_cpu),            // output wire [3 : 0] s_axi_rid
  .s_axi_rdata(axi_rdata_cpu),        // output wire [31 : 0] s_axi_rdata
  .s_axi_rresp(axi_rresp_cpu),        // output wire [1 : 0] s_axi_rresp
  .s_axi_rlast(axi_rlast_cpu),        // output wire [0 : 0] s_axi_rlast
  .s_axi_rvalid(axi_rvalid_cpu),      // output wire [0 : 0] s_axi_rvalid
  .s_axi_rready(axi_rready_cpu),      // input wire [0 : 0] s_axi_rready
  /* -----------------------Crossbar IS MASTER----------------------- */
  .m_axi_awid(Oc_axi_awid),          // output wire [7 : 0] m_axi_awid
  .m_axi_awaddr(Oc_axi_awaddr),      // output wire [63 : 0] m_axi_awaddr
  .m_axi_awlen(Oc_axi_awlen),        // output wire [15 : 0] m_axi_awlen
  .m_axi_awsize(Oc_axi_awsize),      // output wire [5 : 0] m_axi_awsize
  .m_axi_awburst(Oc_axi_awburst),    // output wire [3 : 0] m_axi_awburst
//   .m_axi_awlock(m_axi_awlock),      // output wire [1 : 0] m_axi_awlock
//   .m_axi_awcache(m_axi_awcache),    // output wire [7 : 0] m_axi_awcache
//   .m_axi_awprot(m_axi_awprot),      // output wire [5 : 0] m_axi_awprot
//   .m_axi_awregion(m_axi_awregion),  // output wire [7 : 0] m_axi_awregion
//   .m_axi_awqos(m_axi_awqos),        // output wire [7 : 0] m_axi_awqos
  .m_axi_awvalid(Oc_axi_awvalid),    // output wire [1 : 0] m_axi_awvalid
  .m_axi_awready({axi_awready_CGRA,axi_awready_ddr}),    // input wire [1 : 0] m_axi_awready

  .m_axi_wdata(Oc_axi_wdata),        // output wire [63 : 0] m_axi_wdata
  .m_axi_wstrb(Oc_axi_wstrb),        // output wire [7 : 0] m_axi_wstrb
  .m_axi_wlast(Oc_axi_wlast),        // output wire [1 : 0] m_axi_wlast
  .m_axi_wvalid(Oc_axi_wvalid),      // output wire [1 : 0] m_axi_wvalid
  .m_axi_wready({axi_wready_CGRA,axi_wready_ddr}),      // input wire [1 : 0] m_axi_wready

  .m_axi_bid({axi_bid_CGRA,axi_bid_ddr}),            // input wire [7 : 0] m_axi_bid
  .m_axi_bresp({axi_bresp_CGRA,axi_bresp_ddr}),        // input wire [3 : 0] m_axi_bresp
  .m_axi_bvalid({axi_bvalid_CGRA,axi_bvalid_ddr}),      // input wire [1 : 0] m_axi_bvalid
  .m_axi_bready(Oc_axi_bready),      // output wire [1 : 0] m_axi_bready

  .m_axi_arid(Oc_axi_arid),          // output wire [7 : 0] m_axi_arid
  .m_axi_araddr(Oc_axi_araddr),      // output wire [63 : 0] m_axi_araddr
  .m_axi_arlen(Oc_axi_arlen),        // output wire [15 : 0] m_axi_arlen
  .m_axi_arsize(Oc_axi_arsize),      // output wire [5 : 0] m_axi_arsize
  .m_axi_arburst(Oc_axi_arburst),    // output wire [3 : 0] m_axi_arburst
  .m_axi_arvalid(Oc_axi_arvalid),    // output wire [1 : 0] m_axi_arvalid
  .m_axi_arready({axi_arready_CGRA,axi_arready_ddr}),    // input wire [1 : 0] m_axi_arready

  .m_axi_rid({axi_rid_CGRA,axi_rid_ddr}),            // input wire [7 : 0] m_axi_rid
  .m_axi_rdata({axi_rdata_CGRA,axi_rdata_ddr}),        // input wire [63 : 0] m_axi_rdata
  .m_axi_rresp({axi_rresp_CGRA,axi_rresp_ddr}),        // input wire [3 : 0] m_axi_rresp
  .m_axi_rlast({axi_rlast_CGRA,axi_rlast_ddr}),        // input wire [1 : 0] m_axi_rlast
  .m_axi_rvalid({axi_rvalid_CGRA,axi_rvalid_ddr}),      // input wire [1 : 0] m_axi_rvalid
  .m_axi_rready(Oc_axi_rready)      // output wire [1 : 0] m_axi_rready
);



axi_bram CGRA_bram (
//   .rsta_busy(rsta_busy),          // output wire rsta_busy
//   .rstb_busy(rstb_busy),          // output wire rstb_busy
  .s_aclk(clk),                // input wire s_aclk
  .s_aresetn(clk),          // input wire s_aresetn
  .s_axi_awid(axi_awid_CGRA),        // input wire [3 : 0] s_axi_awid
  .s_axi_awaddr(axi_awaddr_CGRA),    // input wire [31 : 0] s_axi_awaddr
  .s_axi_awlen(axi_awlen_CGRA),      // input wire [7 : 0] s_axi_awlen
  .s_axi_awsize(axi_awsize_CGRA),    // input wire [2 : 0] s_axi_awsize
  .s_axi_awburst(axi_awburst_CGRA),  // input wire [1 : 0] s_axi_awburst
  .s_axi_awvalid(axi_awvalid_CGRA),  // input wire s_axi_awvalid
  .s_axi_awready(axi_awready_CGRA),  // output wire s_axi_awready
  .s_axi_wdata(axi_wdata_CGRA),      // input wire [31 : 0] s_axi_wdata
  .s_axi_wstrb(axi_wstrb_CGRA),      // input wire [3 : 0] s_axi_wstrb
  .s_axi_wlast(axi_wlast_CGRA),      // input wire s_axi_wlast
  .s_axi_wvalid(axi_wvalid_CGRA),    // input wire s_axi_wvalid
  .s_axi_wready(axi_wready_CGRA),    // output wire s_axi_wready
  .s_axi_bid(axi_bid_CGRA),          // output wire [3 : 0] s_axi_bid
  .s_axi_bresp(axi_bresp_CGRA),      // output wire [1 : 0] s_axi_bresp
  .s_axi_bvalid(axi_bvalid_CGRA),    // output wire s_axi_bvalid
  .s_axi_bready(axi_bready_CGRA),    // input wire s_axi_bready
  .s_axi_arid(axi_arid_CGRA),        // input wire [3 : 0] s_axi_arid
  .s_axi_araddr(axi_araddr_CGRA),    // input wire [31 : 0] s_axi_araddr
  .s_axi_arlen(axi_arlen_CGRA),      // input wire [7 : 0] s_axi_arlen
  .s_axi_arsize(axi_arsize_CGRA),    // input wire [2 : 0] s_axi_arsize
  .s_axi_arburst(axi_arburst_CGRA),  // input wire [1 : 0] s_axi_arburst
  .s_axi_arvalid(axi_arvalid_CGRA),  // input wire s_axi_arvalid
  .s_axi_arready(axi_arready_CGRA),  // output wire s_axi_arready
  .s_axi_rid(axi_rid_CGRA),          // output wire [3 : 0] s_axi_rid
  .s_axi_rdata(axi_rdata_CGRA),      // output wire [31 : 0] s_axi_rdata
  .s_axi_rresp(axi_rresp_CGRA),      // output wire [1 : 0] s_axi_rresp
  .s_axi_rlast(axi_rlast_CGRA),      // output wire s_axi_rlast
  .s_axi_rvalid(axi_rvalid_CGRA),    // output wire s_axi_rvalid
  .s_axi_rready(axi_rready_CGRA)    // input wire s_axi_rready
);


axi_bram axi_bram (
  .rsta_busy(rsta_busy),          // output wire rsta_busy
  .rstb_busy(rstb_busy),          // output wire rstb_busy
  .s_aclk(clk),                // input wire s_aclk
  .s_aresetn(~rst),          // input wire s_aresetn
  .s_axi_awid(axi_awid_ddr),        // input wire [3 : 0] s_axi_awid
  .s_axi_awaddr(axi_awaddr_ddr),    // input wire [31 : 0] s_axi_awaddr
  .s_axi_awlen(axi_awlen_ddr),      // input wire [7 : 0] s_axi_awlen
  .s_axi_awsize(axi_awsize_ddr),    // input wire [2 : 0] s_axi_awsize
  .s_axi_awburst(axi_awburst_ddr),  // input wire [1 : 0] s_axi_awburst
  .s_axi_awvalid(axi_awvalid_ddr),  // input wire s_axi_awvalid
  .s_axi_awready(axi_awready_ddr),  // output wire s_axi_awready

  .s_axi_wdata(axi_wdata_ddr),      // input wire [31 : 0] s_axi_wdata
  .s_axi_wstrb(axi_wstrb_ddr),      // input wire [3 : 0] s_axi_wstrb
  .s_axi_wlast(axi_wlast_ddr),      // input wire s_axi_wlast
  .s_axi_wvalid(axi_wvalid_ddr),    // input wire s_axi_wvalid
  .s_axi_wready(axi_wready_ddr),    // output wire s_axi_wready

  .s_axi_bid(axi_bid_ddr),          // output wire [3 : 0] s_axi_bid
  .s_axi_bresp(axi_bresp_ddr),      // output wire [1 : 0] s_axi_bresp
  .s_axi_bvalid(axi_bvalid_ddr),    // output wire s_axi_bvalid
  .s_axi_bready(axi_bready_ddr),    // input wire s_axi_bready

  .s_axi_arid(axi_arid_ddr),        // input wire [3 : 0] s_axi_arid
  .s_axi_araddr(axi_araddr_ddr),    // input wire [31 : 0] s_axi_araddr
  .s_axi_arlen(axi_arlen_ddr),      // input wire [7 : 0] s_axi_arlen
  .s_axi_arsize(axi_arsize_ddr),    // input wire [2 : 0] s_axi_arsize
  .s_axi_arburst(axi_arburst_ddr),  // input wire [1 : 0] s_axi_arburst
  .s_axi_arvalid(axi_arvalid_ddr),  // input wire s_axi_arvalid
  .s_axi_arready(axi_arready_ddr),  // output wire s_axi_arready

  .s_axi_rid(axi_rid_ddr),          // output wire [3 : 0] s_axi_rid
  .s_axi_rdata(axi_rdata_ddr),      // output wire [31 : 0] s_axi_rdata
  .s_axi_rresp(axi_rresp_ddr),      // output wire [1 : 0] s_axi_rresp
  .s_axi_rlast(axi_rlast_ddr),      // output wire s_axi_rlast
  .s_axi_rvalid(axi_rvalid_ddr),    // output wire s_axi_rvalid
  .s_axi_rready(axi_rready_ddr)    // input wire s_axi_rready
);
// ddr4 DDR (
//   .c0_init_calib_complete(init_calib_complete),    // output wire init_calib_complete
//   /* indicates that initialization and calibration are complete 
//   and that the interface is now ready to accept commands for the interface */

//   .dbg_clk(),                                  // output wire dbg_clk
//   .dbg_bus(),                                  // output wire [511 : 0] dbg_bus
  
//   .c0_sys_clk_p(clk_out),                        // input wire c0_sys_clk_p
//   .c0_sys_clk_n(~clk_out),                        // input wire c0_sys_clk_n

//   // DDR interface(output)
//   .c0_ddr4_adr(ddr4_adr),                          // output wire [16 : 0] c0_ddr4_adr
//   .c0_ddr4_ba(ddr4_ba),                            // output wire [1 : 0] c0_ddr4_ba
//   .c0_ddr4_cke(ddr4_cke),                          // output wire [0 : 0] c0_ddr4_cke
//   .c0_ddr4_cs_n(ddr4_cs_n),                        // output wire [0 : 0] c0_ddr4_cs_n
//   .c0_ddr4_dm_dbi_n(ddr4_dm_dbi_n),                // inout wire [7 : 0] c0_ddr4_dm_dbi_n
//   .c0_ddr4_dq(ddr4_dq),                            // inout wire [63 : 0] c0_ddr4_dq
//   .c0_ddr4_dqs_c(ddr4_dqs_c),                      // inout wire [7 : 0] c0_ddr4_dqs_c
//   .c0_ddr4_dqs_t(ddr4_dqs_t),                      // inout wire [7 : 0] c0_ddr4_dqs_t
//   .c0_ddr4_odt(ddr4_odt),                          // output wire [0 : 0] c0_ddr4_odt
//   .c0_ddr4_bg(ddr4_bg),                            // output wire [0 : 0] c0_ddr4_bg
//   .c0_ddr4_reset_n(ddr4_reset_n),                  // output wire c0_ddr4_reset_n
//   .c0_ddr4_act_n(ddr4_act_n),                      // output wire c0_ddr4_act_n
//   .c0_ddr4_ck_c(ddr4_ck_c),                        // output wire [0 : 0] c0_ddr4_ck_c
//   .c0_ddr4_ck_t(ddr4_ck_t),                        // output wire [0 : 0] c0_ddr4_ck_t
//   .c0_ddr4_ui_clk(ddr4_ui_clk),                    // output wire c0_ddr4_ui_clk
//   .c0_ddr4_ui_clk_sync_rst(),  // output wire c0_ddr4_ui_clk_sync_rst
//   // Slave Interface Write Address Ports
//   .c0_ddr4_aresetn(~rst),                  // input wire c0_ddr4_aresetn
//   .c0_ddr4_s_axi_awid(1'h0),            // input wire [3 : 0] c0_ddr4_s_axi_awid
//   .c0_ddr4_s_axi_awaddr(axi_awaddr_ddr),        // input wire [30 : 0] c0_ddr4_s_axi_awaddr
//   .c0_ddr4_s_axi_awlen(axi_awlen_ddr),          // input wire [7 : 0] c0_ddr4_s_axi_awlen
//   .c0_ddr4_s_axi_awsize(axi_awsize_ddr),        // input wire [2 : 0] c0_ddr4_s_axi_awsize
//   .c0_ddr4_s_axi_awburst(axi_awburst_ddr),      // input wire [1 : 0] c0_ddr4_s_axi_awburst
// //   .c0_ddr4_s_axi_awlock(axi_awlock_ddr),        // input wire [0 : 0] c0_ddr4_s_axi_awlock
// //   .c0_ddr4_s_axi_awcache(axi_awcache_ddr),      // input wire [3 : 0] c0_ddr4_s_axi_awcache
// //   .c0_ddr4_s_axi_awprot(axi_awprot_ddr),        // input wire [2 : 0] c0_ddr4_s_axi_awprot
// //   .c0_ddr4_s_axi_awqos(axi_awqos_ddr),          // input wire [3 : 0] c0_ddr4_s_axi_awqos
//   .c0_ddr4_s_axi_awvalid(axi_awvalid_ddr_new),      // input wire c0_ddr4_s_axi_awvalid
//   .c0_ddr4_s_axi_awready(axi_awready_ddr),      // output
//   // Slave Interface Write Data Ports
//   .c0_ddr4_s_axi_wdata(axi_wdata_ddr),          // input wire [511 : 0] c0_ddr4_s_axi_wdata
//   .c0_ddr4_s_axi_wstrb(axi_wstrb_ddr),          // input wire [63 : 0] c0_ddr4_s_axi_wstrb
//   .c0_ddr4_s_axi_wlast(axi_wlast_ddr),          // input wire c0_ddr4_s_axi_wlast
//   .c0_ddr4_s_axi_wvalid(axi_wvalid_ddr),        // input wire c0_ddr4_s_axi_wvalid
//   .c0_ddr4_s_axi_wready(axi_wready_ddr),        // output wire c0_ddr4_s_axi_wready
//   // Slave Interface Write Response Ports
//   .c0_ddr4_s_axi_bready(axi_bready_ddr),        // input wire c0_ddr4_s_axi_bready
//   .c0_ddr4_s_axi_bid(axi_bid_ddr),              // output wire [3 : 0] c0_ddr4_s_axi_bid
//   .c0_ddr4_s_axi_bresp(axi_bresp_ddr),          // output wire [1 : 0] c0_ddr4_s_axi_bresp
//   .c0_ddr4_s_axi_bvalid(axi_bvalid_ddr),        // output wire c0_ddr4_s_axi_bvalid
// //   // Slave Interface Read Address Ports
// //   .c0_ddr4_s_axi_arid(axi_arid_ddr),            // input wire [3 : 0] c0_ddr4_s_axi_arid
// //   .c0_ddr4_s_axi_araddr(axi_araddr_ddr),        // input wire [30 : 0] c0_ddr4_s_axi_araddr
// //   .c0_ddr4_s_axi_arlen(axi_arlen_ddr),          // input wire [7 : 0] c0_ddr4_s_axi_arlen
// //   .c0_ddr4_s_axi_arsize(axi_arsize_ddr),        // input wire [2 : 0] c0_ddr4_s_axi_arsize
// //   .c0_ddr4_s_axi_arburst(axi_arburst_ddr),      // input wire [1 : 0] c0_ddr4_s_axi_arburst
// //   .c0_ddr4_s_axi_arlock(axi_arlock_ddr),        // input wire [0 : 0] c0_ddr4_s_axi_arlock
// //   .c0_ddr4_s_axi_arcache(axi_arcache_ddr),      // input wire [3 : 0] c0_ddr4_s_axi_arcache
// //   .c0_ddr4_s_axi_arprot(axi_arprot_ddr),        // input wire [2 : 0] c0_ddr4_s_axi_arprot
// //   .c0_ddr4_s_axi_arqos(axi_arqos_ddr),          // input wire [3 : 0] c0_ddr4_s_axi_arqos
// //   .c0_ddr4_s_axi_arvalid(axi_arvalid_ddr),      // input wire c0_ddr4_s_axi_arvalid
// //   .c0_ddr4_s_axi_arready(axi_arready_ddr),      // output wire c0_ddr4_s_axi_arready
// //   // Slave Interface Read Data Ports
// //   .c0_ddr4_s_axi_rready(axi_rready_ddr),        // input wire c0_ddr4_s_axi_rready
// //   .c0_ddr4_s_axi_rlast(axi_rlast_ddr),          // output wire c0_ddr4_s_axi_rlast
// //   .c0_ddr4_s_axi_rvalid(axi_rvalid_ddr),        // output wire c0_ddr4_s_axi_rvalid
// //   .c0_ddr4_s_axi_rresp(axi_rresp_ddr),          // output wire [1 : 0] c0_ddr4_s_axi_rresp
// //   .c0_ddr4_s_axi_rid(axi_rid_ddr),              // output wire [3 : 0] c0_ddr4_s_axi_rid
// //   .c0_ddr4_s_axi_rdata(axi_rdata_ddr),          // output wire [511 : 0] c0_ddr4_s_axi_rdata
  

//   .addn_ui_clkout1(),                  // output wire addn_ui_clkout1
  
//   .sys_rst(rst)                                  // input wire sys_rst
// );





endmodule



// axi_crossbar axi_crossbar (
//   .aclk(clk),                      // input wire aclk
//   .aresetn(~rst),                // input wire aresetn
// /* -----------------------CPU IS MASTER----------------------- */
//   /* Write Address Channel */
//   .s_axi_awid(4'b0),          // input wire [3 : 0] s_axi_awid
//   .s_axi_awaddr(axi_awaddr_cpu),      // input wire [30 : 0] s_axi_awaddr
//   .s_axi_awlen(axi_awlen_cpu),        // input wire [7 : 0] s_axi_awlen
//   .s_axi_awsize(axi_awsize_cpu),      // input wire [2 : 0] s_axi_awsize
//   .s_axi_awburst(axi_awburst_cpu),    // input wire [1 : 0] s_axi_awburst
// //   .s_axi_awlock(s_axi_awlock),      // input wire [0 : 0] s_axi_awlock
// //   .s_axi_awcache(s_axi_awcache),    // input wire [3 : 0] s_axi_awcache
// //   .s_axi_awprot(s_axi_awprot),      // input wire [2 : 0] s_axi_awprot
// //   .s_axi_awqos(s_axi_awqos),        // input wire [3 : 0] s_axi_awqos
//   .s_axi_awvalid(axi_awvalid_cpu),    // input wire [0 : 0] s_axi_awvalid
//   .s_axi_awready(axi_awready_cpu),    // output wire [0 : 0] s_axi_awready
//   /* Write Data Channel */
//   .s_axi_wdata(axi_wdata_cpu),        // input wire [511 : 0] s_axi_wdata
//   .s_axi_wstrb(axi_wstrb_cpu),        // input wire [63 : 0] s_axi_wstrb
//   .s_axi_wlast(axi_wlast_cpu),        // input wire [0 : 0] s_axi_wlast
//   .s_axi_wvalid(axi_wvalid_cpu),      // input wire [0 : 0] s_axi_wvalid
//   .s_axi_wready(axi_wready_cpu),      // output wire [0 : 0] s_axi_wready
//   /* Write Response Channel */
//   .s_axi_bid(axi_bid_cpu),            // output wire [3 : 0] s_axi_bid
//   .s_axi_bresp(axi_bresp_cpu),        // output wire [1 : 0] s_axi_bresp
//   .s_axi_bvalid(axi_bvalid_cpu),      // output wire [0 : 0] s_axi_bvalid
//   .s_axi_bready(axi_bready_cpu),      // input wire [0 : 0] s_axi_bready
// //   /* Read Address Channel */
// //   .s_axi_arid(s_axi_arid),          // input wire [0 : 0] s_axi_arid
// //   .s_axi_araddr(s_axi_araddr),      // input wire [30 : 0] s_axi_araddr
// //   .s_axi_arlen(s_axi_arlen),        // input wire [7 : 0] s_axi_arlen
// //   .s_axi_arsize(s_axi_arsize),      // input wire [2 : 0] s_axi_arsize
// //   .s_axi_arburst(s_axi_arburst),    // input wire [1 : 0] s_axi_arburst
// //   .s_axi_arlock(s_axi_arlock),      // input wire [0 : 0] s_axi_arlock
// //   .s_axi_arcache(s_axi_arcache),    // input wire [3 : 0] s_axi_arcache
// //   .s_axi_arprot(s_axi_arprot),      // input wire [2 : 0] s_axi_arprot
// //   .s_axi_arqos(s_axi_arqos),        // input wire [3 : 0] s_axi_arqos
// //   .s_axi_arvalid(s_axi_arvalid),    // input wire [0 : 0] s_axi_arvalid
// //   .s_axi_arready(s_axi_arready),    // output wire [0 : 0] s_axi_arready
// //   /* Read Data Channel */
// //   .s_axi_rid(s_axi_rid),            // output wire [0 : 0] s_axi_rid
// //   .s_axi_rdata(s_axi_rdata),        // output wire [511 : 0] s_axi_rdata
// //   .s_axi_rresp(s_axi_rresp),        // output wire [1 : 0] s_axi_rresp
// //   .s_axi_rlast(s_axi_rlast),        // output wire [0 : 0] s_axi_rlast
// //   .s_axi_rvalid(s_axi_rvalid),      // output wire [0 : 0] s_axi_rvalid
// //   .s_axi_rready(s_axi_rready),      // input wire [0 : 0] s_axi_rready
//   /* -----------------------Crossbar IS MASTER----------------------- */
//   /* Write Address Channel */
//   .m_axi_awid(Oc_axi_awid),          // output wire [7 : 0] m_axi_awid
//   .m_axi_awaddr(Oc_axi_awaddr),      // output wire [61 : 0] m_axi_awaddr
//   .m_axi_awlen(Oc_axi_awlen),        // output wire [15 : 0] m_axi_awlen
//   .m_axi_awsize(Oc_axi_awsize),      // output wire [5 : 0] m_axi_awsize
//   .m_axi_awburst(Oc_axi_awburst),    // output wire [3 : 0] m_axi_awburst
// //   .m_axi_awlock(m_axi_awlock),      // output wire [1 : 0] m_axi_awlock
// //   .m_axi_awcache(m_axi_awcache),    // output wire [7 : 0] m_axi_awcache
// //   .m_axi_awprot(m_axi_awprot),      // output wire [5 : 0] m_axi_awprot
// //   .m_axi_awregion(m_axi_awregion),  // output wire [7 : 0] m_axi_awregion
// //   .m_axi_awqos(m_axi_awqos),        // output wire [7 : 0] m_axi_awqos
//   .m_axi_awvalid(Oc_axi_awvalid),    // output wire [1 : 0] m_axi_awvalid
//   .m_axi_awready({1'b0,axi_awready_ddr}),    // input wire [1 : 0] m_axi_awready
//   /* Write Data Channel */
//   .m_axi_wdata(Oc_axi_wdata),        // output wire [1023 : 0] m_axi_wdata
//   .m_axi_wstrb(Oc_axi_wstrb),        // output wire [127 : 0] m_axi_wstrb
//   .m_axi_wlast(Oc_axi_wlast),        // output wire [1 : 0] m_axi_wlast
//   .m_axi_wvalid(Oc_axi_wvalid),      // output wire [1 : 0] m_axi_wvalid
//   .m_axi_wready({1'b0,axi_wready_ddr}),      // input wire [1 : 0] m_axi_wready
//   /* Write Response Channel */
//   .m_axi_bid({1'h0,axi_bid_ddr}),            // input wire [7 : 0] m_axi_bid
//   .m_axi_bresp({2'b0,axi_bresp_ddr}),        // input wire [3 : 0] m_axi_bresp
//   .m_axi_bvalid({1'b0,axi_bvalid_ddr}),      // input wire [1 : 0] m_axi_bvalid
//   .m_axi_bready(Oc_axi_bready)      // output wire [1 : 0] m_axi_bready
// //   /* Read Address Channel */
// //   .m_axi_arid(m_axi_arid),          // output wire [1 : 0] m_axi_arid
// //   .m_axi_araddr({ 4'b0,axi_arid_ddr}),      // output wire [61 : 0] m_axi_araddr
// //   .m_axi_arlen({ 31'b0,axi_araddr_ddr}),        // output wire [15 : 0] m_axi_arlen
// //   .m_axi_arsize({ 8'b0,axi_arlen_ddr}),      // output wire [5 : 0] m_axi_arsize
// //   .m_axi_arburst({ 3'b0,axi_arsize_ddr}),    // output wire [3 : 0] m_axi_arburst
// // //   .m_axi_arlock({ 2'b0,axi_arburst_ddr}),      // output wire [1 : 0] m_axi_arlock
// // //   .m_axi_arcache({ 1'b0,axi_arlock_ddr}),    // output wire [7 : 0] m_axi_arcache
// // //   .m_axi_arprot({ 4'b0,axi_arcache_ddr}),      // output wire [5 : 0] m_axi_arprot
// // //   .m_axi_arregion({ 3'b0,axi_arprot_ddr}),  // output wire [7 : 0] m_axi_arregion
// // //   .m_axi_arqos({ 4'b0,axi_arqos_ddr}),        // output wire [7 : 0] m_axi_arqos
// //   .m_axi_arvalid({ 1'b0,axi_arvalid_ddr}),    // output wire [1 : 0] m_axi_arvalid
// //   .m_axi_arready({ 1'b0,axi_arready_ddr}),    // input wire [1 : 0] m_axi_arready
// //   /* Read Data Channel */
// //   .m_axi_rid(m_axi_rid),            // input wire [1 : 0] m_axi_rid
// //   .m_axi_rdata({512'b0,axi_rdata_ddr}),        // input wire [1023 : 0] m_axi_rdata
// //   .m_axi_rresp({2'b0,axi_rresp_ddr}),        // input wire [3 : 0] m_axi_rresp
// //   .m_axi_rlast({1'b0,axi_rlast_ddr}),        // input wire [1 : 0] m_axi_rlast
// //   .m_axi_rvalid({1'b0,axi_rvalid_ddr}),      // input wire [1 : 0] m_axi_rvalid
// //   .m_axi_rready({1'b0,axi_rready_ddr})      // output wire [1 : 0] m_axi_rready
// );

// // wire axi_awvalid_ddr_new,axi_wvalid_ddr_new;
// // simple_synchronizer simple_synchronizer_aw(
// //     .clk_ddr    ( clk_out    ),
// //     .signal_in  (axi_awvalid_ddr),
// //     .syn_signal (axi_awready_ddr),
// //     .signal_out (axi_awvalid_ddr_new)
// // );

// // simple_synchronizer simple_synchronizer_w(
// //     .clk_ddr    ( clk_out    ),
// //     .signal_in  (axi_wvalid_ddr),
// //     .syn_signal (axi_wready_ddr),
// //     .signal_out (axi_wvalid_ddr_new)
// // );




// axi_crossbar axi_crossbar (
//   .aclk(clk),                      // input wire aclk
//   .aresetn(~rst),                // input wire aresetn
// /* ---------------------------SLAVE-------------------------- */
//   /* Write Address Channel */
//   .s_axi_awid({axi_awid_ddr,4'b0}),          // input wire [7 : 0] s_axi_awid
//   .s_axi_awaddr({axi_awaddr_ddr,31'b0}),      // input wire [61 : 0] s_axi_awaddr
//   .s_axi_awlen({axi_awlen_ddr,8'b0}),        // input wire [15 : 0] s_axi_awlen
//   .s_axi_awsize({axi_awsize_ddr,3'b0}),      // input wire [5 : 0] s_axi_awsize
//   .s_axi_awburst({axi_awburst_ddr,2'b0}),    // input wire [3 : 0] s_axi_awburst
// //   .s_axi_awlock({axi_awlock_ddr,1'b0}),      // input wire [1 : 0] s_axi_awlock
// //   .s_axi_awcache({axi_awcache_ddr,4'b0}),    // input wire [7 : 0] s_axi_awcache
// //   .s_axi_awprot({axi_awprot_ddr,3'b0}),      // input wire [5 : 0] s_axi_awprot
// //   .s_axi_awqos({axi_awqos_ddr,4'b0}),        // input wire [7 : 0] s_axi_awqos
//   .s_axi_awvalid({axi_awvalid_ddr,1'b0}),    // input wire [1 : 0] s_axi_awvalid
//   .s_axi_awready({axi_awready_ddr,1'b0}),        // output wire [1 : 0] s_axi_awready
//    /* Write Data Channel */
//   .s_axi_wdata({axi_wdata_ddr, 512'b0}),        // input wire [1023 : 0] s_axi_wdata
//   .s_axi_wstrb({axi_wstrb_ddr, 64'b0}),        // input wire [127 : 0] s_axi_wstrb
//   .s_axi_wlast({axi_wlast_ddr, 1'b0}),        // input wire [1 : 0] s_axi_wlast
//   .s_axi_wvalid({axi_wvalid_ddr, 1'b0}),      // input wire [1 : 0] s_axi_wvalid
//   .s_axi_wready({axi_wready_ddr, 1'b0}),      // output wire [1 : 0] s_axi_wready
//    /* Write Response Channel */
//   .s_axi_bid({axi_bid_ddr, 4'b0}),            // output wire [7 : 0] s_axi_bid
//   .s_axi_bresp({axi_bresp_ddr, 2'b0}),        // output wire [3 : 0] s_axi_bresp
//   .s_axi_bvalid({axi_bvalid_ddr, 1'b0}),      // output wire [1 : 0] s_axi_bvalid
//   .s_axi_bready({axi_bready_ddr, 1'b0}),      // input wire [1 : 0] s_axi_bready
//   /* Read Address Channel */
//   .s_axi_arid({axi_arid_ddr, 4'b0}),          // input wire [7 : 0] s_axi_arid
//   .s_axi_araddr({axi_araddr_ddr, 31'b0}),      // input wire [61 : 0] s_axi_araddr
//   .s_axi_arlen({axi_arlen_ddr, 8'b0}),        // input wire [15 : 0] s_axi_arlen
//   .s_axi_arsize({axi_arsize_ddr, 3'b0}),      // input wire [5 : 0] s_axi_arsize
//   .s_axi_arburst({axi_arburst_ddr, 2'b0}),    // input wire [3 : 0] s_axi_arburst
//   .s_axi_arlock({axi_arlock_ddr, 1'b0}),      // input wire [1 : 0] s_axi_arlock
//   .s_axi_arcache({axi_arcache_ddr, 4'b0}),    // input wire [7 : 0] s_axi_arcache
//   .s_axi_arprot({axi_arprot_ddr, 3'b0}),      // input wire [5 : 0] s_axi_arprot
//   .s_axi_arqos({axi_arqos_ddr, 4'b0}),        // input wire [7 : 0] s_axi_arqos
//   .s_axi_arvalid({axi_arvalid_ddr, 1'b0}),    // input wire [1 : 0] s_axi_arvalid
//   .s_axi_arready({axi_arready_ddr, 1'b0}),    // output wire [1 : 0] s_axi_arready
//   /* Read Data Channel */
//   .s_axi_rid({axi_rid_ddr, 4'b0}),            // output wire [7 : 0] s_axi_rid
//   .s_axi_rdata({axi_rdata_ddr, 512'b0}),      // output wire [1023 : 0] s_axi_rdata
//   .s_axi_rresp({axi_rresp_ddr, 2'b0}),        // output wire [3 : 0] s_axi_rresp
//   .s_axi_rlast({axi_rlast_ddr, 1'b0}),        // output wire [1 : 0] s_axi_rlast
//   .s_axi_rvalid({axi_rvalid_ddr, 1'b0}),      // output wire [1 : 0] s_axi_rvalid
//   .s_axi_rready({axi_rready_ddr, 1'b0}),       // input wire [1 : 0] s_axi_rready

// /* ---------------------------MASTER-------------------------- */
// /* Write Address Channel */
//   .m_axi_awid(axi_awid_cpu),          // output wire [3 : 0]
//   .m_axi_awaddr(axi_awaddr_cpu),      // output wire [30 : 0]
//   .m_axi_awlen(axi_awlen_cpu),                  // output wire [7 : 0]
//   .m_axi_awsize(axi_awsize_cpu),                // output wire [2 : 0] 32bit
//   .m_axi_awburst(axi_awburst_cpu),                // output wire [1 : 0] 递增
//   // .m_axi_awlock_cpu(m_axi_awlock_cpu),      // output wire [0 : 0]
//   // .m_axi_awcache_cpu(m_axi_awcache_cpu),    // output wire [3 : 0]
//   // .m_axi_awprot_cpu(m_axi_awprot_cpu),      // output wire [2 : 0]
//   // .m_axi_awregion_cpu(m_axi_awregion_cpu),  // output wire [3 : 0]
//   // .m_axi_awqos_cpu(m_axi_awqos_cpu),        // output wire [3 : 0]
//   .m_axi_awvalid(axi_awvalid_cpu),    // output wire [0 : 0]
//   .m_axi_awready(axi_awready_cpu),    // input wire [0 : 0]
  
//   /* Write Data Channel */
//   .m_axi_wdata(axi_wdata_cpu),        // output wire [511 : 0]
//   .m_axi_wstrb(axi_wstrb_cpu),        // output wire [63 : 0]
//   .m_axi_wlast(axi_wlast_cpu),        // output wire [0 : 0]
//   .m_axi_wvalid(axi_wvalid_cpu),      // output wire [0 : 0]
//   .m_axi_wready(axi_wready_cpu),      // input wire [0 : 0]
  
//   /* Write Response Channel */
//   .m_axi_bid(axi_bid_cpu),            // input wire [3 : 0]
//   .m_axi_bresp(axi_bresp_cpu),        // input wire [1 : 0]
//   .m_axi_bvalid(axi_bvalid_cpu),      // input wire [0 : 0]
//   .m_axi_bready(axi_bready_cpu)      // output wire [0 : 0]
// //   /* Read Address Channel */
// //   .m_axi_arid(m_axi_arid),          // output wire [3 : 0] m_axi_arid
// //   .m_axi_araddr(m_axi_araddr),      // output wire [30 : 0] m_axi_araddr
// //   .m_axi_arlen(m_axi_arlen),        // output wire [7 : 0] m_axi_arlen
// //   .m_axi_arsize(m_axi_arsize),      // output wire [2 : 0] m_axi_arsize
// //   .m_axi_arburst(m_axi_arburst),    // output wire [1 : 0] m_axi_arburst
// //   .m_axi_arlock(m_axi_arlock),      // output wire [0 : 0] m_axi_arlock
// //   .m_axi_arcache(m_axi_arcache),    // output wire [3 : 0] m_axi_arcache
// //   .m_axi_arprot(m_axi_arprot),      // output wire [2 : 0] m_axi_arprot
// //   .m_axi_arregion(m_axi_arregion),  // output wire [3 : 0] m_axi_arregion
// //   .m_axi_arqos(m_axi_arqos),        // output wire [3 : 0] m_axi_arqos
// //   .m_axi_arvalid(m_axi_arvalid),    // output wire [0 : 0] m_axi_arvalid
// //   .m_axi_arready(m_axi_arready),    // input wire [0 : 0] m_axi_arready
// //   /* Read Data Channel */
// //   .m_axi_rid(m_axi_rid),            // input wire [3 : 0] m_axi_rid
// //   .m_axi_rdata(m_axi_rdata),        // input wire [511 : 0] m_axi_rdata
// //   .m_axi_rresp(m_axi_rresp),        // input wire [1 : 0] m_axi_rresp
// //   .m_axi_rlast(m_axi_rlast),        // input wire [0 : 0] m_axi_rlast
// //   .m_axi_rvalid(m_axi_rvalid),      // input wire [0 : 0] m_axi_rvalid
// //   .m_axi_rready(m_axi_rready)      // output wire [0 : 0] m_axi_rready
// );


