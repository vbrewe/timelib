/**
 *Titel:
 *Autor: Verena Brewe
 *Datum: 18.12.2018
 **/

#include <stdio.h>
#include <stdlib.h>



/**
 * Die Funktion �berpr�ft, ob ein gegebenes Jahr nach den Regeln des
 * gregorianischen Kalenders ein Schaltjahr ist. Bei Jahreszahlen vor
 * dem Jahr 1582 wird ein Fehler zur�ckgegeben.
 **/
int isLeapyear(int year)
{
    if (year < 1582)
    {
        printf("Dieses Jahr liegt ausserhalb des gregorianischen Kalenders \n");
        return -1;
    }
    else if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("Dieses Jahr ist ein Schaltjahr \n");
                return 1;                                               // R�ckgabewert, wenn das �bergebene Jahr ein Schaltjahr ist
            }
            else
            {
                printf("Dieses Jahr ist kein Schaltjahr \n");
                return 0;                                               // R�ckgabewert, wenn das �bergebene Jahr kein Schaltjahr ist
            }
        }
        else
        {
            printf("Dieses Jahr ist ein Schaltjahr \n");
            return 1;
        }
    }

    else
    {
        printf("Dieses Jahr ist kein Schaltjahr \n");
        return 0;
    }
}

/**
* Die Funktion berechnet f�r ein gegebenes Datum des gregorianischen Kalenders bestehend aus Tag, Monat und Jahr
* die Nummer des Tages, gez�hlt von Jahresbeginn (1. Januar) an. Schaltjahre werden bei der Berechnung ber�ck-
* sichtigt. Ist das �bergebene Datum ung�ltig, betr�gt der R�ckgabewert -1
**/

int day_of_the_year(int day, int month, int year)
{

    return 0;
}

/**
* Die Funktion bestimmmt f�r einen gegebenen Monat eines gegebenen Jahres, wie viele Tage der Monat hat. Der
* Wert des Monats muss zwichen 1 und 12 liegen. Schaltjahre werden ber�cksichtigt.
**/

int get_days_for_month(int month, int year)
{
    return 0;
}

/**
* Die Funktion �berpr�ft, ob ein gegebenes Datum g�ltig ist. Daten vor dem 1.1.1582 sind ung�ltig, genauso
* wie alle Daten nach dem 31.12.2400
*/

int exists_date(int day, int month, int year)
{
    return 0;
}

int main()
{

    printf("Berechnung eines Schaltjahres\n");

    int year = 0;

    printf("Geben Sie eine Jahreszahl ein: \n");
    scanf("%i", & year);
    isLeapyear(year);
    int day_of_the_year(int day, int month, int year);
    printf("Tag des Jahres: %i\n", day_of_the_year(31, 12, 2018));
    return 0;
}
