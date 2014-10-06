// (Some exercises are left out because they are too basic or impossible to do
// in the same file as the other exercises)

// EXERCISE 1.3:
//     Write a program to print `Hello, World` on the standard output.

#include <iostream>

using std::cout;    using std::cin;
using std::endl;

void exercise1_3() {
  cout << "Hello, World" << endl;
}

// EXERCISE 1.4:
//     Our program used the addition operator, `+`, to add two numbers. Write a
//     program that uses the multiplication operator, `*`, to print the product
//     instead

void exercise1_4() {
  int ia;
  cout << "Enter first number: ";
  cin >> ia;

  int ib;
  cout << "Enter second number: ";
  cin >> ib;

  int product = ia * ib;

  cout << ia << " * " << ib << " = " << product << endl;
}

// EXERCISE 1.6
//     Explain whether the following program is legal.
//
//         std::cout << "The sum of " << v1;
//                   << " and " << v2;
//                   << " is " << v1 + v2 << std::endl;
//
// Answer:
//     No, because each line ends with a semicolon, which splits up the
//     statement, but the only line that should have a semicolon is the last
//     line which is the actual end-of-statement line.

// EXERCISE 1.8:
//     Indicate which, if any, of the following output statements are legal:
//
//     STATEMENT                                          IS LEGAL?
//         std::cout << "/*";                                 yes
//         std::cout << "*/";                                 yes
//         std::cout << /* "*/: */;                           no
//         std::cout << /*  "*/"  /*  "*"  */;                no

// EXERCISE 1.9:
//     Write a program that uses a `while` to sum the numbers from 50 to 100.

void exercise1_9() {
  int sum = 0, n = 1;
  while (n <= 100) {
    sum += n;
    ++n;
  }

  cout << sum << endl;
}

// EXERCISE 1.10:
//     In addition to the `++` operator that adds 1 to its operand, there is a
//     decrement operator (`--`) that subtracts 1. Use the decrement operator to
//     write a `while` that prints the numbers from ten down to 0.

void exercise1_10() {
  int n = 10;
  while (10 >= 0) {
    cout << n << endl;
    --n;
  }
}

// EXERCISE 1.11:
//     Write a program that prompts the user for two integers. Print each number
//     in the range specified by those two integers.

void exercise1_11() {
  int from, to;

  cout << "I will count from: ";
  cin >> from;

  cout << "Up to: ";
  cin >> to;

  int n = from;
  while (n < to) {
    cout << n << endl;
    n += 1;
  }
}

// -- run exercise functions -- //
int main() {
  exercise1_3();
  exercise1_4();
  exercise1_9();
  exercise1_10();

  return 0;
}
