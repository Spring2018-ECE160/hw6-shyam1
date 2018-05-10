#include <stdio.h>
#include <stdlib.h>
void ranges(int x[], int npts, int *max_ptr, int *min_ptr);

void ranges(int x[], int npts, int *max_ptr, int *min_ptr)
{
	int *xmin_ptr = &x[0];


	for(int i = 0; i < npts; i++)
	{
		if(x[i] < *xmin_ptr)
			xmin_ptr = &x[i];
	}
	int *xmax_ptr = &x[4];
	for(int i = 0; i < npts; i++)
	{
		if(x[i] > *xmax_ptr)
			xmax_ptr = &x[i];
	}

	*min_ptr = *xmin_ptr;
	*max_ptr = *xmax_ptr;
	printf("%d %d \n", *max_ptr, *min_ptr);

}
int main()
{
	int y[] = {1,2,3,4,5};
	int ymin = 0;
	int ymax = 0;

	int d[] = {7,6,5,4,3};
        int dmin = 0;
        int dmax = 0;

	int o[] = {3,2,6,1,7};
        int omin = 0;
        int omax = 0;

	ranges(y, 5, &ymax, &ymin);
	ranges(d, 5, &dmax, &dmin);
	ranges(o, 5, &omax, &omin);

	printf("Min: %d  Max: %d\n", ymin, ymax);
	printf("Min: %d  Max: %d\n", dmin, dmax);
	printf("Min: %d  Max: %d\n", omin, omax);
	return 0;
}


