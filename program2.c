#include<stdio.h>
void main()
{
	int stack[50],top=-1,a,ch,i,d,z,size;
	void push(int a)
	{
		if(top==size-1)
		{
			printf("\nstack is overflow!!!!!!");
		}
		else
		{
			top++;
			stack[top]=a;
			printf("succecfully pushed !");
		}
	}
	void pop()
	{
		if(top==-1)
		{
			printf("stack underflow");
		}
		else
		{
			d=stack[top];
			top--;
			printf("\n poped value is %d",d);
			
		}
	}
	void display()
	{
		if(top==-1)
		{
			printf("stack empty \n");
		}
		else
		{
			printf("stack elements are:\n");
			for(i=0;i<=top;i++)
			{
		 		printf("\n %d",stack[i]);
		 	}
		}
	}
	printf("enter the size of stack\n");
	scanf("%d",&size);
	while(z=1)
	{
		printf("\n \n select any option : \n1.push \n2.pop \n3.display\n4.break\n \n ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\n enter the element to push \n");
				scanf("%d",&a);
				push(a);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				break;
			default:
				printf("invalid choice");
				break;
		}
	
		
	}
	
	
}
		
	
