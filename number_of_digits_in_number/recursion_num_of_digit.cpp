// using recursion to find number of digits
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int num;
int recur(int num)
{
    if(num==0)
    {
        return 0;
    }
    else
    {
        return 1+recur(num/10);
    }
}
int main() {
    
    cin>>num;
    int z=recur(num);
    cout<<z;
    
    return 0;
}
