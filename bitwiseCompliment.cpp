#include <iostream>
using namespace std;

class solution {
public:
    int bitwiseComplement(int n) {
        int m = n;
        int mask = 0;
        if (n == 0) return 1; // Special case for 0
        while (m != 0) {
            mask = (mask << 1) | 1;
            m >>= 1;
        }
        int ans = (~n) & mask; // Invert bits and apply mask
        return ans;
    }
};

int main() {
    solution sol;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Bitwise complement: " << sol.bitwiseComplement(n) << endl;
    return 0;
}
