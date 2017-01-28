#include <stdio.h>

float absolute(float a)
{
	if (a >= 0.0)
		return a;
	else
		return a * -1.0;
}

int main()
{
	double sign = 1.0;
	double piold = 1.0;
	double pi = 0.0;
	int i = 0;
	//while (absolute(pi - piold) > )
	#pragma omp parallel for
	while (i < 10000000)
	{
		piold = pi;
		pi += sign/(2 * i + 1);
		sign = -sign;
		i++;
	}
	pi = 4 * pi;
	printf("Pi = %f\n", pi);
	return 0;
}