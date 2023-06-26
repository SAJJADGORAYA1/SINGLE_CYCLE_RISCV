module DataMemory (
    output logic [31:0] readData,
    input logic [31:0] ALU_result,
    input logic [31:0] rdata2,
    input logic [3:0] mask,
    input logic wr_en,
    rd_en,
    cs,
    clk
);

  logic [31:0] Data_Mem[0:31];

  initial begin
    $readmemh("Data_Memory.txt", Data_Mem);
  end

  // Read data from Memory
  always_comb begin
    if (~cs) begin
      if (rd_en) begin
        readData <= Data_Mem[ALU_result[31:2]];  //load data 
      end
    end
  end

  // Write data to Memory
  always_ff @(negedge clk) begin
    if (~cs) begin
      if (~wr_en) begin
        if (mask[0]) begin
          Data_Mem[ALU_result>>2][7:0] <= rdata2[7:0];
        end
        if (mask[1]) begin
          Data_Mem[ALU_result>>2][15:8] <= rdata2[15:8];
        end
        if (mask[2]) begin
          Data_Mem[ALU_result>>2][23:16] <= rdata2[23:16];
        end
        if (mask[3]) begin
          Data_Mem[ALU_result>>2][31:24] <= rdata2[31:24];
        end
      end
    end
  end

endmodule
