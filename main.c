/*
===============================================================
                    main.c
        CodeAlpha Calculator Project
        Developed by Nandini Pisal
===============================================================
*/

#include <stdio.h>
#include <stdlib.h>

#include "ui.h"
#include "operations.h"

int main()
{
    int choice;

    double num1, num2;
    int int1, int2;

    loadingScreen();

    while (1)
    {
        titleScreen();

        dashboard();

        printf("\nEnter Choice : ");

        if (scanf("%d", &choice) != 1)
        {
            errorBox("Invalid Input!");

            while(getchar()!='\n');

            pauseScreen();

            continue;
        }

        switch(choice)
        {

        case 1:

            printf("\nEnter First Number : ");
            scanf("%lf",&num1);

            printf("Enter Second Number : ");
            scanf("%lf",&num2);

            resultBox("ADDITION",add(num1,num2));

            break;

        case 2:

            printf("\nEnter First Number : ");
            scanf("%lf",&num1);

            printf("Enter Second Number : ");
            scanf("%lf",&num2);

            resultBox("SUBTRACTION",subtract(num1,num2));

            break;

        case 3:

            printf("\nEnter First Number : ");
            scanf("%lf",&num1);

            printf("Enter Second Number : ");
            scanf("%lf",&num2);

            resultBox("MULTIPLICATION",multiply(num1,num2));

            break;

        case 4:

            printf("\nEnter First Number : ");
            scanf("%lf",&num1);

            printf("Enter Second Number : ");
            scanf("%lf",&num2);

            if(!isDivisionValid(num2))
            {
                errorBox("Division By Zero Is Not Allowed.");
            }
            else
            {
                resultBox("DIVISION",divideNumbers(num1,num2));
            }

            break;

        case 5:

            printf("\nEnter First Integer : ");
            scanf("%d",&int1);

            printf("Enter Second Integer : ");
            scanf("%d",&int2);

            if(!isModulusValid(int2))
            {
                errorBox("Modulus By Zero Is Not Allowed.");
            }
            else
            {
                resultBox("MODULUS",(double)modulus(int1,int2));
            }

            break;

        case 6:

            printf("\nEnter Base : ");
            scanf("%lf",&num1);

            printf("Enter Exponent : ");
            scanf("%lf",&num2);

            resultBox("POWER",power(num1,num2));

            break;

        case 7:

            printf("\nEnter Number : ");
            scanf("%lf",&num1);

            resultBox("SQUARE",square(num1));

            break;

        case 8:

            printf("\nEnter Number : ");
            scanf("%lf",&num1);

            if(!isSquareRootValid(num1))
            {
                errorBox("Square Root Of Negative Number Is Not Possible.");
            }
            else
            {
                resultBox("SQUARE ROOT",squareRoot(num1));
            }

            break;

        case 9:

            printf("\nEnter Total Value : ");
            scanf("%lf",&num1);

            printf("Enter Obtained Value : ");
            scanf("%lf",&num2);

            if(!isPercentageValid(num1))
            {
                errorBox("Total Value Cannot Be Zero.");
            }
            else
            {
                resultBox("PERCENTAGE",percentage(num1,num2));
            }

            break;

        case 10:

            footer();

            return 0;

        default:

            errorBox("Invalid Menu Choice.");

        }

        pauseScreen();

    }

    return 0;
}