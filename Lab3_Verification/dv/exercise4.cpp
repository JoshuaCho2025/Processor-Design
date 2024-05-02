#include <VExercise4.h>
#include "verilated.h"
#include <iostream>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    VExercise4 model;

    model.cs = 0; // Test cs = 0, output should be 0 regardless of sel
    for (int sel = 0; sel < 4; sel++) {
        model.sel = sel;
        model.eval();
        std::cout << "Test with cs=0, sel=" << sel << " Output: " << model.out << std::endl;
        if (model.out != 0) {
            std::cerr << "Error: Output should be 0 when cs=0" << std::endl;
            return -1; // Exit with error
        }
    }

    // Now test with cs = 1 and varying sel
    model.cs = 1;
    for (int sel = 0; sel < 4; sel++) {
        model.sel = sel;
        model.eval();
        std::cout << "Test with cs=1, sel=" << sel << " Output: " << model.out << std::endl;
    }

    return 0;
}
