#include <stdio.h>

#define QUIT 3

int get_menu_choice(void);
void print_report(void);



int main(void)
{
    int choice=0;

    printf("\"We\'d like to welcome you to the menu program\"\n");
    printf("Are you ready to make a choice\?\n");
    while(choice != QUIT)
    {
        choice = get_menu_choice();

        if(choice == 1)
            printf("\nBeeping the computer\a\a\a");
        else
        {
            if(choice ==2)
                print_report();
        }
    }
    printf("You chose to quit!\n");

    return 0;
}

int get_menu_choice( void)
{
    int selection = 0;

    do
    {
        printf("\n");
        printf("\n1 - Beep Computer");
        printf("\n2 - Display Report");
        printf("\n3 - Quit");
        printf("\n");
        printf("\nEnter a Selection: ");
        scanf("%d", &selection);

    } while( selection < 1 || selection > 3);

    return selection;

}

void print_report(void)
{
    printf("\nSAMPLE REPORT");
    printf("\n\nSequence\tMeaning");
    printf("\n=========\t=======");
    printf("\n\\a\t\tbell (aletr)");
    printf("\n\\b\t\tbackspace");
    printf("\n...\t\t...");
}
