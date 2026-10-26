#include <stdio.h>

int main(void)
{
    int item_num;
    printf("Enter item number: ");
    scanf("%d", &item_num);
    
    float u_price;
    printf("Enter unit price: ");
    scanf("%f", &u_price);
    
    int year, month, day;
    printf("Enter order date (yyyy/mm/dd): ");
    scanf("%d/%d/%d", &year, &month, &day);

    printf("Item:\tUnit\tPurchase\n\tPrice:\tDate:\n%d\t$%.2f\t%d/%d/%d\n", item_num, u_price, year, month, day);
    return 0;
}