#include <iostream>
#include <climits>
using namespace std;

class solution {
public:
    bool isPowerOfTwo(int n) {
        int ans = 1;
        for(int i=0; i<=30; i++) {
            if(ans == n) return true;
            ans *= 2;
        }
        if (ans < INT_MAX/2) {
            ans *= 2; // To handle the case when n is INT_MAX
        }
        return false;
    }
};
 
 