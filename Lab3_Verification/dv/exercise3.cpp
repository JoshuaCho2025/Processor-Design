#include <VExercise3.h>
#include "verilated.h"
#include <iostream>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    VExercise3 model;

    // Example to test initial reset behavior and state transitions
    model.reset = 1; // Assert reset
    model.eval();
    std::cout << "Reset state output: " << model.out << std::endl;

    model.reset = 0; // Deassert reset
    const int inputs_a[] = {0, 1, 2, 3}; // Different values for `a`
    const int inputs_b[] = {0, 1, 2, 3}; // Corresponding values for `b`

    // Test state behavior based on different `a` values
    for (int i = 0; i < sizeof(inputs_a) / sizeof(inputs_a[0]); i++) {
        model.a = inputs_a[i];
        model.b = inputs_b[i];
        model.eval();
        std::cout << "Test " << i << " with a=" << inputs_a[i] << ", b=" << inputs_b[i] 
                  << " Output: " << model.out << std::endl;
    }

    return 0;
}
