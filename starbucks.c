#include <stdio.h>

int main(){

    int option;

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
                printf("1. Hot Coffees\n");
                printf("2. Hot Teas\n");
                printf("3. Hot Drinks\n");
                printf("4. Frappuccino Blended Beverages\n");
                printf("5. Cold Coffees\n");
                printf("6. Iced Teas\n");
                printf("7. Cold Drinks\n");

                {   // Prompt user input for selecting type of drink
                    printf("Enter the number that corresponds to the drink: ");
                    scanf("%d", &option);
                }
                    
            }

                
    }
    return 0;
}