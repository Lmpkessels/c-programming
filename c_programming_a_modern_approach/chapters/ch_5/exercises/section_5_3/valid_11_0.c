// How the idea could work

#include <stdio.h>

const char *area(const int code[], const char *city[], int n);

int main(void) 
{
    int code[] = {
        229, 404, 470, 478, 678, 706, 762, 770, 912
    };

    const char *city[] = {
        "Albany", "Atlanta", "Atlanta", "Macon", "Atlanta",
        "Columbus", "Columbus", "Atlanta", "Savannah"
    };

    int n = sizeof(code) / sizeof(code[0]);

    printf("Enter area code: ");
    const char *result = area(code, city, n);
    
    if (result != NULL) {
        printf("%s\n", result);
    }

    return 0;
}

const char *area(const int code[], const char *city[], int n) 
{
    int area_code, i;

    if (scanf("%d", &area_code) != 1) {
        printf("Invalid input");
        return NULL;
    }

    for (i = 0; i < n; i++) {
        switch (code[i] == area_code) {
            case 1:
                return city[i];
            case 0:
                break;
        }
    }

    return "Area code not recognized\n";
}