#include <stdio.h>

int main()
{
    int sayi = 0;
    int arr[10];
    for (int i = 0; i < 5; i++)
    {
        printf("Sayi giriniz:");
        scanf("%d", &sayi);
        arr[i] = sayi;
    }

    for (int i = 0; i < 10; i++)
    {
        int i, j, min_idx;

        // One by one move boundary of unsorted subarray
        for (i = 0; i < 10 - 1; i++)
        {

            // Find the minimum element in unsorted array
            min_idx = i;
            for (j = i + 1; j < 10; j++)
                if (arr[j] < arr[min_idx])
                    min_idx = j;

            // Swap the found minimum element
            // with the first element
            int temp = arr[min_idx];
            int *xp = &arr[min_idx], *yp = &arr[i];
            *xp = *yp;
            *yp = temp;
        }
    }
    return 0;
}