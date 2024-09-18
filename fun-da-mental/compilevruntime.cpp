#include <iostream>
#include <compare>

// Compile time and run time capable version of max using constexpr
template<typename T>
constexpr T max(T a, T b) {
  return (a <=> b) >= 0 ? a : b;
}

int main() {
  // Runtime Example
  int a = 20;
  int b = 40;
  int result_runtime = max(a , b); 
  std::cout << "Runtime Max: " << result_runtime << std::endl;

  // Compile-time example
  constexpr int result_compiletime = max(30, 40); 
  std::cout << "Compile-time Max: " << result_compiletime << std::endl;

  return 0;
}
