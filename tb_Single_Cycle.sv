module tb_Single_Cycle;

  logic clk, rst;
  logic [31:0] y;

  Single_Cycle DUT (
      .y  (y),
      .clk(clk),
      .rst(rst)
  );

  initial begin
    clk = 0;
    forever #10 clk = ~clk;
  end

  initial begin
    rst = 1;
    @(posedge clk);
    rst = 0;
    @(posedge clk);
    @(posedge clk);
    repeat (500) @(posedge clk);

    $stop;
  end

endmodule
