#include <stdio.h>
  
int main ()
{
    int num;
    int temp=0;
    int sum;
    char ans = 'y';
    while (ans != 'N' && ans != 'n')
    {
        if (temp !=0)
        {
            printf("Do you want to continue?\n");
            scanf(" %c", &ans);
            if (ans != 'y' && ans != 'Y' && ans != 'n' && ans != 'N')
            {
                do 
                {
                    printf("Not a valid input");
                    printf("\n");
                    scanf(" %c", &ans);   
                }
                while (ans != 'y' && ans != 'Y' && ans != 'n' && ans != 'N');
            }
        }
        else 
        {
            sum = 0;
        }  
        temp ++;
    
        if(ans == 'N' || ans == 'n')
        {
            break;
        }
        else if(ans =='Y' || ans =='y')
        {
            printf("Provide the number\n");
            scanf("%d", &num); 
        }
        if (num%2 != 0)
            {
                continue;
            }  
            sum = sum + num;
    }
    printf("The sum is: %d", sum);
    return 0;
}