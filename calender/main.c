#include <stdio.h>
#include <stdlib.h>

/*--------------prototype-------------*/

int get_the_first_day_of_week(int year);

int main()
{
    /*----For system background color-----*/
    system("color b0");

    int month, year, day, dayInMonth, weekDay = 0,startingDay;
    printf("Enter the year you wanna see: ");
    scanf("%d", &year);

        //use pointer char array

    char *months[]= {"January", "February", "March", "April", "May", "Jun", "July", "August", "September", "October", "November", "December"};

        //use array for get the day on a month

    int monthDay[]= {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    /*-- this if statement for check leap year -------*/

    if((year % 4 == 0 && year % 1000 != 0)||(year % 400 == 0))
        monthDay[1] = 29;

    startingDay=get_the_first_day_of_week(year);

    /*------this loop for print month and week name--------*/

    for(month = 0; month < 12; month++)
    {
        printf("\n\n-----------------%s-------------------\n\n", months[month]);
        printf("   Sun  Mon  Tus   Wed  Thr  Fri  sat\n");

        dayInMonth = monthDay[month];

        /*-- this loop for put white space on blank day --*/

        for(weekDay = 0; weekDay < startingDay; weekDay++)
            printf("     ");

        for(day = 1; day <= dayInMonth; day++)
        {
            printf("%5d", day);

            /* insert a new line after 7 day */

            if(++weekDay > 6)
            {
                printf("\n");
                weekDay=0;
            }
            startingDay=weekDay;
        }


    }
    return 0;
}

/*--- this function is for get the first day of week ------*/

int get_the_first_day_of_week(int year)
{
    int dayOfWeek;

    /* -----------Source From https://stackoverflow.com/a/16309589----------------*/

    dayOfWeek = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;

    return dayOfWeek;
}
