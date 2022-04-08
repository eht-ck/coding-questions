// logarithmic method to find digits in number
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int num;
    cin>>num;
    int z=floor(log10(num)+1);
    cout<<z;
    return 0;
}
