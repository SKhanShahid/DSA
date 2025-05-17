#include<iostream>
#include<climits> // For INT_MAX and INT_MIN constants
using namespace std;
int reverse(int x){
    int ans = 0;
    while(x != 0){
        int digit = x % 10;
        if ( (ans > INT_MAX / 10) || (ans < INT_MIN / 10)){
            return 0;
        }
        ans = ans * 10 + digit;
        x /= 10;
    }
    return ans;
}

int main(){
    int x;
    cout << "Enter a number: ";
    cin >> x;
    cout << "Reversed: " << reverse(x) << endl;
    return 0;
}