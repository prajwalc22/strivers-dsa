#include <iostream>
using namespace std;

void print_name(string name)
{

    cout << "hey " << name << endl;
}
int main()
{
    int n;
    cout << "How many names?" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        print_name(name);
    }
}