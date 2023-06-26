module DataPath (
    output logic [31:0] ALU_result,
    Instruction,
    rdata2,
    output logic [3:0] mask,
    output logic cs,  //chipselect
    input logic [31:0] readData,
    input logic [3:0] ALU_control,
    input logic [2:0] br_type,
    load,
    input logic [1:0] wb_sel,
    store,
    input logic RegWrite,
    sel_A,
    sel_B,
    clk,
    rst
);


  logic [31:0] PC, PC_new;
  /* initial begin
    PC = 0;
  end
 */
  logic br_taken;
  //PC Mux
  always_comb begin
    if (br_taken) PC_new = ALU_result;
    else PC_new = PC + 4;
  end

  //Program Counter
  always_ff @(posedge clk) begin
    if (rst) begin
      PC <= 0;
    end else begin
      PC <= PC_new;
    end
  end

  //Instruction Memory
  In_Mem IM (
      PC,
      Instruction
  );

  logic [31:0] rdata1, wdata;
  //logic [31:0] Result;

  //Register File
  Reg_File RF (
      wdata,
      Instruction[19:15],
      Instruction[24:20],
      Instruction[11:7],
      RegWrite,
      clk,
      rst,
      rdata1,
      rdata2
  );

  logic [31:0] Immediate, rdataA, rdataB;

  //Immediate Generator  (sign-extender)	
  ImmediateGen IG (
      Instruction,
      Immediate
  );

  //Operand 1 Mux
  always_comb begin
    if (sel_A) rdataA = PC;
    else rdataA = rdata1;
  end

  //Operand 2 Mux
  always_comb begin
    if (sel_B) rdataB = Immediate;
    else rdataB = rdata2;
  end

  //ALU
  ALU AU (
      rdataA,
      rdataB,
      ALU_control,
      ALU_result
  );

  //Branch Comparator
  Branch BC (
      rdata1,
      rdata2,
      br_type,
      br_taken
  );

  logic [31:0] rdata;
  //Load store unit 
  load_store_unit LSU (
      rdata,  //write back data from data memory 
      mask,
      cs,
      readData,
      ALU_result,
      load,
      store
  );

  //Write Back Mux
  always_comb begin
    case (wb_sel)
      2'b00:   wdata = PC + 4;
      2'b01:   wdata = ALU_result;
      2'b10:   wdata = rdata;
      default: wdata = 32'b0;
    endcase
  end

endmodule
