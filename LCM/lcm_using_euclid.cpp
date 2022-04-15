// A*B=LCM(A,B)*HCF/GCD(A,B)
//LCM(A,B)=A*B/HCF
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int gcd(int num1,int num2)
{
    if(num2==0)
    {
        return num1;
    }
    return gcd(num2,num1%num2);
}
int lcm(int num1,int num2)
{
    return ((num1*num2)/gcd(num1,num2));
}
int main() {
    int num1=0,num2=0;
    cin>>num1;
    cin>>num2;
    cout<<lcm(max(num1,num2),min(num1,num2));
    return 0;
}
