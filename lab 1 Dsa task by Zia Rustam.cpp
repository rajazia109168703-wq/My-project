
#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "= BASIC PROGRAMMING CONCEPTS =" << endl;
    cout << "1. Hello World" << endl;
    cout << "2. Input and Output" << endl;
    cout << "3. Addition of Two Numbers" << endl;
    cout << "4. Even or Odd" << endl;
    cout << "5. Largest of Two Numbers" << endl;
    cout << "6. Print Numbers 1 to 10" << endl;
    cout << "7. Factorial" << endl;

    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Hello World";
            break;

        case 2:
        {
            int num;
            cout << "Enter a number: ";
            cin >> num;
            cout << "You entered: " << num;
            break;
        }

        case 3:
        {
            int a, b;
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Sum = " << a + b;
            break;
        }

        case 4:
        {
            int num;
            cout << "Enter a number: ";
            cin >> num;

            if (num % 2 == 0)
                cout << "Even Number";
            else
                cout << "Odd Number";

            break;
        }

        case 5:
        {
            int a, b;
            cout << "Enter two numbers: ";
            cin >> a >> b;

            if (a > b)
                cout << a << " is largest";
            else if (b > a)
                cout << b << " is largest";
            else
                cout << "Both numbers are equal";

            break;
        }

        case 6:
            for (int i = 1; i <= 10; i++)
            {
                cout << i << endl;
            }
            break;

        case 7:
        {
            int num, fact = 1;
            cout << "Enter a number: ";
            cin >> num;

            for (int i = 1; i <= num; i++)
            {
                fact = fact * i;
            }

            cout << "Factorial = " << fact;
            break;
        }

        default:
            cout << "Invalid Choice";
    }

    return 0;
}