#include <stdio.h>
#include "libomp/omp.h" 


// This is a hello world program operating with open MP: 
int main() 
{
	#pragma omp parallel
	{

	int ID = omp_get_thread_num(); 
	printf("Hello( %d ) \n", ID);
	printf("World( %d ) \n", ID);

	}
}
