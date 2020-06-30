#include <stdio.h>
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int n, i, j, temp_1;
    printf("how many times do you wanna rotate");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        temp_1 = arr[0];
        for (j = 1; j < 7; j++)
        {
            arr[j - 1] = arr[j];
        }
        arr[6] = temp_1;
    }
    for (i = 0; i < 7; i++)
    {
        printf("%d  ", arr[i]);
    }
}