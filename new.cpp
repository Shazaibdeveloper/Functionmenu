

#include <iostream>
using namespace std;

void Add()
{
  int num1, num2;
  cout << "Enter value : ";
  cin >> num1;

  cout << "Enter value : ";
  cin >> num2;

  cout << "The Addintion of two numbers is : " << num1 + num2 << endl;
}

void Sub()
{
  int num1, num2;
  cout << "Enter value : ";
  cin >> num1;

  cout << "Enter value : ";
  cin >> num2;

  cout << "The Subtraction of two numbers is : " << num1 - num2 << endl;
}

void Mul()
{
  int num1, num2;
  cout << "Enter value : ";
  cin >> num1;

  cout << "Enter value : ";
  cin >> num2;

  cout << "The Multiplication of two numbers is : " << num1 * num2 << endl;
}

void Div()
{
  int num1, num2;
  cout << "Enter first value : ";
  cin >> num1;

  cout << "Enter second value : ";
  cin >> num2;

  cout << "The Division of two numbers is : " << num1 / num2 << endl;
}

void Tab()
{
  int num1, i = 1;

  cout << "Enter Table Number : ";
  cin >> num1;
table:
  if (i <= 10)
  {
    cout << num1 << " X " << i << " = " << num1 * 1 << endl;
    i++;
    goto table;
  }
}

void Evenodd()
{
  int num1, ans;
  cout << "Enter first value : ";
  cin >> num1;

  if (num1 % 2 == 0)
  {
    cout << "It's Even";
  }
  else
  {
    cout << "It's odd";
  }
}

void Pnz()
{
  int num1;
  cout << "Enter first value : ";
  cin >> num1;

  if (num1 > 0)
  {
    cout << "It's Positive";
  }

  else if (num1 < 0)
  {
    cout << "It's Negative";
  }
  else
  {
    cout << "Your Exit";
  }
}

int main()
{

abc:

  int num;
  cout << "What function do you want ?" << endl;
  cout << "1. Addition       " << endl;
  cout << "2. Subtraction    " << endl;
  cout << "3. Multiplication " << endl;
  cout << "4. Division       " << endl;
  cout << "5. Table        " << endl;
  cout << "6. Exit        " << endl;
  cout << "Enter Number of function : ";
  cin >> num;

  if (num == 1)
  {
    cout << "**ADDITION**" << endl;
    Add();
    goto abc;
  }
  else if (num == 2)
  {
    cout << "**SUBTRACTION**" << endl;
    Sub();
    goto abc;
  }
  else if (num == 3)
  {
    cout << "**MULTIPLICATION**" << endl;
    Mul();
    goto abc;
  }
  else if (num == 4)
  {
    cout << "**DIVISION**" << endl;
    Div();
    goto abc;
  }
  else if (num == 5)
  {
    cout << "**Table**" << endl;
    Tab();
    goto abc;
  }
  else if (num == 6)
  {
    cout << "**Your Exit**" << endl;
  }
}
