#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch='A'+ n-i;
            ch=ch+j-1;  
            cout<< ch <<" ";
            ch=ch+1;
            j++;
        }
        cout<<endl;
        i++;
    }
} 