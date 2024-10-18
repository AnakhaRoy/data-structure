
#include<stdio.h>
void main()
{
	int q[100],size,rear=-1,front=-1,value,ch,i,z=1,val;
	void enqueue()
	{
		if(rear==size-1)
		{
			printf("\nQueue overflow");
		}
		else if(front==-1&&rear==-1)
		{
			front=0;
			rear=0;
			printf("\nenter the value to insert\t");
			scanf("%d",&value);
			q[rear]=value;
			printf("\n%d is inserted",q[rear]);
		}
		else
		{
			rear++;
			printf("\nenter the value to insert\t");
			scanf("%d",&value);
			q[rear]=value;
			printf("\t\n\t%d is inserted\n",q[rear]);
		}
	}
	void dequeue() 
	{
		if(front==-1&&rear==-1)
		{
			printf("\nqueue is empty");
		}
		else if(front==rear) 
		{
			val=q[front];
			printf("\ndeleted value is%d",val);
			front++;
			//rear=-1;
		}
		else
		{
			val=q[front];
			printf("\ndeleted value is%d",val);
			front++;
		}
	}
	void display()
	{
		if(front==-1&&rear==-1)
		{
			printf("\nqueue is empty");
		}
		else
		{
			printf("\n queue elements are\n");
			for(i=front;i<=rear;i++)
			{
				printf("\n%d",q[i]);
			}
		}
	}
	printf("\nenter the size of queue\t");
	scanf("%d",&size);
	while(z=1)
	{
		printf("\nselect any option:\n1.insert\n2.delete\n3.display\t");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			default:
				printf("\ninvalid choice");
		}
	}
}	
	
		
	
			
			
