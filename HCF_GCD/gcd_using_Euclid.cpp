// HCF/GCD USING EUCLID'S ALGORITHM APPROACH
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    cout<<"Enter the first number: ";
    int num1,num2;
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    while(num1!=num2)
    {
    if(num1>num2)
    {
        num1=num1-num2;
    }
    else
    {
        num2=num2-num1;
    }
    }
    cout<<"GCD: "<<num1<<endl;
    
}
