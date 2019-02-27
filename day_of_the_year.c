/**
** Autor: Verena Brewe
** Titel: Day of the year Funktionsprototypen & Struct
** Datum: 18.02.2019
**/
#include <stdio.h>
#include <stdlib.h>
struct date
{
    int day;
    int month;
    int year;
};

int months[13]= {0,31,28,31,30,31,30,31,31,30,31,30,31};                         // Tage fuer die Monate wenn das Jahr kein Schaltjahr ist
int leapyear_months[13]= {0,31,29,31,30,31,30,31,31,30,31,30,31};               //Tage fuer die Monate wenn das Jahr ein Schaltjahr ist


/**
* Die Funktion liest 3 Ganzzahlwerte (Integer) ein, fuer Tag, Monat und Jahr. Wenn das angegebene Datum
* ungueltig ist,wird erneut eingelesen, solange bis ein gueltiges Datum eingegeben wurde.
*
**/
struct date input_date()
{
    struct date given_date;
    printf("Geben Sie den Tag ein: \n");
    scanf("%d", &given_date.day);                                    //Einlesen des Tages
    fflush(stdin);
    printf("Geben Sie den Monat ein: \n");
    scanf("%d", &given_date.month);                                   // Einlesen des Monats
    fflush(stdin);
    printf("Geben Sie das Jahr ein: \n");
    scanf("%d", &given_date.year);                                    // Einlesen des Jahres
    fflush(stdin);
    return given_date;
}

/**
 * Die Funktion ueberprueft, ob ein gegebenes Jahr nach den Regeln des
 * gregorianischen Kalenders ein Schaltjahr ist. Bei Jahreszahlen vor
 * dem Jahr 1582 wird ein Fehler zurueckgegeben.
 **/
int isLeapyear (struct date given_date)
{
    if (given_date.year < 1582)
    {
        printf
        ("Dieses Jahr liegt ausserhalb des gregorianischen Kalenders \n");
        return -1;
    }
    else if (given_date.year % 4 == 0)
    {
        if (given_date.year % 100 == 0)
        {
            if (given_date.year % 400 == 0)
            {
                return 1;		// Rueckgabewert, wenn das Uebergebene Jahr ein Schaltjahr ist
            }
            else
            {
                return 0;		// Rueckgabewert, wenn das Uebergebene Jahr kein Schaltjahr ist
            }
        }
        else
        {
            return 1;		// Rueckgabewert, wenn das Uebergebene Jahr ein Schaltjahr ist
        }
    }

    else
    {
        return 0;			// Rueckgabewert, wenn das Uebergebene Jahr kein Schaltjahr ist
    }
}

/**
* Die Funktion bestimmmt fuer einen gegebenen Monat eines gegebenen Jahres, wie viele Tage der Monat hat. Der
* Wert des Monats muss zwischen 1 und 12 liegen. Schaltjahre werden beruecksichtigt.
**/

int
get_days_for_month (struct date given_date)
{
    if (given_date.month == 1 || given_date.month == 3 || given_date.month == 5 || given_date.month == 7 || given_date.month == 8
            || given_date.month == 10 || given_date.month == 12)
    {
        printf ("Der Monat hat 31 Tage \n");
        return 31;		// Der eingegebene Monat hat 31 Tage
    }
    else if (given_date.month == 2)
    {
        if (isLeapyear (given_date) == 0)
        {

            printf ("Der Monat hat 28 Tage \n");
            return 28;		// Der eingegebene Monat hat 28 Tage
        }
        else
        {
            printf ("Der Monat hat 29 Tage \n");
            return 29;		// Der eingegebene Monat hat 29 Tage
        }

    }
    else if (given_date.month == 4 || given_date.month == 6 || given_date.month == 9 || given_date.month == 11)
    {
        printf ("Der Monat hat 30 Tage \n");
        return 30;		// Der eingegebene Monat hat 30 Tage
    }
    else
    {
        printf ("Der Monat ist ungueltig \n");
        return -1;		// Der eingegebene Monat ist ungueltig
    }
}

/**
* Die Funktion ueberprueft, ob ein gegebenes Datum gueltig ist. Daten vor dem 01.01.1582 sind ungueltig, genauso
* wie alle Daten nach dem 31.12.2400
*/

int
exists_date (struct date given_date)
{
    if (given_date.year >= 1582 && given_date.year <= 2400)	// eingegebenes Datum wird auf das Jahr ueberprueft
    {
        if (given_date.month >= 0 && given_date.month != 2 && given_date.month <= 12)	// eingegebenes Datum wird auf den Monat ueberprueft
        {
            if (given_date.day >= 1 && given_date.day <= 31)	// eingegebenes Datum wird auf den Tag ueberprueft
            {
                printf ("Datum gueltig \n");
                return 1;		// Datum ist gueltig
            }
            else
            {
                return 0;
            }
        }
        else if (given_date.month == 2)
        {
            if (isLeapyear (given_date) == 0)	// Das eingegebene Jahr ist kein Schaltjahr
            {
                if (given_date.day >= 1 && given_date.day <= 28)	// eingegebenes Datum wird auf den Tag ueberprueft
                {
                    return 1;	// Datum ist gueltig
                }
                else
                {
                    return 0;	// Datum ungueltig
                }
            }
            else if (isLeapyear (given_date) == 1)	// Das eingegebene Jahr ist ein Schaltjahr
            {
                if (given_date.day >= 1 && given_date.day <= 29)	// eingegebenes Datum wird auf den Tag ueberprueft
                {
                    return 1;	// Datum ist gueltig
                }
            }
            else
            {
                return 0;		// Datum ist ungueltig
            }

        }
        else
        {
            return 0;
        }
    }
    else
    {
        printf ("Datum ungueltig \n");
        return 0;			// Datum ist ungueltig
    }
    return -1;
}

/**
* Die Funktion berechnet fuer ein gegebenes Datum des gregorianischen Kalenders bestehend aus Tag, Monat und Jahr
* die Nummer des Tages, gezaehlt von Jahresbeginn (1. Januar) an. Schaltjahre werden bei der Berechnung berueck-
* sichtigt. Ist das uebergebene Datum ungueltig, betraegt der Rueckgabewert -1
**/

int
day_of_the_year (struct date given_date)
{
    int days = 0;
    if (exists_date(given_date) == 1)
    {
        if (isLeapyear(given_date) == 1)
        {
            for (int i = 0; i < given_date.month; i++)
            {
                days = days + leapyear_months[i];
            }
            days = days + given_date.day;
            printf ("Dieses Jahr ist ein Schaltjahr \n");
            printf ("Tag des Jahres: %i\n", days);
            return days;
        }
        else if (isLeapyear(given_date) == 0)
        {
            for (int i = 0; i < given_date.month; i++)
            {
                days = days + months[i];
            }
            days = days + given_date.day;
            printf ("Dieses Jahr ist kein Schaltjahr \n");
            printf ("Tag des Jahres: %i\n", days);
            return days;
        }
    }
    else
    {
        return -1;
    }
}

/**
* Die Funktion liest 3 Ganzzahlwerte (Integer) ein, fuer Tag, Monat und Jahr. Wenn das angegebene Datum
* ungueltig ist,wird erneut eingelesen, solange bis ein gueltiges Datum eingegeben wurde.
**/
/*
int
input_date (int *day, int *month, int *year)
{
  do
    {
      printf ("Geben Sie einen Tag ein: \n");
      scanf ("%i", day);
      fflush (stdin);
      printf ("Geben Sie einen Monat ein: \n");
      scanf ("%i", month);
      fflush (stdin);
      printf ("Geben Sie eine Jahreszahl ein: \n");
      scanf ("%i", year);
      fflush (stdin);
      printf ("day: %i month: %i year: %i\n", *day, *month, *year);
    }
  while (exists_date (*day, *month, *year) == 0);
  return 0;
}*/
