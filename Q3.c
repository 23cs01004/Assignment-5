#include <stdio.h>
int main()
{
    int num;
    printf("Enter a 4 digit number: ");
    scanf("%d", &num);
    if (num>9999 || num<1000)
    {
        printf("Invalid Input");
        return 1;
    }
    int digit[4];
    for (int i=0; i<4; i++)
    {
        digit[i]=num%10;
        num = num/10;
    }
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            for (int k = 0; k < 4; k++){
                for (int l = 0; l < 4 ; l++)
                {
                    if (l == k || l == j || l == i || k == j || k == i || i == j)
                    {
                        continue;
                    } 
                    else 
                    {
                        printf("%d%d%d%d\n", digit[i], digit[j], digit[k], digit[l]);
                    }
                }
            }
        }
    }
    return 0;
}    
