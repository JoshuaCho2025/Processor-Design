/**
  @brief A fibonacci linear feedback shift register module

  @input clk    clock
  @input nReset active-low reset
  @input init   initial value following a reset
  @output out   current output
*/
module Exercise2 (
    input clk,               // input clk for clock
    input nReset,            // input nReset for active low reset
    input [15:0] init,       // Initialization value for the LFSR
    output logic [15:0] out  // Output of the LFSR
);

// Internal logic for the shift register
always_ff @(posedge clk or negedge nReset) begin // always Flip-Flop
    if (!nReset) begin
        // If reset is low, initialize the LFSR with the init value
        out <= init;
    end else begin
        // Otherwise, update the LFSR on each clock cycle
        // Feedback taps are at bits 15, 13, 12, and 10
        out <= {out[14:0], (out[15] ^ out[13] ^ out[12] ^ out[10])};
    end
end

endmodule

