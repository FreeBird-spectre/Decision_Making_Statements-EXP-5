// Abir Seth
// PRN- 24070123003
// EnTC A 1

#include <iostream>
using namespace std;

int main() 
{
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a > b) {
        if (a > c)
            cout << a << " is the largest." << endl;
        else
            cout << c << " is the largest." << endl;
    } else {
        if (b > c)
            cout << b << " is the largest." << endl;
        else
            cout << c << " is the largest." << endl;
    }

    return 0;
}

Enter three numbers: 56 78 134
134 is the largest.


=== Code Execution Successful ===
