// Factorial in C++  using recursion 
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int fact(int num)
{
    if(num==0)
    {
        return 1;
    }
    return num*fact(num-1);    //recursion
}
int main() {
    cout<<"Enter the number: ";
    int num;
    cin>>num;
    cout<<fact(num)<<endl;
    return 0;
}
