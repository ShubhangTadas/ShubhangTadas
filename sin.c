#include<stdio.h>
#include<math.h>
#define PI 3.142857
int main()
{
	float x,nume,deno,sum,term,degree;
	int i;
	
	printf("Enter degree:\n");
	scanf("%f",&degree);
	
	x=degree*(PI/180);
	  
	nume=x;
	deno=1.0;
	sum=0;
	
	do
	{
		term=nume/deno;
		sum=sum+term;
		i=i+2;
		nume=-nume*x*x;
		deno=deno*(i)*(i-1);
	}
	
	while(fabs(term)>=0.00001);
	printf("\nValule of sin (%f)= %f",degree,sum);
	printf("\n\nUsing in-built function sin(%f)=%f\n\n\n\n",degree,sin(x));
	return 0;
	}
	
	
	
