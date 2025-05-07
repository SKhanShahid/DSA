#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for (int i = 1; i <= n; i++)
    {
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    cout << endl;
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)