#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    // Removed the undefined variable 'start'
    char val='A';
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<val <<" ";
            val++;
            j++;
        }
        cout<<endl;
        i++;
    }
} 