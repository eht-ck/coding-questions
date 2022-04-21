#include <iostream>
#include <cstring>
using namespace std;

bool ispal(char str[],int start,int endll)
{
    if(start>=endll)
        return true;
    return (str[start]==str[endll] && ispal(str,start+1,endll-1));
}

int main()
{
    char strr[]="malam";
    int len=5;
    if(ispal(strr,0,len-1))
    {
        cout<<"Pal";
    }
    else
    {

        cout<<"NOT PAL";
    }
    return 0;
}
