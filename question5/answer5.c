#include <stdio.h>
#include <math.h>

struct storm{
	int month;
	int day;
	int year;
	int inches;
};
double avgSnow(struct storm po[])
{
	double total = 0;
	for(int i = 0; i < 6; i++)
	{
		total += po[i].inches;
	}
	return total/6; 
}

int main()
{
	int total = 0;
	struct storm lol[] = {
		1,2,1999,5,
		2,3,2000,7,
		6,13,2013,10,
		5,10,1994,12,
		8,18,2002,5,
		6,4,1999,9
	};
	printf("Average inches: %3.2f\n", avgSnow(lol));
	return 0;

	
}





