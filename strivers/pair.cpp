#include <iostream>
using namespace std;
int main()
{
    pair<int, int> p = {1, 2};
    cout << p.first << endl;
    cout << p.second << endl;

    pair<int, pair<int, int>> pr = {1,
                                    {2, 3}};

    cout << pr.first << endl;
    cout << pr.second.second << endl;
    cout << pr.second.first << endl;
}