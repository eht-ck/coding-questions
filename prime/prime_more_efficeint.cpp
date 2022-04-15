#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int prime(int num1)
{
    if(num1==2)
    {
        return 1;
    }
    if(num1%2==0)
    {
        return 0;
    }
    if(num1%3==0)
    {
        return 0;
    }
    for(int i=2;i<=sqrt(num1);i++)
    {
        if(num1%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main() {
    int num1=0;
    cin>>num1;
    if(prime(num1)==1)
    {
        cout<<"Prime";
    }
    else
    {
        cout<<"NOT prime";
    }
    return 0;
}
