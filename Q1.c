#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num;
    int sum =0;
    int x=10;
    int count=0;

    for (int i=0; num != 0; i++)
    {
        num = num/10;
        count += 1;
    }
    printf("No. of digits: %d\n", count);
    int digit[count];
    for (int i=0; i<count; i++)
    {
        digit[i] = temp%10;
        temp = temp/10;
    }


    for (int k = 0; k<count-1; k++)
    {
        for (int j=k+1; j<count; j++)
        {
            if(digit[k]==digit[j])
            {
                digit[k]=0;
            }
        }
    }

    for (int h=0; h<count; h++)
    {
        sum = sum + digit[h];
    }

    printf("Sum of all unique digits present %d", sum);
    return 0;
}
