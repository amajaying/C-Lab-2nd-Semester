// take 2 times in __:__  and find diff also am pm
#include <stdio.h>
int main()
{
	int h1, m1, h2, m2, h = 0, m = 0, a1, a2;
	printf("Enter the 1st time (HH:MM) with (AM =1 and PM =0): ");
	scanf("%d:%d%d", &h1, &m1, &a1);
	printf("Enter the 2nd time (HH:MM) with (AM =1 and PM =0): ");
	scanf("%d:%d%d", &h2, &m2, &a2);

	if (h2 > h1 || (h2 > h1 && m2 > m1))
	{
		printf("%d:%d %d is earlier", h1, m1);

		if (m1 < m2)
		{
			h = h2 - h1;
			m = m2 - m1;
			if (m == 60)
			{
				h++;
				m = 0;
			}
		}
		else
		{
			h = (h2 - 1) - h1;
			m = (m2 + 60) - m1;
			if (m == 60)
			{
				h++;
				m = 0;
			}
		}
	}
	else
	{
		printf("%d:%d is earlier", h2, m2);

		if (m2 < m1)
		{
			h = h1 - h2;
			m = m1 - m2;
			if (m == 60)
			{
				h++;
				m = 0;
			}
		}
		else
		{
			h = (h1 - 1) - h2;
			m = (m1 + 60) - m2;
			if (m == 60)
			{
				h++;
				m = 0;
			}
		}
	}

	printf("\nThe difference is %d hours and %d minutes", h, m);
}