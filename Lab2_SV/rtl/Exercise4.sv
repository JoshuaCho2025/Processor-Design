/**
  @brief An asynchronous mux/decoder

  @input sel   input select
  @input cs    chip select

  @input alpha alpha input
  @input beta  beta input
  @input gamma gamma input

  @output out output
*/
module Exercise4 (
    input [1:0] sel,
    input cs,

    input [7:0] alpha,
    input [7:0] beta,
    input [7:0] gamma,

    output logic [7:0] out
);

// Implementing the decoding/muxing logic using always_comb
always_comb begin
    if (cs == 0) begin
        out = 8'b0; // When cs is 0, output is always 0 regardless of sel
    end else begin
        // When cs is 1, determine the output based on the value of sel
        case (sel)
            2'b00: out = alpha; // When sel is 0, output is alpha
            2'b01: out = beta;  // When sel is 1, output is beta
            2'b10: out = gamma; // When sel is 2, output is gamma
            2'b11: out = 8'b0;  // When sel is 3, output is 0
            default: out = 8'b0; // Default case to handle unexpected values
        endcase
    end
end

endmodule

