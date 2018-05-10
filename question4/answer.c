#include <stdio.h>
#include <math.h>

struct point{
	double x;
	double y;
};
double quad(double a, double b, double c, double x)
{
	return (a * pow(x,2)) + (b * x) + c;
}
int main()
{
	int a,b,c;
	int p = 0;
	struct point points[20];
	printf("Input you a, b, c values in this format: a b c\n");
	scanf("%d%d%d", &a, &b, &c);
	printf("%d %d %d\n", a,b,c);
	for(int i = -5; i <= 5; i++)
	{
		struct point temp = {i, quad(a,b,c,i)};
		printf("%3.2f,%3.2f\n", temp.x, temp.y);
		points[p] = temp;
		p++;
	}
	//for(int i = 0; i < 11; i++)
	//{
	//	printf("%d,%d\n", points[i].x, points[i].y);
	//}
	return 0;
}






