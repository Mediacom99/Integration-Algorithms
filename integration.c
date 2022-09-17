
#include<stdio.h>
#include<stdlib.h>

//Integration from 0 to any positive real number of a general function 

double func(double x)
{
 return x - x*x*x / (6) + x*x*x*x*x / (2*3*4*5) - x*x*x*x*x*x*x / (5040) + x*x*x*x*x*x*x*x*x / (5040*8*9) - x*x*x*x*x*x*x*x*x*x*x / (5040*8*9*10);
}

double integrate(double limit, double precision)
{
	double result = 0;
	double x = 0.0000001;
	while(x < limit)
	{
		result += func(x)*precision ;
	        x += precision;	
	}

	return result;
}


int main()
{	
	double precision,limit = 0.0;
	printf("First parameter: limit of integration from zero\nSecond parameter: precision or rectangle base\nNow input parameters:\n");
	scanf("%lf %lf", &limit, &precision);
	printf("Risultato: %lf \n ",integrate(limit,precision));
	return 0;
}
