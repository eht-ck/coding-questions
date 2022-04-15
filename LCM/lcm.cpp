#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int num1=0,num2=0;
    cin>>num1;
    cin>>num2;
    int res=max(num1,num2);
    while(1)
    {
        if(res%num1==0 && res%num2==0)
        {
            break;
        }
        res++;
    }
    cout<<res;
}
