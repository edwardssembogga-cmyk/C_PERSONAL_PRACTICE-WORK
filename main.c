#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pages, choice;
    float price_per_page, total, discount, final_total;

    while (1) {
        price_per_page = 0;
        total = 0;
        discount = 0;
        final_total = 0;

        printf("\n-------------UNIVERSITY PRINTING CENTRE-----------\n\n");
        printf("Enter choice:\n");
        printf("1. Printing (750 UGX per page)\n");
        printf("2. Photocopy (300 UGX per page)\n");
        printf("3. Scanning (200 UGX per page)\n");
        printf("4. Other service\n");
        printf("5. Exit (Close for the day)\n");
        printf("Choice made: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting program. Closing the center!\n");
            break;
        }
        if (choice < 1 || choice > 4) {
            printf("Invalid Choice! Please select a valid option from the menu.\n");
            continue;
        }

        printf("Enter Number of Pages/Quantity: ");
        scanf("%d", &pages);

        if (pages <= 0) {
            printf("Input a positive page number. Transaction cancelled.\n");
            continue;
        }

        switch (choice) {
            case 1:
                price_per_page = 750;
                printf("Service selected: Printing\n");
                break;
            case 2:
                price_per_page = 300;
                printf("Service selected: Photocopy\n");
                break;
            case 3:
                price_per_page = 200;
                printf("Service selected: Scanning\n");
                break;
            case 4:
                price_per_page = 500; // Example flat rate for other services
                printf("Service selected: Other services\n");
                break;
        }

        total = price_per_page * pages;

        if (pages >= 100) {
            discount = total * 0.15;
        } if else(pages >= 50) {
            discount = total * 0.10;
        } else {
            discount = 0;
        }
        final_total = total - discount;

        printf("\n-------------RECEIPT TOTAL--------------\n");
        printf("Total items/pages: %d\n", pages);
        printf("Price per unit (UGX): %.2f\n", price_per_page);
        printf("Subtotal amount (UGX): %.2f\n", total);
        printf("Discount applied (UGX): %.2f\n", discount);
        printf("Final Total to Pay (UGX): %.2f\n", final_total);
        printf("----------------------------------------\n");
    }

    return 0;
}
