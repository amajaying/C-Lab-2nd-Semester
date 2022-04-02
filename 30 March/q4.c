// take a full date dd/mm/yyyy and 1st day of that year and find the day of the given date
#include <stdio.h>
int main()
{
	int day, mon, yr;
	printf("Enter the date in day/mon/yr format : ");
	scanf("%d/%d/%d", &day, &mon, &yr);
	printf("Enter the week of the 1st jan in that year: ");
	// enter 0 for Sunday, 1 for Monday, 2 for Tuesday, 3 for Wednesday, 4 for Thursday and so on..
	int jan;
	scanf("%d", &jan);
	int nd = jan - 1;
	switch (mon)
	{
	case 2:
		nd += 3;
		break;
	case 3:
		nd = nd;
		break;
	case 4:
		nd += 3;
		break;
	case 5:
		nd += 2;
		break;
	case 6:
		nd += 3;
		break;
	case 7:
		nd += 2;
		break;
	case 8:
		nd += 3;
		break;
	case 9:
		nd += 3;
		break;
	case 10:
		nd += 2;
		break;
	case 11:
		nd += 3;
		break;
	case 12:
		nd += 2;
		break;
	}
	nd += day;
	printf("%d\n", nd);
	int res = nd % 7;
	printf("%d", res);

	switch (res)
	{
	case 0:
		printf("Sunday");
		break;

	case 1:
		printf("Monday");
		break;

	case 2:
		printf("Tuesday");
		break;

	case 3:
		printf("Wednesday");
		break;

	case 4:
		printf("Thursday");
		break;

	case 5:
		printf("Friday");
		break;

	case 6:
		printf("Saturday");
		break;
	}
	return 0;
}