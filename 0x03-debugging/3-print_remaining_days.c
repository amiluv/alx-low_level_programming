#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - converts a date to the day of year
 * and determine the remaining days of the year, including leap years
 * @day: day of the year
 * @month: month of the year
 * @year: the year in consideration
 *
 * Return: void
 */

void print_remaining_days(int day, int month, int year)
{
	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))//if (year % 4 == 0 || ((year % 100 == 0) && (year % 400 == 0)))
	{
		if (month > 2 && day >= 60)
		{
			day++;
		}
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", day, month - 31, year)
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
