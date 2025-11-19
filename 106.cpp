#include <stdio.h>
struct ITEM {
    char item_name[50];
    int quantity;
    float price;
    float amount;
};
struct ITEM readitem() 
{
    struct ITEM it;
    printf("Enter item name: ");
    scanf("%s", it.item_name);
    printf("Enter quantity: ");
    scanf("%d", &it.quantity);
    printf("Enter price: ");
    scanf("%f", &it.price);
    it.amount=it.quantity*it.price;   
    return it;  
}
int main() {
    struct ITEM it;
    it = readitem();   
    printf("\nITEM DETAILS\n");
    printf("Item Name : %s\n", it.item_name);
    printf("Quantity : %d\n", it.quantity);
    printf("Price : %.2f\n", it.price);
    printf("Amount : %.2f\n", it.amount);
    return 0;
}
