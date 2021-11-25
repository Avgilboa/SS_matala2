#include <stdio.h>
#include "my_math.h"

#define N 10

int main()
{
    int arr[N][N] ={0};
    char temp =0;
    do{
        scanf("%c", &temp);
        if(temp=='A')
        {
            A(arr);
        }
        if(temp=='B')
        {
            int n1, n2;
            scanf("%d", &n1);
            scanf("%d", &n2);
            B(arr , n1, n2);
        }
        if(temp=='C')
        {
            int n1, n2;
            scanf("%d", &n1);
            scanf("%d", &n2);

            C(arr[n1][n2]);
        }
    }
    while(temp!='D');
    return 0;
}

