module load_store_unit (
    output logic [31:0] rdata,  //write back data 
    output logic [3:0] mask,
    output logic cs,
    input logic [31:0] readData,
    input logic [31:0] ALU_result,
    input logic [2:0] load,
    input logic [1:0] store
);

  assign cs = 1'b0;  // chip select 

  always_comb begin
    // Load Unit
    case (load)
      3'b000: begin  // load byte
        case (ALU_result[1:0])
          2'b00: rdata = {{24{readData[7]}}, readData[7:0]};
          2'b01: rdata = {{24{readData[15]}}, readData[15:8]};
          2'b10: rdata = {{24{readData[23]}}, readData[23:16]};
          2'b11: rdata = {{24{readData[31]}}, readData[31:24]};
        endcase
      end
      3'b001: begin  // load half word 
        case (ALU_result[1])
          1'b0: rdata = {{16{readData[15]}}, readData[15:0]};
          1'b1: rdata = {{16{readData[31]}}, readData[31:16]};
        endcase
      end
      3'b010: rdata = readData;  // load word 
      3'b011: begin  // load byte unsigned
        case (ALU_result[1:0])
          2'b00: rdata = {{24{1'b0}}, readData[7:0]};
          2'b01: rdata = {{24{1'b0}}, readData[15:8]};
          2'b10: rdata = {{24{1'b0}}, readData[23:16]};
          2'b11: rdata = {{24{1'b0}}, readData[31:24]};
        endcase
      end
      3'b100: begin  // load half word unsigned 
        case (ALU_result[1])
          1'b0: rdata = {{16{1'b0}}, readData[15:0]};
          1'b1: rdata = {{16{1'b0}}, readData[31:16]};
        endcase
      end
    endcase
    // Store Unit
    case (store)  // masking for store byte
      2'b00: begin
        case (ALU_result[1:0])
          2'b00: mask = 4'b0001;
          2'b01: mask = 4'b0010;
          2'b10: mask = 4'b0100;
          2'b11: mask = 4'b1000;
        endcase
      end
      2'b01: begin  // masking for store half word
        case (ALU_result[1])
          1'b0: mask = 4'b0011;
          1'b1: mask = 4'b1100;
        endcase
      end
      2'b10: mask = 4'b1111;  // masking for store word 
    endcase
  end

endmodule
