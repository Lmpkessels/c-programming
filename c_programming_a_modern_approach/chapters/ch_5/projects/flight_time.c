#include <stdio.h>

int received(void);
void compare(int, int[], int[], int[], int[], int);

int main(void)
{
    int hours_since_midnight, n;

    int d_hours[] = {8, 9, 11, 12, 14, 15, 19, 21};
    int a_hours[] = {10, 11, 13, 15, 16, 17, 21, 11};
    int d_minutes[] = {0, 43, 19, 47, 0, 45, 0, 45};
    int a_minutes[] = {16, 52, 31, 0, 8, 55, 20, 58};
    
    hours_since_midnight = received();
    n = sizeof(d_hours) / sizeof(d_hours[0]);

    compare(hours_since_midnight, d_hours, d_minutes, a_hours, a_minutes, n);

    return 0;
}

int received(void)
{
    int rhours, rminutes;

    printf("Enter a 24-hour time: ");
    if (scanf("%d:%d", &rhours, &rminutes) != 2) {
        printf("Invalid Inputs\n");
        return -1;
    }

    return ((rhours * 60) + rminutes);
}

void 
compare(
    int hours_since_midnight, 
    int d_hours[], int d_minutes[],
    int a_hours[], int a_minutes[],
    int n
)
{
    int hsm, i, dh, dm, ah, am;

    
    for (i = 0; i < n; i++) {
        hsm = ((d_hours[i] * 60) + d_minutes[i]);

        if (hours_since_midnight < hsm) {
            dh = d_hours[i];
            dm = d_minutes[i];
            ah = a_hours[i];
            am = a_minutes[i];

            break;
        }
    }

    printf(
        "Closest departur time is %d:%d p.m., arriving at %d:%d p.m.\n",
        dh, dm, ah, am 
    );
}