#include <stdio.h>
int main()
{
    int marks[10], sum = 0;
    printf("Enter marks of 10 students : \n");
    for (int i = 0; i <= 9; i++)
    {
        printf("Marks of %d student : ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    int average = sum / 10;
    printf("The average marks of 10 students : ", average);
    return 0;
}