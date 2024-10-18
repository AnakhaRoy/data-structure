#include<stdio.h>
void main()
{
	int a[100],n,i,j,temp,b[100],c[200],k,m;
	printf("enter size of your first array :");
	scanf("%d",&n);
	printf("enter %d elements to the array :",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n entered elements are :");
	for(i=0;i<n;i++)
	{
		printf(" \n %d",a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf(" \n sorted array is :");
	for(i=0;i<n;i++)
	{
		printf("\n %d",a[i]);
	}
	//second array
	printf("\n enter size of your second array :");
	scanf("%d",&m);
	printf("\n enter %d elements to the array :",m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("\n entered elements are :");
	for(i=0;i<m;i++)
	{
		printf(" \n %d",b[i]);
	}
	for(i=0;i<m;i++)
	{
		for(j=i+1;j<m;j++)
		{
			if(b[i]>b[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	printf(" \n sorted array is :");
	for(i=0;i<m;i++)
	{
		printf("\n %d",b[i]);
	}
	//merge
	i=j=k=0;
	while(i<n&&j<m)
	{
		if(a[i]<=b[j])
		{
			c[k++]=a[i++];
		}
		else
		{
			c[k++]=b[j++];
		}
	}
	while(i<n)
	{
		c[k++]=a[i++];
		
	}
	while(j<m)
	{
		c[k++]=b[j++];
	}
	printf(" \n merged sorted array is :");
	for(k=0;k<=m+n;k++)
	{
		printf("\n %d",c[k]);
	}
}

