

#include <time.h>
#include <stdio.h>

/*
struct my_tm {
		long int tm_year;       // year 
        int tm_sec;         	// seconds 
        int tm_min;         	// minutes 
        int tm_hour;        	// hours 
        int tm_mday;        	// day of the month 
        int tm_mon;         // month     
        int tm_wday;        // day of the week 
    };
    */

int main(void)
{
	//FILE *out;
	//CSV = fopen(out, "out.csv");

	time_t t;
	long int t1;
	double t2;

	for(unsigned long int i = 0; i < 500; i++)
	{
	time( &t);
	printf("%ld \t", t);
	t1 = t;
	printf("%ld \t", t1);
	t = 1;
	t2 = t1;
	printf("%f \n", t2);

	for(unsigned long int i = 0; i < 5000000; i++)
	{
		// SPIN		
	}
	}

	/*
	struct my_tm timenow;
	time_t mytime;
	char *buff;
	mytime = time(NULL);
	printf("%s \n", ctime(&mytime));

	buff = malloc(sizeof(ctime(&mytime)));
	buff  = ctime(&mytime);
	printf("Mytime contains");
	printf("Buff contains: ");
	printf("%c\n", buff[0]);
	
	sscanf(buff,"%d %d %d %d:%d:%d %ld\n", timenow.tm_wday, timenow.tm_mon, timenow.tm_mday, timenow.tm_hour, timenow.tm_min, timenow.tm_sec, timenow.tm_year);
	printf("%d \n", timenow.tm_wday);
	printf("%d \n", timenow.tm_mon);
	printf("%d \n", timenow.tm_mday);
	printf("%d \n", timenow.tm_hour);
	printf("%d \n", timenow.tm_min);
	printf("%d \n", timenow.tm_sec);
	printf("%ld \n",timenow.tm_year);
	*/

	return 0;
}