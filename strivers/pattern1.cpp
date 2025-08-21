#include <iostream>
using namespace std;

int pattern1(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int pattern2(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        cout << endl;
    }
}

int pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }

        cout << endl;
    }
}

int pattern5(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i + 1); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int pattern6(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i + 1); j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int pattern7(int n)
{

    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // star
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }

        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int pattern8(int n)
{

    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }

        // star
        for (int j = 1; j <= 2 * (n - i) - 1; j++)
        {
            cout << "*";
        }

        // space
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int pattern9(int n)
{
    // first half
    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // star
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }

        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }

    // second half
    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }

        // star
        for (int j = 1; j <= 2 * (n - i) - 1; j++)
        {
            cout << "*";
        }

        // space
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int pattern10(int n)
{
    // first half
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // second half
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i + 1); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int pattern11(int n)
{

    int start;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            start = 1;
        }
        else
        {
            start = 0;
        }
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}

void pattern12(int n)
{

    for (int i = 1; i <= n; i++)
    {
        // number
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // sapce
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }

        // number
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }

        cout << endl;
    }
}

void pattern13(int n)
{
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i + 1; j++)
        {
            cout << num << " ";
            num = num + 1;
        }
        cout << endl;
    }
}

void pattern14(int n)
{
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << (char)('A' + j - 1);
        }
        cout << endl;
    }
}

void pattern15(int n)
{
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << (char)('A' + j - 1);
        }
        cout << endl;
    }
}

void pattern16(int n)
{
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << (char)('A' + i - 1);
        }
        cout << endl;
    }
}

int pattern17(int n)
{

    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // char
        char ch = 'A';
        int breakpoint = (2 * i - 1) / 2;

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << ch;
            if (j <= breakpoint)
            {
                ch++;
            }
            else
            {
                ch--;
            }
        }

        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int pattern18(int n)
{

    for (int i = 1; i <= n; i++)
    {
        int num = n - i + 1;
        for (int j = num; j <= n; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

int pattern182(int n)
{
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        int num = n - i + 1;
        for (int j = num; j <= n; j++)
        {
            cout << (char)(ch + j - 1);
        }
        cout << endl;
    }
}

int pattern69(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // nambar
        int val = 1;
        int breakpoint = i;
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << val;
            if (j < breakpoint)
            {
                val++;
            }
            else
            {
                val--;
            }
        }

        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pattern182(n);
}