#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        // Print spaces
        int spaces=n-i;
        while(spaces){
            cout<<" ";
            spaces--;
        }
        //PRINT STARRS
    
        int j=1;
        while(j<=i){
            cout<< "*";
            j++;
        }
        cout<<endl;
        i++;
    }

}