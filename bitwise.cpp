#include<iostream>
using namespace std;
int main(){
    int a=4;
    int b=6;
    cout<<"a&b="<<(a&b)<<endl; // bitwise AND
    cout<<"a|b="<<(a|b)<<endl; // bitwise OR
    cout<<"a^b="<<(a^b)<<endl; // bitwise XOR
    cout<<"~a="<<(~a)<<endl; // bitwise NOT
    cout<< (17>>1) <<endl; // right shift
    cout<< (19<<1) <<endl; // left shift
    cout<< (17>>2) <<endl; // right shift
    cout<< (21<<2) <<endl; // left shift
    int i=7;
    cout<< (++i) <<endl; // pre increment
    cout<< (i++) <<endl; // post increment
    cout<< (i--) <<endl; // post decrement
    cout<< (--i) <<endl; // pre decrement
}