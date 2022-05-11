#include <stdio.h>
void insertion_sort(int number[], int count)
{

    int i, j, temp;
    for (i = 0; i < count; i++)
    {
        for (j = i + 1; j < count; j++)
        {
            if (number[i] > number[j])
            {
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
    }

    printf("Sorted elements: ");
    for (i = 0; i < count; i++)
        printf(" %d", number[i]);
}
int main()
{

    int i, j, count, temp, number[25];

    printf("How many numbers u are going to enter?: ");
    scanf("%d", &count);

    printf("Enter %d elements: ", count);
    for (i = 0; i < count; i++)
        scanf("%d", &number[i]);
    insertion_sort(number, count);

    return 0;
}