#include "my_math.h"
#include <stdio.h>

#define N 10

void print(int arr[0][N])
{
    for(int i=0;i<N;i++)
    {
        for (int j=0; j<N;j++)
        {
            printf(" %d ," ,arr[i][j]);
        }
        printf("\n");
    }
    return;
}
void A(int arr[][N])
{
    for(int i=0;i<N;i++)
    {
        for (int j=0; j<N;j++)
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
    if(n2==0)
    {
        return n1;
    }
    else{
        if(n1==0)
        {
            return n2;
        }
    }
    if(n1>n2)
    {
        return n2;
    }
    return n1;
}
void findBest(int arr[][N], int k)
{
    while(k < N)
    {
        for(int i=0;i<N;i++)  //Lines
        {
            for (int j=0; j<N;j++) //colums
            {
              if(i==j || i==k || j==k || arr[i][k]==0 || arr[k][j]==0)  //dont want to touch the colum and line of k and when its the road from node to himself
                {
                    continue;
                }
                else{
                    arr[i][j] =Min(arr[i][j],(arr[i][k]+arr[k][j]));
                    }
            }
        }
        k++;
    }
    //print(arr);
}

void B(int arr[][N] ,int i, int j)
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