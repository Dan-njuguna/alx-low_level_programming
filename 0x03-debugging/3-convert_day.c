#include "main.h"

/**
* convert_day - converts day of month to day of year, without accounting
* for leap year
* @month: month in number format
* @day: day of month
* Return: day of year
*/

int convert_day(int month, int day)
{
	switch (month)
	{
		case 2:
			day = 31 + day;
			if (month == 2 && day == 28)
				day = 30 + day;
			break;
		case 3:
			day = 59 + day;
			break;
		case 4:
			day = 89 + day;
			break;
		case 5:
			day = 119 + day;
			break;
		case 6:
			day = 150 + day;
			break;
		case 7:
			day = 180 + day;
			break;
		case 8:
			day = 211 + day;
			break;
		case 9:
			day = 242 + day;
			break;
		case 10:
			day = 272 + day;
			break;
		case 11:
			day = 303 + day;
			break;
		case 12:
			day = 333 + day;
			break;
		default:
			break;
	}
	return (day);
}
