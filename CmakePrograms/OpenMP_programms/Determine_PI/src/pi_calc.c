#include <omp.h> 
#include <stdio.h>
#include <stdlib.h>

static long num_steps = 1000000000; long double step; // Declare static vaiables

#define NUM_THREADS 1000 // Define Number of Threads

void main() 
{
	int nthreads;
	long double pi = 0.0;
	long double *sum;

	sum = calloc(NUM_THREADS, sizeof(long double)); // Clear memory to store result in. 
	step = 1.0/(long double)num_steps; // Define size of step. 

	omp_set_num_threads(NUM_THREADS);

	#pragma omp parallel
	{
		int ID, num_threads; 
		long double x; 

		ID = omp_get_thread_num();
		num_threads = omp_get_num_threads();

		if (ID == 0) { nthreads = num_threads; }

		for (long int i = ID; i < num_steps; i += num_threads)
		{
			x = (((long double)i)+0.5)*step;
			sum[ID] += 4.0/(1.0 + x*x);
		}
		//printf("sum = %.17Lg \t thread ID = %li \n", sum[ID]*step, ID);
	}

		for (int i = 0; i < nthreads; i++)
		{
			pi += sum[i]*step;
		}
		printf("pi = %.25Lg \n", pi);
		free(sum);

}