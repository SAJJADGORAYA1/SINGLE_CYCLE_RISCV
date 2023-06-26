module Single_Cycle (
    output logic [31:0] y,
    input logic clk,
    rst
);


  logic [31:0] Instruction, ALU_result, readData, rdata2;
  logic [3:0] ALU_control, mask;
  logic [2:0] br_type, load;
  logic [1:0] wb_sel, store;
  logic RegWrite, wr_en, rd_en, sel_A, sel_B, cs;

  // Data_Path
  DataPath DP (
      ALU_result,
      Instruction,
      rdata2,
      mask,
      cs,
      readData,
      ALU_control,
      br_type,
      load,
      wb_sel,
      store,
      RegWrite,
      sel_A,
      sel_B,
      clk,
      rst
  );

  // Controller 
  Controller CU (
      Instruction[6:0],
      Instruction[31:25],
      Instruction[14:12],
      ALU_control,
      br_type,
      load,
      wb_sel,
      store,
      RegWrite,
      wr_en,
      rd_en,
      sel_A,
      sel_B
  );

  DataMemory DM (
      readData,
      ALU_result,
      rdata2,
      mask,
      wr_en,
      rd_en,
      cs,
      clk
  );

  // assign y = wdata;

endmodule
