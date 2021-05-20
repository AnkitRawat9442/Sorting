// Selection Sorting of the array
#include <stdio.h>
int main()
{
    int n, temp, min = 0;
    printf("Ankit Rawat ---- 20011670---section D \n");
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &ar[i]);

    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (ar[j] < ar[min])
                min = j;
        }
        temp = ar[i];
        ar[i] = ar[min];
        ar[min] = temp;
    }
    for (int i = 0; i < n; i++)
        printf("%3d ", ar[i]);

    return 0;
}
