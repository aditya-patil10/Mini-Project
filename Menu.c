#include <stdio.h>

int main()
{
    char op, ch;

    do
    {
        printf("\n<------ Welcome to Kolhapuri Tadka ------>\n");
        printf("<--- Test the Fire of Kolhapur --->\n");
        printf("Please select what you want -->\n");
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
            printf("1. Chicken 65      - Rs.250\n");
            printf("2. Chicken Kebab   - Rs.300\n");
            printf("3. Paneer Pakoda   - Rs.350\n");
            printf("4. Exit\n");

            printf("Enter your choice: ");
            scanf(" %c", &ch);

            switch (ch)
            {
            case '1':
                printf("Ordered: Chicken 65 (Rs.250)\n");
                break;

            case '2':
                printf("Ordered: Chicken Kebab (Rs.300)\n");
                break;

            case '3':
                printf("Ordered: Paneer Pakoda (Rs.350)\n");
                break;

            case '4':
                printf("Returning to Main Menu...\n");
                break;

            default:
                printf("Invalid Choice!\n");
            }
            break;

        case '2':
            printf("\n--- Main Course Menu ---\n");
            printf("1. Chicken Pahadi          - Rs.350\n");
            printf("2. Chicken Murg Musallam   - Rs.450\n");
            printf("3. Paneer Tadka            - Rs.400\n");
            printf("4. Veg Mix                 - Rs.500\n");
            printf("5. Exit\n");

            printf("Enter your choice: ");
            scanf(" %c", &ch);

            switch (ch)
            {
            case '1':
                printf("Ordered: Chicken Pahadi (Rs.350)\n");
                break;

            case '2':
                printf("Ordered: Chicken Murg Musallam (Rs.450)\n");
                break;

            case '3':
                printf("Ordered: Paneer Tadka (Rs.400)\n");
                break;

            case '4':
                printf("Ordered: Veg Mix (Rs.500)\n");
                break;

            case '5':
                printf("Returning to Main Menu...\n");
                break;

            default:
                printf("Invalid Choice!\n");
            }
            break;

        case '3':
            printf("\n--- Dessert Menu ---\n");
            printf("1. Ice Cream     - Rs.150\n");
            printf("2. Faluda        - Rs.250\n");
            printf("3. Pastry Cake   - Rs.300\n");
            printf("4. Exit\n");

            printf("Enter your choice: ");
            scanf(" %c", &ch);

            switch (ch)
            {
            case '1':
                printf("Ordered: Ice Cream (Rs.150)\n");
                break;

            case '2':
                printf("Ordered: Faluda (Rs.250)\n");
                break;

            case '3':
                printf("Ordered: Pastry Cake (Rs.300)\n");
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

    return 0;
}
