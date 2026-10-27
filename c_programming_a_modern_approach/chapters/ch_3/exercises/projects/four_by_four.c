#include <stdio.h>

int main(void)
{
    int arr[16];
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;

    printf("Enter 16 digits ranging from 1 <= 16: \n");
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input");
            return -1;
        }
        printf("Numbers entered = %d\n", i + 1);
    }

    for (int j = 0; j < n; j++) {
        printf("%d ", arr[j]);

        if ((j + 1) % 4 == 0) {
            printf("\n");
        }
    }

    return 0;
}