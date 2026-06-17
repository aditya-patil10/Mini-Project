#include<stdio.h>

int main()
{
    char op; // for main menu
    char ch; // for sub menu

    printf("<------Welcome to Dhaba------>\n\n");
    printf("Please select what you want -->\n");
    printf("1.Starter\n2.Main Course\n3.Dessert\n4.Exit\n\n");
    
    printf("Enter your choice: ");
    scanf("%c",&op);

    switch (op)
    {
        case '1':
        printf("You have choosed Starter!\n");
        printf("1.Chicken 65\n2.Chicken Kabba\n3.Paneer Pakoda\n4.Exit\n\n");

        printf("Enter what you want: ");
        //scanf("%c",&ch);

        switch (ch)
        {
            case '1':
            printf("Chicken 65\n");
            break;

            case '2':
            printf("Chicken Kabba\n");
            break;

            case '3':
            printf("Paneer Pakoda\n");
            break;
            
            case '4':
            printf("Exit!!\n");
            break;

            default:
            printf("Sorry Not Avaliable!!\n");
            break;

        }
        break;

        case '2':
        printf("You have choosed Main Course!\n");
        printf("1.Chicken Pahaddi\n2.Chicken Murgann\n3.Paneer Taddaka\n4.Veg Mix\n5.Exit\n\n");
        
        printf("Enter what you want: ");
        scanf(" %c", &ch);
        
        switch (ch)
        {
            case '1':
            printf("Chicken Pahaddi\n");
            break;

            case '2':
            printf("Chicken Murgann\n");
            break;

            case '3':
            printf("Paneer Taddaka\n");
            break;
            
            case '4':
            printf("Veg Mix\n");
            break;

            case '5':
            printf("Exit!!\n");
            break;

            default:
            printf("Sorry Not Avaliable!!\n");
            break;

        }
        break;

        case '3':
        printf("You have choosed Dessert!\n");
        printf("1.Ice Cream\n2.Faluda\n3.Pastry Cake\n4.Exit\n\n");
        
        printf("Enter what you want: ");
        scanf("%c",&ch);

        switch (ch)
        {
            case '1':
            printf("Ice Cream\n");
            break;

            case '2':
            printf("Faluda\n");
            break;

            case '3':
            printf("Pastry Cake\n");
            break;
            
            case '4':
            printf("Exit!!\n");
            break;

            default:
            printf("Sorry Not Avaliable!!\n");
            break;

        }
        break;

        default:
        printf("Thank You\nVisit Again!!\n");
        break;
  
    }

    return 0;
  
}