// Trailing Zero in Factorial  in C++
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int fact(int num)
{
    if(num==0)
    {
        return 1;
    }
    return num*fact(num-1);
    
}
int main() {
    cout<<"Enter the number: ";
    int num;
    cin>>num;
    int factorial=fact(num);
    int count=0;
    int temp=factorial;
    while(temp%10==0)
    {
        temp=temp/10;
        count++;
    }
    cout<<count;
    return 0;
}
