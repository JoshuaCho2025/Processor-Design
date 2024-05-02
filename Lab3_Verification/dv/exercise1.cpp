#include <VExercise1.h>
#include "verilated.h"

int main() {
  Verilated::commandArgs(argc, argv);
  VExercise1* model = new VExercise1;

  // Test cases
  const int test_cases[][3] = {
    {1, 2, 0}, // Test for a ^ b
    {3, 1, 1}, // Test for a << b
    {10, 3, 2}, // Test for a % b
    {5, 3, 3}  // Test for ~(a & b)
  };

  bool passed = true;
  for (auto& test_case : test_cases) {
    model->a = test_case[0];
    model->b = test_case[1];
    model->op = test_case[2];
    model->eval();

    // Compute expected result
    int expected = 0;
    switch (test_case[2]) {
      case 0: expected = test_case[0] ^ test_case[1]; break;
      case 1: expected = test_case[0] << test_case[1]; break;
      case 2: expected = test_case[0] % test_case[1]; break;
      case 3: expected = ~(test_case[0] & test_case[1]); break;
    }

    if (model->out != expected) {
      std::cout << "Test failed: a=" << test_case[0] << ", b=" << test_case[1] 
                << ", op=" << test_case[2] << ", expected=" << expected 
                << ", got=" << model->out << std::endl;
      passed = false;
    }
  }

  if (passed) {
    std::cout << "All tests passed." << std::endl;
  }

  delete model;
  return 0;
}
