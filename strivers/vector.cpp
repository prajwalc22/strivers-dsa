#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

vector<int> v;
void printvector()
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void printvector_clean()
{
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}

void printusingcopy()
{
    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
}

void printdiffmeth()
{
    if (!v.empty())
    {
        cout << v[0] << endl; // Directly access the first element
        cout << v[1] << endl;
        cout << v[2] << endl;
    }
}

// // void print_using_iterator(){
// //     for (vector )
// //     {
// //         /* code */
// //     }
// }

int main()
{
    v.push_back(1);
    v.push_back(2);
    v.emplace_back(3);
    printvector();
    printvector_clean();
    printusingcopy();
    printdiffmeth();
}