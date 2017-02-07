#include <omp.h> 
#include <stdio.h>
#include <stdlib.h>

static long num_steps = 10000000; long double step; // Declare static vaiables

#define NUM_THREADS 10 // Define Number of Threads

void main() 
{
	int nthreads;
	long double pi = 0.0;
	long double sum = 0.0;

	
	step = 1.0/(long double)num_steps; // Define size of step. 

	omp_set_num_threads(NUM_THREADS);

	#pragma omp parallel
	{
		int ID, num_threads; 
		long double x, y = 0; 

		ID = omp_get_thread_num();
		num_threads = omp_get_num_threads();

		if (ID == 0) { nthreads = num_threads; }

		for (long int i = ID; i < num_steps; i += num_threads)
		{
			x = (((long double)i)+0.5)*step;
			y += 4.0/(1.0 + x*x);
		}
		#pragma omp atomic

				sum += y;
			
	}
		pi = sum*step;
		printf("pi = %.25Lg \n", pi);
		

}