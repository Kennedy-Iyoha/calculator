#include <iostream>
#include <cmath>

using namespace std;

class Calculator
{
private:
  double x,
      y;
  double doubleResult;
  int a,
      b;
  int intResult;
  int mathType;

public:
  void addition()
  {
    cout << "Choose :" << endl;
    cout << "\t1 Integer Addition" << endl;
    cout << "\t2 Decimal Addition" << endl;
    cin >> mathType;
    // Add Wholenumbers
    if (mathType == 1)
    {
      cout << "Input first number:";
      cin >> a;
      cout << "Input second number :";
      cin >> b;
      intResult = a + b;
      cout << "The sum of " << a << " + " << b << " is equal to " << intResult << endl;
    }
    // Add Decimal numbers
    else if (mathType == 2)
    {
      cout << "Input first number:";
      cin >> x;
      cout << "Input second number :";
      cin >> y;
      doubleResult = x + y;
      cout << "The sum of " << x << " + " << y << " is equal to " << doubleResult << endl;
    }
    else
    {
      cout << "Not an option " << endl;
    };
  }
  void subtraction()
  {
    cout << "Choose :" << endl;
    cout << "\t1 Integer Subtraction" << endl;
    cout << "\t2 Decimal Subtraction" << endl;
    cin >> mathType;
    // Subtract Whole numbers
    if (mathType == 1)
    {
      cout << "Input first number:";
      cin >> a;
      cout << "Input second number :";
      cin >> b;
      intResult = a - b;
      cout << "The subtraction of " << a << " - " << b << " is equal to " << intResult << endl;
    }
    // Subtract Decimal numbers
    else if (mathType == 2)
    {
      cout << "Input first number:";
      cin >> x;
      cout << "Input second number :";
      cin >> y;
      doubleResult = x - y;
      cout << "The subtraction of " << x << " - " << y << " is equal to " << doubleResult << endl;
    }
    else
    {
      cout << "Not an option " << endl;
    };
  }
  void division()
  {
    cout << "Choose :" << endl;
    cout << "\t1 Integer Division" << endl;
    cout << "\t2 Decimal Division" << endl;
    cin >> mathType;
    // Divide Whole numbers
    if (mathType == 1)
    {
      cout << "Input first number:";
      cin >> a;
      cout << "Input second number :";
      cin >> b;
      intResult = a / b;
      cout << "The division of " << a << " / " << b << " is equal to " << intResult << endl;
    }
    // Divide Decimal numbers
    else if (mathType == 2)
    {
      cout << "Input first number:";
      cin >> x;
      cout << "Input second number :";
      cin >> y;
      doubleResult = x / y;
      cout << "The division of " << x << " / " << y << " is equal to " << doubleResult << endl;
    }
    else
    {
      cout << "Not an option " << endl;
    };
  }
  void multiplication()
  {
    cout << "Choose :" << endl;
    cout << "\t1 Integer Multiplication" << endl;
    cout << "\t2 Decimal Multiplication" << endl;
    cin >> mathType;
    // Multiply Whole numbers
    if (mathType == 1)
    {
      cout << "Input first number:";
      cin >> a;
      cout << "Input second number :";
      cin >> b;
      intResult = a * b;
      cout << "The multiplication of " << a << " * " << b << " is equal to " << intResult << endl;
    }
    // Multiply Decimal numbers
    else if (mathType == 2)
    {
      cout << "Input first number:";
      cin >> x;
      cout << "Input second number :";
      cin >> y;
      doubleResult = x * y;
      cout << "The multiplication of " << x << " * " << y << " is equal to " << doubleResult << endl;
    }
    else
    {
      cout << "Not an option " << endl;
    };
  }
};

int main()
{
  Calculator calc;

  int choice;

  while (1)
  {
    cout << endl;
    cout << " |****** CLI CALCULATOR V0.1.0 ******|" << endl;
    cout << " \n Pick an action:" << endl;
    cout << " \t1. Addition" << endl;
    cout << " \t2. Subtraction" << endl;
    cout << " \t3. Division  " << endl;
    cout << " \t4. Multiplication" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
      calc.addition();
      break;
    case 2:
      calc.subtraction();
      break;
    case 3:
      calc.division();
      break;
    case 4:
      calc.multiplication();
      break;
    default:
      (cout << "invalid option");
    }
  }
};