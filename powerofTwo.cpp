#include <iostream>
using namespace std;

class solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0) return false;
        int mod=0;
        while(n!=1){
            mod=n%2;
            if(mod==1){
                return false;
                break;
            }
            else{
                n=n/2;
            }
        }
        return true;    
    }
};
 
 int main() {
     solution sol;
     int n;
     cout << "Enter a number: ";
     cin >> n;
     if (sol.isPowerOfTwo(n)) {
         cout << n << " is a power of two." << endl;
     } else {
         cout << n << " is not a power of two." << endl;
     }
     return 0;
 }
