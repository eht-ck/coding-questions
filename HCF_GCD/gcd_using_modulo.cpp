// HCF/GCD USING MODULO APPROACH
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else return gcd(b,a%b);
}

int main() {
    cout<<"Enter the first number: ";
    int num1,num2;
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"GCD: "<<gcd(max(num1,num2),min(num1,num2))<<endl;
    
}
