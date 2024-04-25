/**
  @brief A simple ALU-like module

  @input op   opcode for the operation to perform
  @input a    input to calculation
  @input b    input to calulation
  @output out result of calculation
*/
module Exercise1 (
    input  [1:0] op, // input op, 2 bits wide
    input  [7:0] a, // input a, 8 bits wide
    input  [7:0] b, // input b, 8 bits wide
    output [7:0] out // output out, 8 bits wide
);
assign out = (op == 2'b00) ? a + b: // if op is 00, then perform addition a + b
             (op == 2'b01) ? a - b: // if op is 01, then perform subtraction a - b
             (op == 2'b10) ? a & b: // if op is 10, then perform bitwise AND operation a & b
             (op == 2'b11) ? a | b; // if op is 11, then perform bitwise OR operation a | b
             
endmodule
