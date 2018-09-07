#include <iostream>
using namespace std;

int main()
//asking for size
{
    int size;
    char a;
    cout << "\n\n Print a pattern like square with which character:\n";
    cin>>a;
    cout << "--------------------------------------------------\n";
    cout << " Input the number of characters for a side: ";
    cin >> size;
    for (int row = 1; row <= size; ++row) 
    {
        for (int col = 1; col <= size; ++col) 
        {
            cout << a;
        }
        cout << endl;
    }
    return 0;
}
