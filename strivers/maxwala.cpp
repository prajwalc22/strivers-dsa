#include <iostream>
using namespace std;

int sum(int num1, int num2)
{
    return max(num1, num2);
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    // int maximum = max(num1, num2);
    // cout << maximum;
    int maximum = sum(num1, num2);
    cout << maximum;
}