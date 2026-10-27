#include <stdio.h>

int main(void)
{
    int gs_prefix, grp_identifier, pblsh_code, i_num, check_dig;

    printf("Please enter ISBN number (num1-num2-num3-num4-num5): \n");
    scanf("%d-%d-%d-%d-%d", &gs_prefix, &grp_identifier, &pblsh_code, &i_num, &check_dig);
    printf(
        "GS1 Prefix: %d\nGroup Identifier: %d\nPublisher Code: %d\nItem Number: %d\nCheck Digit: %d\n",
        gs_prefix, grp_identifier, pblsh_code, i_num, check_dig
    );

    return 0;
}