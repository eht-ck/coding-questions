
#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
    char str[MAX_SIZE];
    int i;
 
    /* Input string from user */
    printf("Enter any string: ");
    gets(str);


    // Iterate loop till last character of string
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;
        }
    }

    printf("Lower case string: %s", str);

    return 0;
}
