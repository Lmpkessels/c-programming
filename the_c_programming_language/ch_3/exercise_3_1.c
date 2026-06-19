#include <stdio.h>

// Search for X within a sorted array
int binsearch(int x, int v[], int n)
{
    int low, mid, high;

    low = 0;
    high = n - 1;
    mid = (low + high) / 2;

    while (low <= high && x != v[mid]) {
        if (x < v[mid]) {
            high = mid - 1; // The right side falls away
        } else {
            low = mid + 1; // The left side falls away
        }

        mid = (low + high) / 2;
    }

    /* Returns updated middle when it is X, else return
    error failure condition */
    if (x == v[mid]) {
        return mid + 1; // +1 for human readability in terminal
    } else {
        return -1;
    }
}

int main(void) 
{
    int x = 2;

    int arr[6] = {1, 2, 3, 4, 5, 6};

    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Result: %d\n", binsearch(x, arr, n));
}