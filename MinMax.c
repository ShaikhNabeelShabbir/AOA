#include <stdio.h>

void main()
{
    int arr[100];
    int i, mx, mn, n;

    printf("\n\nFind maximum and minimum element in an array :\n");
    printf("--------------------------------------------------\n");

    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);

    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    mx = arr[0];
    mn = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > mx)
        {
            mx = arr[i];
        }

        if (arr[i] < mn)
        {
            mn = arr[i];
        }
    }
    printf("Maximum element is : %d\n", mx);
    printf("Minimum element is : %d\n\n", mn);
}