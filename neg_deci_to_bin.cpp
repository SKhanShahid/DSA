#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 0;
    float ans = 0;
    int digit = 1 + (~n);
    while (digit != 0)
    {
        int bit = digit & 1;
        ans = ans + (bit * pow(10, i));
        digit = digit >> 1;
        i++;
    }
    cout << "Answwer for negative number is: " << ans << endl;
    // To convert the answer to decimal
}