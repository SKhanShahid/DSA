#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: "<< endl;
    cin >> n;
    bool isPrime = true;
    for(int i = 2; i < n ; i++)
    {   //rem=0, not a prime
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime==0)
    {
        cout << n << " is not a prime number." << endl;
    }
    else 
    {
        cout << n << " is a prime number." << endl;
    }
   
    }