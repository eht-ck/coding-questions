// HCF/GCD USING STANDARD APPROACH
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    cout<<"Enter the first number: ";
    int num1,num2;
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    int minimum=min(num1,num2);
    while(1)
    {
        if(num1%minimum==0 && num2%minimum==0)
        {
            cout<<"GCD/HCF: "<<minimum<<endl;
            break;
        }
        minimum--;
    }
    
}
