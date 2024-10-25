#include<stdio.h>
#include<stdlib.h>
#define N 10
void main()
{
	int u[N]={1,2,3,4,5,6,7,8,9,10};
	int a[4]={2,4,6,8};
	int b[5]={1,3,4,6,9};
	int i,j,k=0,flag;
	int sa[N]={0},sb[N]={0},us[N]={0},es[N]={0},ds[N]={0},c[N]={0},d[N]={0};
	for(i=0;i<N;i++)
	{
		us[i]=1;
	}
	printf(" super set is \n");
	for(i=0;i<N;i++)
	{
		printf("%d\t",u[i]);
	}
	printf("\nBitstring \n");
	for(i=0;i<N;i++)
	{
		printf("%d\t",us[i]);
	}
	printf("\nfirst bitstring is\n");
	for(i=0;i<4;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;i<N;i++)
	{
		flag=0;
		for(j=0;j<4;j++)
		{
			if(a[j]==u[i])
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			sa[i]=1;
		}
		else
		{
			sa[i]=0;
		}
	}
	printf("\nbitstring of first sub set is\n");
	for(i=0;i<N;i++)
	{
		printf("%d\t",sa[i]);
	}
	//second
	printf("\nsecond sub set is\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",b[i]);
	}
	for(i=0;i<N;i++)
	{
		flag=0;
		for(j=0;j<5;j++)
		{
			if(b[j]==u[i])
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			sb[i]=1;
		}
		else
		{
			sb[i]=0;
		}
	}
	printf("\nbitstring of second substring is \n");
	for(i=0;i<N;i++)
	{
		printf("%d\t",sb[i]);
	}
	//union
	for(i=0;i<N;i++)
	{
		if(sa[i]==1||sb[i]==1)
		{
			c[i]=1;
		}
		else
		{
			c[i]=0;
		}
	}
	printf("\nunion bit string is\n");
	for(i=0;i<N;i++)
	{
		 printf("%d\t", c[i]);
   	 }
   	 printf("\nunion number set\n");
   	 for(i=0;i<N;i++)
   	 {
   	 	if(c[i]==1)
   	 	{
   	 		es[k]=u[i];
   	 		printf("%d\t",es[k]);
   	 		k++;
   	 	}
   	 }
   	//intersection
   	for(i=0;i<N;i++)
   	{
   		if(sa[i]==1 && sb[i]==1)
   		{
   			ds[i]=1;
   		}
   		else
   		{
   			ds[i]=0;
   		}
   	}
   	printf("\ninstersection bit set\n");
   	for(i=0;i<N;i++)
   	{
   		printf("%d\t",ds[i]);
   	}
   	printf("\n intersection number set\n");
   	for(i=0;i<N;i++)
   	{
   		if(ds[i]==1)
   		{
   			d[k]=u[i];
   			printf("%d\t",d[k]);
   			k++;
   		}
   	}
   	printf("\n");
   	

	
}
 
 
 
  


			


	
