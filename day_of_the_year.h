/**
** Autor: Verena Brewe
** Titel: Day of the year Funktionsprototypen & Struct
** Datum: 27.02.2019
**/


#ifndef DAY_OF_THE_YEAR_H_INCLUDED
#define DAY_OF_THE_YEAR_H_INCLUDED
struct date
{
    int day;
    int month;
    int year;
};
int is_leapyear(struct date given_date);
int get_days_for_month(struct date given_date);
int exists_date(struct date given_date);
int day_of_the_year(struct date given_date);
struct date input_date();
#endif // DAY_OF_THE_YEAR_H_INCLUDED
