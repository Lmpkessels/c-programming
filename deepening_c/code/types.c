/* --- NOTES ---
- at all times use the right formaters in printf()
- %zu is used for size_t values
- size_t is an unsigned integer of 8 bytes
- size_t is used in allocation apis because it represents sizes of objects in bytes
- use data-types such a uint_8 for better use of memory
- pointer subtraction is used to calculate ranges of data structures
- ptrdiff_t is used as data-type for pointer subtraction
- NULL can be used when a piece of data is unknown, or not known yet
- NULL can be used to indicate that a variable currently does not point to memory on the heap
- NULL can be used for failure states
*/

#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stddef.h>

int main(void)
{
    // The size is 8 bytes
    printf("type_t: (%zu)\n", sizeof(size_t));

    // Will wrap around
    size_t minus = -2222;
    printf("minus: %zu\n", minus);

    size_t positive = 2222;
    printf("positive: %zu\n", positive);

    void *vp;
    int x;
    vp = &x;

    // If void * has no value initialized then it's (nil)
    // else it's the actual address of the initialized value
    printf("void *: (%p)\n", vp);

    printf("%zu\n", sizeof(NULL));

    // Limits of INT, LONG, CHAR, SIZE
    printf("INT: (%d)\n", INT_MAX);
    printf("LONG: (%ld)\n", LONG_MAX);
    printf("CHAR: (%d)\n", CHAR_BIT);
    printf("SIZE: (%zu)\n", SIZE_MAX);

    uint8_t age;
    age = 18;
    printf("%d\n", sizeof(age));
    
    // Will wrap arround
    age = age - 20;
    printf("%d\n", age);
    
    // Signed int can be above and below 0
    int8_t degrees;
    degrees = 20;
    printf("Totay it's %d degrees\n", degrees);

    degrees = degrees - 21;
    printf("Today it freezes it's %d degrees\n", degrees);

    // Used for pointer subtraction
    ptrdiff_t pointer_sub;
    
    int *ptr1;
    int *ptr2;

    int ptr1_v = 1;
    int ptr2_v = 2;

    ptr1 = &ptr1_v;
    ptr2 = &ptr2_v;

    pointer_sub = ptr1 - ptr2;
    
    printf("ptr1: (%p) | ptr2: (%p) | ptr subtratction: (%ld)\n", ptr1, ptr2, pointer_sub);

    // Is more often used for calculating elements in an array:
    int arr[8] = {
        33, 12, 2143, 5, 23, 99, 19, 21
    };
    
    int n = sizeof(arr) / sizeof(arr[0]);
    int *start_arr = &(arr[0]);
    int *end_arr = &(arr[n - 1]);
    
    pointer_sub = end_arr - start_arr;
    
    printf("end_arr %d - start_arr %d = %d\n", start_arr, end_arr, pointer_sub);
}