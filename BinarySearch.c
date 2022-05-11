#include <stdio.h>

int binarySearch(int *arr, int n, int x)
{
    int low, mid, high;
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (x == arr[mid])
        {
            return mid;
        }
        else if (x < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the %d elements of the array:", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int x;
    printf("Enter the number you want to search: ");
    scanf("%d", &x);

    int k;
    k = binarySearch(arr, n, x);
    if (k == -1)
    {
        printf("%d not found.\n", x);
    }
    else
    {
        printf("%d is present at index no.%d\n", x, k);
    }
    printf("\n");
    return 0;
}