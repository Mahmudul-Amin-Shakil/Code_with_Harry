#include <stdio.h>
int main()
{
    printf("Hello World\n");
    int i, age;
    for (i = 0; i < 10; i++)
    {
        printf("Enter your age : ", i);
        scanf("%d", &age);
        if (age < 10)
        {
            printf("Harry is a good boy\n");
            continue;
        }
        else
        {
            break;
        }
    }
    return 0;
}