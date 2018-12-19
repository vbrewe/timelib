/**
 *Titel:
 *Autor: Verena Brewe
 *Datum: 18.12.2018
 **/

#include <stdio.h>
#include <stdlib.h>



/**
 * Die Funktion überprüft, ob ein gegebenes Jahr nach den Regeln des
 * gregorianischen Kalenders ein Schaltjahr ist. Bei Jahreszahlen vor
 * dem Jahr 1582 wird ein Fehler zurückgegeben.
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
                return 1;                                               // Rückgabewert, wenn das übergebene Jahr ein Schaltjahr ist
            }
            else
            {
                printf("Dieses Jahr ist kein Schaltjahr \n");
                return 0;                                               // Rückgabewert, wenn das übergebene Jahr kein Schaltjahr ist
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
* Die Funktion berechnet für ein gegebenes Datum des gregorianischen Kalenders bestehend aus Tag, Monat und Jahr
* die Nummer des Tages, gezählt von Jahresbeginn (1. Januar) an. Schaltjahre werden bei der Berechnung berück-
* sichtigt. Ist das übergebene Datum ungültig, beträgt der Rückgabewert -1
**/

int day_of_the_year(int day, int month, int year)
{

    return 0;
}

/**
* Die Funktion bestimmmt für einen gegebenen Monat eines gegebenen Jahres, wie viele Tage der Monat hat. Der
* Wert des Monats muss zwichen 1 und 12 liegen. Schaltjahre werden berücksichtigt.
**/

int get_days_for_month(int month, int year)
{
    return 0;
}

/**
* Die Funktion überprüft, ob ein gegebenes Datum gültig ist. Daten vor dem 1.1.1582 sind ungültig, genauso
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
