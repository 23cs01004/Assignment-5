#include <stdio.h>

int main()
{
    int temp;
    int num[10];
    printf("Enter 10 integers: ");
    int n = 9;
    for (int i=0; i<10; i++)
    {
        scanf("%d", &num[i]);
    }
    for (int i=0; i<9; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (num[j]>num[j+1])
            {
                temp = num[j+1];
                num[j+1] = num[j];
                num[j]= temp;
            }
        }
        n = n-1;
    }
    for (int i=0; i<10; i++)
    {
        printf("%d ", num[i]);
    }
    return 0;
}