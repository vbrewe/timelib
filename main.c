/**
 *Titel:
 *Autor: Verena Brewe
 *Datum: 18.12.2018
 **/

#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 **/
int isLeapyear(int);
int day_of_the_year(int day, int month, int year)
{

    return 0;
}

int main()
{
    printf("Tag des Jahres: %i\n", day_of_the_year(31, 12, 2018));
    printf("Berechnung eines Schaltjahres\n");

    int jahreszahl = 0;

    printf("Geben Sie eine Jahreszahl ein: \n");
    scanf("%i", & jahreszahl);
    isLeapyear(jahreszahl);
    return 0;
}
int isLeapyear(int jahreszahl)
{
    if (jahreszahl < 1582)
    {
        printf("Dieses Jahr liegt ausserhalb des gregorianischen Kalenders\n");
        return -1;
    }
    else if (jahreszahl % 4 == 0)
    {
        if (jahreszahl % 100 == 0)
        {
            if (jahreszahl % 400 == 0)
            {
                printf("Dieses Jahr ist ein Schaltjahr\n");
            }
            else
            {
                printf("Dieses Jahr ist kein Schaltjahr\n");
            }
        }
        else
        {
            printf("Dieses Jahr ist ein Schaltjahr\n");
        }
    }

    else
    {
        printf("Dieses Jahr ist kein Schaltjahr\n");
    }
    return 0;
}
