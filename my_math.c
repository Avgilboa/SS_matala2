#include "my_math.h"
#include <stdio.h>

void print(int arr[0][10])
{
    for(int i=0;i<10;i++)
    {
        for (int j=0; j<10;j++)
        {
            printf(" %d ," ,arr[i][j]);
        }
        printf("\n");
    }
    return;
}
void A(int arr[][10])
{
    for(int i=0;i<10;i++)
    {
        for (int j=0; j<10;j++)
        {
            int value;
            scanf("%d", &value);
            arr[i][j] = value;
        }
    }
    //print(arr);
    findBest(arr,0);
}

int Min(int n1, int n2)
{
    if(n1>n2)
    {
        return n2;
    }
    return n1;
}
void findBest(int arr[][10], int k)
{
    while(k < 10)
    {
        for(int i=0;i<10;i++)  //Lines
        {
            for (int j=0; j<10;j++) //colums
            {
              if(i==j || i==k || j==k)  //dont want to touch the colum and line of k and when its the road from node to himself
                {
                    continue;
                }
                arr[i][j] =Min(arr[i][j],(arr[i][k]+arr[k][j]));
            }
        }
        k++;
    }
    //print(arr);
}

void B(int arr[][10] ,int i, int j)
{
    if(arr[i][j]==0)
    {
        printf("False\n");
        return;
    }
    printf("True\n");

}

void C (int value)
{
    if(value==0)
    {
        printf("%d\n",-1);
        return;
    }
    printf("%d\n", value);
}