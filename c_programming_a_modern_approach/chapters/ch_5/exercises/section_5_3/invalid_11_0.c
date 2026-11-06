// Idea:

ios this idea ever going to work haha

#include <stdio.h>

char *state(void)
{   
    int area_code;

    printf("Enter your area code: ");
    if (scanf("%d", &area_code) != 1) {
        printf("Invalid input\n");
        return "-1";
    }

    int code[] = {
        229, 404, 470, 478, 678, 706, 762, 770, 912
    };

    char *major_city[] = {
        "Albany", "Atlanta", "Atlanta", "Macon", "Atlanta", 
        "Columbus", "Columbus", "Atlanta", "Savannah"
    }

    int n = sizeof(code) / sizeof(code[0]);
    for (int i = 0; i < n; i++) {
        switch (code[i] == area_code) {
            case code[i]:
                return major_city[i];
            default:
                return "Area code not recognised";
        }
    }
}