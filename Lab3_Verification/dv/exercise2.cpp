#include <VExercise2.h>
#include "verilated.h"
#include <iostream>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    VExercise2 model;

    // Example test data might include typical cases, boundary values, and error cases
    const int test_cases[] = {0, 1, -1, INT32_MAX, INT32_MIN};
    const int expected_outputs[] = {0, 1, -1, INT32_MAX, INT32_MIN}; // Replace with actual expected logic

    bool passed = true;
    for (int i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++) {
        model.input = test_cases[i];
        model.eval(); // Simulate the Verilog module

        if (model.output != expected_outputs[i]) {
            std::cout << "Test failed for input: " << test_cases[i] 
                      << ". Expected output: " << expected_outputs[i] 
                      << ", but got: " << model.output << std::endl;
            passed = false;
        }
    }

    if (passed) {
        std::cout << "All tests passed." << std::endl;
    }

    return 0;
}
