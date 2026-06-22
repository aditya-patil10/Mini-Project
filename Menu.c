#include <stdio.h>

int main()
{
    char op, ch1, ch2;
    long bill =0;

    printf("\n<------ Welcome to Kolhapuri Tadka ------>\n");
    printf("<--- Test the Fire of Kolhapur --->\n");

    do
    {
        printf("\nPlease select what you want -->\n");
        printf("1. Starter\n");
        printf("2. Main Course\n");
        printf("3. Dessert\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf(" %c", &op);

        switch (op)
        {
        case '1':
            printf("\n--- Starter Menu ---\n");

            do
            {
                printf("\n1. Veg\n");
                printf("2. Non-Veg\n");
                printf("3. Exit\n");
                printf("Please select your choice: ");
                scanf(" %c", &ch1);

                switch (ch1)
                {
                case '1':
                    printf("\nVeg Starters\n");
                    printf("1. Paneer Tikka    -Rs.200\n");
                    printf("2. Veg Pakora      -Rs.120\n");
                    printf("3. Paneer 65       -Rs.150\n");

                    printf("Please select what you want: ");
                    scanf(" %c", &ch2);

                    switch (ch2)
                    {
                    case '1':
                        printf("Ordered: Paneer Tikka (Rs.200)\n");
                        bill += 200;
                        break;

                    case '2':
                        printf("Ordered: Veg Pakora (Rs.120)\n");
                        bill += 120;
                        break;

                    case '3':
                        printf("Ordered: Paneer 65 (Rs.150)\n");
                        bill += 150;
                        break;

                    default:
                        printf("Invalid Choice\n");
                    }
                    break;

                case '2':
                    printf("\nNon-Veg Starters\n");
                    printf("1. Chicken 65        -Rs.150\n");
                    printf("2. Chicken Wings     -Rs.200\n");
                    printf("3. Chicken Chilli    -Rs.230\n");

                    printf("Please select what you want: ");
                    scanf(" %c", &ch2);

                    switch (ch2)
                    {
                    case '1':
                        printf("Ordered: Chicken 65 (Rs.150)\n");
                        bill += 150;
                        break;

                    case '2':
                        printf("Ordered: Chicken Wings (Rs.200)\n");
                        bill += 200;
                        break;

                    case '3':
                        printf("Ordered: Chicken Chilli (Rs.230)\n");
                        bill += 230;
                        break;

                    default:
                        printf("Invalid Choice\n");
                    }
                    break;

                case '3':
                    printf("Exit from Starter Menu\n");
                    break;

                default:
                    printf("Invalid Choice\n");
                }

            } while (ch1 != '3');
            break;

        case '2':
            printf("\n--- Main Course Menu ---\n");

            do
            {
                printf("\n1. Veg\n");
                printf("2. Non-Veg\n");
                printf("3. Exit\n");
                printf("Please select your choice: ");
                scanf(" %c", &ch1);

                switch (ch1)
                {
                case '1':
                    printf("\nVeg Main Course\n");
                    printf("1. Paneer Butter Masala    -Rs.250\n");
                    printf("2. Veg Mix                 -Rs.230\n");
                    printf("3. Dal Fry & Rice          -Rs.200\n");

                    printf("Please select what you want: ");
                    scanf(" %c", &ch2);

                    switch (ch2)
                    {
                    case '1':
                        printf("Ordered: Paneer Butter Masala (Rs.250)\n");
                        bill += 250;
                        break;

                    case '2':
                        printf("Ordered: Veg Mix (Rs.230)\n");
                        bill += 230;
                        break;

                    case '3':
                        printf("Ordered: Dal Fry & Rice (Rs.200)\n");
                        bill += 200;
                        break;

                    default:
                        printf("Invalid Choice\n");
                    }
                    break;

                case '2':
                    printf("\nNon-Veg Main Course\n");
                    printf("1. Butter Chicken     -Rs.250\n");
                    printf("2. Chicken Kadhai     -Rs.230\n");
                    printf("3. Chicken Biryani    -Rs.210\n");

                    printf("Please select what you want: ");
                    scanf(" %c", &ch2);

                    switch (ch2)
                    {
                    case '1':
                        printf("Ordered: Butter Chicken (Rs.250)\n");
                        bill += 250;
                        break;

                    case '2':
                        printf("Ordered: Chicken Kadhai (Rs.230)\n");
                        bill += 230;
                        break;

                    case '3':
                        printf("Ordered: Chicken Biryani (Rs.210)\n");
                        bill += 210;
                        break;

                    default:
                        printf("Invalid Choice\n");
                    }
                    break;

                case '3':
                    printf("Exit from Main Course Menu\n");
                    break;

                default:
                    printf("Invalid Choice\n");
                }

            } while (ch1 != '3');
            break;

        case '3':
            printf("\n--- Dessert Menu ---\n");
            printf("1. Ice Cream     - Rs.150\n");
            printf("2. Faluda        - Rs.250\n");
            printf("3. Pastry Cake   - Rs.210\n");
            printf("4. Exit\n");

            printf("Enter your choice: ");
            scanf(" %c", &ch2);

            switch (ch2)
            {
            case '1':
                printf("Ordered: Ice Cream (Rs.150)\n");
                bill += 150;
                break;

            case '2':
                printf("Ordered: Faluda (Rs.250)\n");
                bill += 250;
                break;

            case '3':
                printf("Ordered: Pastry Cake (Rs.210)\n");
                bill += 210;
                break;

            case '4':
                printf("Returning to Main Menu...\n");
                break;

            default:
                printf("Invalid Choice!\n");
            }
            break;

        case '4':
            printf("\nThank You!\nVisit Again!\n");
            break;

        default:
            printf("Invalid Main Menu Choice!\n");
        }

    } while (op != '4');

    printf("Total Bill = %ld\n", bill);

    return 0;
}