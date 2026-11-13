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
    
    if (hours_since_midnight == -1) {
        return 1;
    }

    n = sizeof(d_hours) / sizeof(d_hours[0]);

    compare(
        hours_since_midnight, d_hours, d_minutes, a_hours, a_minutes, n
    );

    return 0;
}

// Receive user input in 24-hour format
int received(void)
{
    int rhours, rminutes;

    printf("Enter a 24-hour time: ");
    if ((scanf("%d:%d", &rhours, &rminutes) != 2) ||
        rhours < 0 || rhours > 23 || 
        rminutes < 0 || rminutes > 59
    ) 
    {
        printf("Invalid Input\n");
        return -1;
    }

    return ((rhours * 60) + rminutes);
}

int absolute(int x)
{
    return x < 0 ? -x : x;
}

// Compare received hours with departure hours and print when the
// closest departure time is and when it arrives
void 
compare(
    int hours_since_midnight, 
    int d_hours[], int d_minutes[],
    int a_hours[], int a_minutes[],
    int n
)
{
    int i;
    int dh, dm, ah, am;
    int current, next;
    int sum1, sum2;
    int closest;

    closest = n - 1;
    // Retrieve the closest departure time
    for (i = 0; i < n - 1; i++) {
        current = ((d_hours[i] * 60) + d_minutes[i]);
        next = ((d_hours[i + 1] * 60) + d_minutes[i + 1]);
        
        if (hours_since_midnight <= next) {
            sum1 = absolute(current - hours_since_midnight);
            sum2 = absolute(next - hours_since_midnight);

            if (sum1 <= sum2) {
                closest = i;
            } else {
                closest = i + 1;
            }

            break;
        }
    }

    dh = d_hours[closest];
    dm = d_minutes[closest];
    ah = a_hours[closest];
    am = a_minutes[closest];

    // Print the departure and arriving in the right format:
    // a.m. p.m.
    printf(
        "Closest departure time is %d:%02d %s, ariving at %d:%02d %s\n",
        dh % 12 == 0 ? 12 : dh % 12,
        dm,
        dh < 12 ? "a.m." : "p.m.",
        ah % 12 == 0 ? 12 : ah % 12,
        am,
        ah < 12 ? "a.m." : "p.m."
    );
}