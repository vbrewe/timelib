/**
** Autor: Verena Brewe
** Titel: Day of the year Funktionsprototypen & Struct
** Datum: 27.02.2019
**/

#include <stdio.h>
#include <stdlib.h>
#include "day_of_the_year.h"

int main()
{
    struct date given_date;
    do
    {
        given_date = input_date();
    }
    while(exists_date(given_date)== 0);     // Wenn das angegebene Datum ungueltig ist,wird erneut eingelesen, solange bis ein gueltiges Datum eingegeben wurde.
    get_days_for_month(given_date);         // Ruft die Funktion get_days_for_month auf um herauszufinden wie viele Tage der Monat hat
    day_of_the_year(given_date);            // Ruft die Funktion day_of_the_year auf um den Tag des Jahres zu berechnen.
    return 0;
}
