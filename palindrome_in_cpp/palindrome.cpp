// Palindrome in C++
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int palindrome(int num)
{
    int rev=0;
    int temp=num;
    while(temp!=0)
    {
        int ld=temp%10;
        rev=rev*10+ld;
        temp=temp/10;
    }
    
    return (rev==num);
}
int main() {
    cout<<"Enter the number";
    int num=0;
    cin>>num;
    int k=palindrome(num);
    if(k==1)
    {
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a palindrome";
    }
    return 0;
}
