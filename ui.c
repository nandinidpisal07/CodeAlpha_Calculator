#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

#include "colors.h"
#include "ui.h"

void clearScreen()
{
    system("cls");
}

void loadingScreen()
{
    clearScreen();

    printf(TITLE_COLOR);

    printf("\n");
    printf("===============================================================\n");
    printf("                      CODEALPHA CALCULATOR\n");
    printf("===============================================================\n\n");

    printf(INFO_COLOR);

    printf("Loading ");

    for(int i=0;i<25;i++)
    {
        Sleep(80);
        printf("%c",219);
        fflush(stdout);
    }

    Sleep(400);

    printf(RESET);
}

void titleScreen()
{
    clearScreen();

    printf(TITLE_COLOR);

    printf("===============================================================\n");
    printf("                 PROFESSIONAL CALCULATOR SYSTEM\n");
    printf("===============================================================\n");

    printf(RESET);

    printf(INFO_COLOR);

    printf("Developer : Nandini Pisal\n");
    printf("Internship: CodeAlpha C Programming\n");
    printf("Version   : 3.0\n");

    printf("---------------------------------------------------------------\n");

    printf(RESET);
}

void dashboard()
{
    printf(BGREEN);

    printf("\n");
    printf("                 MAIN MENU\n\n");

    printf(" 1. Addition\n");
    printf(" 2. Subtraction\n");
    printf(" 3. Multiplication\n");
    printf(" 4. Division\n");
    printf(" 5. Modulus\n");
    printf(" 6. Power\n");
    printf(" 7. Square\n");
    printf(" 8. Square Root\n");
    printf(" 9. Percentage\n");
    printf("10. Exit\n");

    printf(RESET);
}

void resultBox(char title[], double result)
{
    printf(SUCCESS_COLOR);

    printf("\n");
    printf("===============================================================\n");
    printf("                    %s\n",title);
    printf("===============================================================\n\n");

    printf("Result : %.2lf\n",result);

    printf("\n===============================================================\n");

    printf(RESET);
}

void errorBox(char message[])
{
    printf(ERROR_COLOR);

    printf("\n");
    printf("===============================================================\n");
    printf("                         ERROR\n");
    printf("===============================================================\n\n");

    printf("%s\n",message);

    printf("\n===============================================================\n");

    printf(RESET);
}

void footer()
{
    printf(INFO_COLOR);

    printf("\n");
    printf("===============================================================\n");
    printf("        Thank You For Using CodeAlpha Calculator\n");
    printf("===============================================================\n");
    printf("Developed By : Nandini Pisal\n");

    printf(RESET);
}

void pauseScreen()
{
    printf(WARNING_COLOR);

    printf("\nPress ENTER to continue...");

    printf(RESET);

    getchar();
    getchar();
}