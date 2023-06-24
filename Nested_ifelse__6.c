#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a == 1)
    {
        printf("Number 1 is entered!");
    }
    else
    {
        if (a == 0)
        {
            printf("Number 0 is entered");
        }
        else
        {
            printf("Wrong Input");
        }
    }
    return 0;
}