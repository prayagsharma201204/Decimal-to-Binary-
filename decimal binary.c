#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    int n, temp, i;
    char output[20];

    rerun:
    system("cls");
    printf("*** Decimal To Binary Converter ***\n\n");
    printf("Enter a number -- ");
    scanf("%d", &n);

    for (temp = n, i = 0; temp > 0; temp /= 2){
        output[i++] = (temp % 2 == 0) ? '0' : '1';
    }
    output[i] = '\0';
    strrev(output);
    printf("\nThe Binary of %d is %s", n, output);

    printf("\n\nDo you want to try with a new number...\nPress 1. to try again otherwise any other key\n");
    if (getch() == '1'){
        goto rerun;
    }
    else printf("\n\nExiting the program...\n");
}
