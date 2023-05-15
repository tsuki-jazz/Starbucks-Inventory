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
        printf("3. At Home\n");
        printf("4. Merchandise\n\n");
    }
    
    {   
        //Prompts user input for selecting a menu option
        printf("Enter the number that that corresponds to the menu option.\n");
        printf("Remember, press to 0 to quit.\n");
        printf("Response: ");
        scanf("%d", &option);
    }

    {   //Quits Program
        if(option == 0)
        {
        exit(main);
        }

    } 
    return 0;
}