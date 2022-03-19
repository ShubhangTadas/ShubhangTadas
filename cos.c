#include<stdio.h>
#include<math.h>
#define PI 3.142857143
int main()
{
	float x,nume,deno,sum,term,degree;
	int i;
	
	printf("Enter degree:\n");
	scanf("%f",&degree);
	
	x=degree*(PI/180);
	i=0;
	nume=1.0;
	deno=1.0;
	sum=0;
	
	do
	{
	sum=sum+term;
	i=i+2;
	nume=-nume*x*x;
	deno=deno*(i)*(i-1);
	term=nume/deno;
	}
	
	while(fabs(term)>=0.000001);
	printf("\nValule of cos (%f)= %f",degree,sum);
	printf("\n\nUsing in-built function cos(%f)=%f\n\n\n\n",degree,cos(x));
	return 0;
	}
	
