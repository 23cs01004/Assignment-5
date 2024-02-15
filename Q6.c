#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char characters[10] = {'a','b','c','d','e','f','g','h','i','j'};
char word[100];
bool check(void);
int main()
{
    printf("Enter word: ");
    scanf("%s", word);
    if (check())
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}

bool check(void)
{
    int lenword = strlen(word);
    int temp=0;
    for (int i=0; word[i] != '\0'; i++)
    {
        for (int j=0; j<10; j++)
        {
            if (characters[j]== word[i])
            {
                temp++;
                break;
            }
        }
    }
    if (temp == lenword)
    {
        return true;
    }
    return false;
}