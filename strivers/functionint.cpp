#include <iostream>
using namespace std;

int sum(int num1, int num2, int num3)
{
    num3 = num1 + num2;
}

int main()
{
    int num1, num2, num3;
    cin >> num1 >> num2;
    num3 = num1 + num2;
    cout << num3 << endl;
}