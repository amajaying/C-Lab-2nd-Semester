// take a full date dd/mm/yyyy and 1st day of that year and find the day of the given date
#include <stdio.h>
int main()
{
	int day, mon, year;
	int dd;
	int t = 0;
	int feb;
	printf("Enter the date in (dd/mm/yr) format: ");
	scanf("%d/%d/%d", &day, &mon, &year);
	printf("Enter the day of 1st Jan of that year (1 for sunday and so on): ");
	scanf("%d", &dd);

	// condition for leap year
	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
	{
		feb = 29;
	}
	else
	{
		feb = 28;
	}

	// now adding days of months
	switch (mon)
	{
	case 2:
		t = 31;
		break;
	case 3:
		t = 31 + feb;
		break;
	case 4:
		t = (31 * 2) + feb;
		break;
	case 5:
		t = (31 * 2) + feb + 30;
		break;
	case 6:
		t = (31 * 3) + feb + 30;
		break;
	case 7:
		t = (31 * 3) + feb + (30 * 2);
		break;
	case 8:
		t = (31 * 4) + feb + (30 * 2);
		break;
	case 9:
		t = (31 * 5) + feb + (30 * 2);
		break;
	case 10:
		t = (31 * 5) + feb + (30 * 3);
		break;
	case 11:
		t = (31 * 6) + feb + (30 * 3);
		break;
	case 12:
		t = (31 * 6) + feb + (30 * 4);
		break;
	}
	t = (t + day) % 7;
	t = t + dd - 1;
	if (t > 7)
		t = t - 7;
	switch (t)
	{
	case 1:
		printf("Sunday");
		break;
	case 2:
		printf("Monday");
		break;
	case 3:
		printf("Tuesday");
		break;
	case 4:
		printf("Wednesday");
		break;
	case 5:
		printf("Thursday");
		break;
	case 6:
		printf("Friday");
		break;
	case 7:
		printf("Saturday");
		break;
	}

	return 0;
}