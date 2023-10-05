#include<iostream>
using namespace std;

int factorial(int num)
{
    int fact = 1;
    if (num < 0)
        throw 1;
    else if (num == 0)
        return 0;
    else if (num == 1)
        return 1;
    else
    {
        for (int i = 1; i <= num; i++)
        {
            fact = fact * i;
        }
        return fact;
    }
}

int main()
{
    int num;
    cout << "Enter the number to find factorial : ";
    cin >> num;
    try
    {
        cout << factorial(num);
    }

    catch (int error)
    {
        cout << "Exception raised : Negative Number";
    }
}
