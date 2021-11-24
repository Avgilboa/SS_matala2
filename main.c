#include <stdio.h>
#include "my_math.h"


int main()
{
    int arr[10][10] ={0};
    char temp =0;
    do{
        if(scanf("%c", &temp)==1);
        if(temp=='A')
        {
            A(arr);
        }
        if(temp=='B')
        {
            int n1, n2;
            if(scanf("%d", &n1)==1);
            if(scanf("%d", &n2)==1);
            B(arr , n1, n2);
        }
        if(temp=='C')
        {
            int n1, n2;
            if(scanf("%d", &n1)==1);
            if(scanf("%d", &n2)==1);

            C(arr[n1][n2]);
        }
    }
    while(temp!='D');
    int num = Min(5,5);
    printf("goodbye %d" , num);
    return 0;
}

