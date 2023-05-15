#include "starbucks.h"
#include <stdio.h>

int main(){

    {
        //Title
        printf("Starbucks Menu\n");
        printf("==============\n");
    }

    {
        //Menu Options
        printf("1. Drinks\n");
        printf("2. Food\n");
    }
    
    {   
        //Prompts user input for selecting a menu option
        printf("Enter the number that that corresponds to the menu option.\n");
        printf("Remember, press to 0 to quit.\n");
        printf("Response: ");
        scanf("%d", &option);
    }

    {   
        //Quits Program
        if(option == 0)
        {
            printf("Goodbye.");
        }

            //Displays options for Drinks
            if(option == 1)
            {
                printf("\n1. Hot Coffees\n");
                printf("2. Hot Teas\n");
                printf("3. Hot Drinks\n");
                printf("4. Frappuccino Blended Beverages\n");
                printf("5. Cold Coffees\n");
                printf("6. Iced Teas\n");
                printf("7. Cold Drinks\n");

                {   
                    // Prompt user input for selecting type of drink
                    printf("Enter the number that corresponds to the drink: ");
                    scanf("%d", &option);
                }
                    if(option == 1)
                    {
                        printf("\nBrewed Coffees\n");
                        printf("1. Caffe Misto\n");
                        printf("2. Featured Medium Roast - Pike Place Roast\n");
                        printf("3. Featured Dark Roast\n");
                        printf("4. Green Apron Blent\n");
                        printf("5. Decaf Pike Place Roast\n\n");
                        printf("Americanos\n");
                        printf("6. Brown Sugar Oat Americano\n");
                        printf("7. Caffe Americano\n");
                        printf("8. Americano Misto\n\n");
                        printf("Cappucinnos\n");
                        printf("9. Cappuccino\n\n");
                        printf("Espresso Shots\n");
                        printf("10. Espresso\n");
                        printf("11. Espresso Con Panna\n\n");
                        printf("Flat Whites\n");
                        printf("12. Honey Almond Flat White\n");
                        printf("13. Flat White\n\n");
                        printf("Lattes\n");
                        printf("14. Oat Latte\n");
                        printf("15. Starbucks Blonde Hazelnut Latte\n");
                        printf("16. Starbucks Blonde Vanilla Late\n");
                        printf("17. Caffe Latte\n");
                        printf("18. Cinnamon Dolce Latte\n\n");
                        printf("Macchiatos\n");
                        printf("19. Caramel Macchiato\n");
                        printf("20. Espresso Macchiato\n\n");
                        printf("Mochas\n");
                        printf("21. Caffe Mocha\n");
                        printf("22. White Chocolate Mocha\n");

                        {   //Prompts for user input for selecting type of hot coffee
                            printf("To see the product's ID and cost, enter the number that corresponds to the drink: ");
                            scanf("%d", &option);

                            {
                                switch(option)
                                {
                                    case 1:
                                        printf("\nCaffe Misto\n");
                                        printf("A one-to-one combination of fresh-brewed coffee and steamed milk add up to one distinctly delicious coffee drink remarkably mixed.\n");
                                        printf("\nID  Price\n");
                                        printf("%d $%.2lf", productID[0], price[0]);
                                        break;
                                }
                            }
                        }
                    }
            }               
    }
    return 0;
}