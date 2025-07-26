#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string ans = "";
    if (n == 0) {
        ans = "0";
    }
    while (n != 0)
    {
        int bit = n & 1;
        ans = char(bit + '0') + ans;
        n = n >> 1;
    }
    cout << ans << endl;
    return 0;
}