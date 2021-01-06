

#include<omp.h>
#include<stdio.h>
#include<stdlib.h>
#define SEED 35791246

void main()
{
	int n=0,i,count=0,t=4;
	double z,pi,x,y;
	
	printf("Enter the number of iterations used to estimate pi:");
	scanf("%d",&n);
	srand(SEED);
	double t1=omp_get_wtime();
	omp_set_num_threads(t);
	
	for(i=0; i<n; i++)
	{
		x=(double)rand()/RAND_MAX;
		y=(double)rand()/RAND_MAX;
		z=x*x+y*y;
		if(z<=1) count++;
	}
	double t2=omp_get_wtime();
	printf("Time taken:%lf",t2-t1);
	pi=(double)count/n*4;
	printf("\nNo of trails=%d\nEstimate of pi=%g\nNo of threads=%d\n",n,pi,t); } 



 


 










