#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){

    int menuchoice;
    int foodchoice;
    int i;
    char menu [][30] ={ "1 - Brazilian menu", "2 -  Indian menu", "3 - Mexican menu"};
    char menu1Foods [][25] = {"1 - Feijoada", "2 - Churrasco", "3 - Comida-baiana"};
    char menu2Foods [][25] = {"1 - Chicken Makhani", "2 - Samosas", "3 - Aloo Gobi", "4 - Naan"};
    char menu3Foods [][25] = {"1 - Tacos", "2 - Tortilhas/guaccamole", "3 - Huevos Rancheros", "4 - Machaca"};
    float menu1Prices [10] = {25.50, 30.00, 28.75};
    float menu2Prices [10] = {21.50, 34.00, 22.75, 35.75};
    float menu3Prices [10] = {15.50, 10.00, 28.75, 42.50};
    int menu1FoodsSize = sizeof(menu1Foods)/sizeof(menu1Foods[0]);
    int menu2FoodsSize = sizeof(menu2Foods)/sizeof(menu2Foods[0]);
    int menu3FoodsSize = sizeof(menu2Foods)/sizeof(menu3Foods[0]);
    int menuSize = sizeof(menu)/sizeof(menu[0]);
    char order [][25] = {};
    int orderPrice [30] = {};

    for (i = 0; i < menuSize; i++){
        printf("%s\n", menu[i]);
    }

    printf("Write down the number of your choice:");
    scanf("%d",&menuchoice);

    switch (menuchoice)
        {
        case 1:
            for(i = 0; i < menu1FoodsSize; i++){
                printf("%s - R$:%.2f\n", menu1Foods[i], menu1Prices[i]);
            }
            printf("Write down the number of your choice:\n");
            scanf("%d", &foodchoice);
            strcpy(order[0], menu1Foods[foodchoice - 1]);
            orderPrice[0] = menu1Prices[foodchoice - 1];
            
        break;
        
        case 2:
            for(i = 0; i < menu2FoodsSize; i++){
                printf("%s - R$:%.2f\n", menu2Foods[i], menu2Prices[i]);
                }
            printf("Write down the number of your choice:\n");
            scanf("%d", &foodchoice);
            strcpy(order[0], menu2Foods[foodchoice - 1]);

        break;

        case 3:
            for(i = 0; i < menu3FoodsSize; i++){
                printf("%s - R$:%.2f\n", menu3Foods[i], menu3Prices[i]);
                }
            printf("Write down the number of your choice:\n");
            scanf("%d", &foodchoice);
            strcpy(order[0], menu3Foods[foodchoice - 1]);

        break;
            
        default:
            printf ("Invalid input");

        break;
        }

    printf("ORDER:\n%s\n", order);
    printf("ORDER PRICE: R$:%.2f\n", orderPrice);
    
    return 0;
}