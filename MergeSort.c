#include <stdio.h>
#define MAX 100
int n, a[MAX];
void display();
void merge(int lb, int m, int ub);
void mergeSort(int lb, int ub);

void display()
{
    for (int i = 0; i < n; i++)
        printf("%d\t", a[i]);
}
void merge(int lb, int m, int ub)
{
    int i = lb, j = m + 1;
    int temp[MAX];
    int k = lb;
    while (i <= m && j <= ub)
    {
        if (a[i] < a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }
    while (i <= m)
        temp[k++] = a[i++];
    while (j <= ub)
        temp[k++] = a[j++];
    for (int p = lb; p <= ub; p++)
        a[p] = temp[p];
}
void mergeSort(int lb, int ub)
{
    int m;
    if (lb < ub)
    {
        m = (lb + ub) / 2;
        mergeSort(lb, m);
        mergeSort(m + 1, ub);
        merge(lb, m, ub);
    }
    display();
    printf("\n");
}
int main()
{
    printf("Enter the size of array :");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Element no. %d of array :", i + 1);
        scanf("%d", &a[i]);
    }
    printf("sorted array :");
    mergeSort(0, n - 1);
    return 0;
}