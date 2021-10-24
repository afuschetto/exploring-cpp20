#include "fmt/core.h"
#include <iostream>
#include <limits>

void printPrimitiveDataTypesInfo() {

  // std:: cout << fmt::format("{:03", sizeof(int)) << std::endl;
  //  std::cout
  //          << "type\t\t│ bytes\t| lowest()\t\t│ min()\t\t\t│ max()\n"
  //          << std::string(90, '-') << "\n";

  // std::cout << "int\t\t│ "
  //         << sizeof(int) << "\t│ "
  //         << std::numeric_limits<int>::lowest() << "\t\t| "
  //         << std::numeric_limits<int>::min() << "\t\t│ "
  //         << std::numeric_limits<int>::max() << "\n";

  // std::cout<< "unsigned int\t│ "
  //         << sizeof(unsigned int) << "\t│ "
  //         << std::numeric_limits<unsigned int>::lowest() << "\t\t\t| "
  //         << std::numeric_limits<unsigned int>::min() << "\t\t\t│ "
  //         << std::numeric_limits<unsigned int>::max() << "\n";

  // std::cout<< "signed int\t│ "
  //         << sizeof(signed int) << "\t│ "
  //         << std::numeric_limits<signed int>::lowest() << "\t\t| "
  //         << std::numeric_limits<signed int>::min() << "\t\t│ "
  //         << std::numeric_limits<signed int>::max() << "\n";

  // std::cout<< "signed\t\t│ "
  //         << sizeof(signed) << "\t│ "
  //         << std::numeric_limits<signed>::lowest() << "\t\t| "
  //         << std::numeric_limits<signed>::min() << "\t\t│ "
  //         << std::numeric_limits<signed>::max() << "\n";

  //   std::cout << "int:          " << sizeof(int) << " bytes, "
  //             << std::numeric_limits<int>::lowest() << ".."
  //             << std::numeric_limits<int>::max() << std::endl;
  //   std::cout << "unsigned int: " << sizeof(unsigned int) << " bytes, "
  //             << std::numeric_limits<unsigned int>::lowest() << ".."
  //             << std::numeric_limits<unsigned int>::max() << std::endl;
  //   std::cout << "signed int:   " << sizeof(signed int) << " bytes, "
  //             << std::numeric_limits<signed int>::lowest() << ".."
  //             << std::numeric_limits<signed int>::max() << std::endl;
  //   std::cout << "signed:       " << sizeof(signed) << " bytes, "
  //             << std::numeric_limits<signed>::lowest() << ".."
  //             << std::numeric_limits<signed>::max() << std::endl;

  //   std::cout << std::endl;

  //   std::cout << "short:          " << sizeof(short) << " bytes, "
  //             << std::numeric_limits<short>::lowest() << ".."
  //             << std::numeric_limits<short>::max() << std::endl;
  //   std::cout << "unsigned short: " << sizeof(unsigned short) << " bytes, "
  //             << std::numeric_limits<unsigned short>::lowest() << ".."
  //             << std::numeric_limits<unsigned short>::max() << std::endl;
  //   std::cout << "signed short:   " << sizeof(signed short) << " bytes, "
  //             << std::numeric_limits<signed short>::lowest() << ".."
  //             << std::numeric_limits<signed short>::max() << std::endl;

  //   std::cout << std::endl;

  //   std::cout << "long:          " << sizeof(long) << " bytes, "
  //             << std::numeric_limits<long>::lowest() << ".."
  //             << std::numeric_limits<long>::max() << std::endl;
  //   std::cout << "unsigned long: " << sizeof(unsigned long) << " bytes, "
  //             << std::numeric_limits<unsigned long>::lowest() << ".."
  //             << std::numeric_limits<unsigned long>::max() << std::endl;
  //   std::cout << "signed long:   " << sizeof(signed long) << " bytes, "
  //             << std::numeric_limits<signed long>::lowest() << ".."
  //             << std::numeric_limits<signed long>::max() << std::endl;

  //   std::cout << std::endl;

  //   std::cout << "long long:          " << sizeof(long long) << " bytes, "
  //             << std::numeric_limits<long long>::lowest() << ".."
  //             << std::numeric_limits<long long>::max() << std::endl;
  //   std::cout << "unsigned long long: " << sizeof(unsigned long long)
  //             << " bytes, " << std::numeric_limits<unsigned long
  //             long>::lowest()
  //             << ".." << std::numeric_limits<unsigned long long>::max()
  //             << std::endl;
  //   std::cout << "signed long long:   " << sizeof(signed long long) << "
  //   bytes, "
  //             << std::numeric_limits<signed long long>::lowest() << ".."
  //             << std::numeric_limits<signed long long>::max() << std::endl;

  //   std::cout << std::endl;

  //   std::cout << "float: " << sizeof(float) << " bytes, "
  //             << std::numeric_limits<float>::lowest() << ".."
  //             << std::numeric_limits<float>::max() << std::endl;

  //   std::cout << std::endl;

  //   std::cout << "double: " << sizeof(double) << " bytes, "
  //             << std::numeric_limits<double>::lowest() << ".."
  //             << std::numeric_limits<double>::max() << std::endl;

  //   std::cout << std::endl;

  //   std::cout << "long double: " << sizeof(long double) << " bytes, "
  //             << std::numeric_limits<long double>::lowest() << ".."
  //             << std::numeric_limits<long double>::max() << std::endl;

  //   std::cout << std::endl;

  //   std::cout << "char:          " << sizeof(char) << " bytes, "
  //             << std::numeric_limits<char>::lowest() << ".."
  //             << std::numeric_limits<char>::max() << std::endl;
  //   std::cout << "unsigned char: " << sizeof(unsigned char) << " bytes, "
  //             << std::numeric_limits<unsigned char>::lowest() << ".."
  //             << std::numeric_limits<unsigned char>::max() << std::endl;
  //   std::cout << "signed char:   " << sizeof(signed char) << " bytes, "
  //             << std::numeric_limits<signed char>::lowest() << ".."
  //             << std::numeric_limits<signed char>::max() << std::endl;

  // std::cout
  //         << "type\t│ lowest()\t│ min()\t\t│ max()\n"
  //         << "bool\t│ "
  //         << std::numeric_limits<bool>::lowest() << "\t\t│ "
  //         << std::numeric_limits<bool>::min() << "\t\t│ "
  //         << std::numeric_limits<bool>::max() << '\n'
  //         << "uchar\t│ "
  //         << +std::numeric_limits<unsigned char>::lowest() << "\t\t│ "
  //         << +std::numeric_limits<unsigned char>::min() << "\t\t│ "
  //         << +std::numeric_limits<unsigned char>::max() << '\n'
  //         << "int\t│ "
  //         << std::numeric_limits<int>::lowest() << "\t│ "
  //         << std::numeric_limits<int>::min() << "\t│ "
  //         << std::numeric_limits<int>::max() << '\n'
  //         << "float\t│ "
  //         << std::numeric_limits<float>::lowest() << "\t│ "
  //         << std::numeric_limits<float>::min() << "\t│ "
  //         << std::numeric_limits<float>::max() << '\n'
  //         << "double\t│ "
  //         << std::numeric_limits<double>::lowest() << "\t│ "
  //         << std::numeric_limits<double>::min() << "\t│ "
  //         << std::numeric_limits<double>::max() << '\n';
}

#include <array>
#include <optional>
#include <utility> // std::pair
#include <vector>

int main() {
  printPrimitiveDataTypesInfo();

  // C-style array
  int cArr1[3];
  int cArr2[] = {1, 2, 3};
  int cArr3[]{1, 2, 3}; // Initializer list

  // std::array
  std::array<int, 3> sArr1;             // Classic initialization
  std::array<int, 3> sArr2 = {1, 2, 3}; // Initializer list
  std::array<int, 3> sArr3{1, 2, 3};    // Initializer list
  std::array sArr4{1, 2, 3}; // Class template argument deduction (CTAD)

  // std::vector
  std::vector<int> sVec1;             // Classic initialization
  std::vector<int> sVec2 = {1, 2, 3}; // Initializer list
  std::vector<int> sVec3{1, 2, 3};    // Initializer list
  std::vector sVec4{1, 2, 3};         // CTAD

  // std::pair
  std::pair<int, double> sPair1 =
      std::make_pair<int, double>(4, 3.1); // Classic initialization
  std::pair<int, double> sPair2 = {4, 3.1};
  std::pair<int, double> sPair3{4, 3.1};
  std::pair sPair4{4, 3.1}; // CTAD

  // std::optional
  std::optional<int> opt1{5};
  std::optional opt2{5}; // CTAD
  std::cout << "Opt2 " << (opt2.has_value() ? "has value" : "has no value")
            << " that is " << opt2.value() << std::endl;
  std::cout << "Opt2 " << (opt2 ? "has value" : "has no value") << " that is "
            << *opt2 << std::endl;
  std::optional<int> opt3;
  std::cout << "Opt3 " << (opt3.has_value() ? "has value" : "has no value")
            << std::endl;

  std::optional<int> opt4{};
  std::cout << "Opt4 has " << opt4.value_or(10) << std::endl;

  // Structure binding (array, struct or pair)
  auto [x, y, z]{sArr3};
  std::cout << "x=" << x << ", y=" << y << ", z=" << z << std::endl;
}
