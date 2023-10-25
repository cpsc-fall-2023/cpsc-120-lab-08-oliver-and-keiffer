// Kieffer Castro
// kieffer.castro@csu.fullerton.edu
// @kieffercastro
// Partners: @OliverMontecristo

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }

  // Validate that there is at least one command line argument.
  // If not, print an error message and return a non-zero value.
  double sum = 0.0;

  bool first = true;

  for (const std::string& argument : arguments) {
    if (first) {
      first = false;
    } else {
      double number = std::stod(argument);
      sum += number;
    }
  }
  // Use a double or float type so that your program preserves fractional
  // values.
  // The loop needs to skip over the command name, which is the first element
  // of the arguments vector.
  // Each argument is a std::string. You will need to convert each string into
  // a number with the std::stod or std::stof function.

  int count_num = (static_cast<int>(arguments.size()) - 1);
  double average = sum / count_num;
  std::cout << "average = " << average << "\n";
  return 0;
}
