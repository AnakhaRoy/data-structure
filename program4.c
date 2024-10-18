#include<stdio.h>
void main()
{
	int front=-1,rear=-1,q[100],size,i,ch,z=1,elm,val;
	
	void enqueue(int val)
	{
		if((front==0&&rear==size-1)||((rear+1)%size==front))
		{
			printf("\n queue overflow \n");
		}
		else if(front==-1)
		{
				front=rear=0;
				q[rear]=val;
				printf("\n %d is inserted to the queue",q[rear]);
		}
		else if(rear==size-1&&front!=0)
		{
			rear=0;
			q[rear]=val;
			printf("\n %d is inserted to the queue",q[rear]);
		}
		else
		{
			rear++;
			q[rear]=val;
			printf("\n %d is inserted to the queue",q[rear]);
		}
	}
	void dequeue()
	{
	
		if(front==-1)
		{
			printf("\n queue is empty");
		}
		elm=q[front];
		printf("deleted value is%d",elm);
		front--;
		if(front==rear)
		{
			front--;
			rear--;
		}
		else if(front==size-1)
		{
			front=0;
		}
		//else
	//	{
	//		front++;
	//	}
	}
	void display()
	{
		if(front==-1)
		{
			printf("queue is empty");
		}
		printf(" elements are:");
		if(rear>=front)
		{
			for(i=front;i<=rear;i++)
			{
				printf("%d",q[i]);
			}
		}
		else
		{
			for(i=front;i<size;i++)
			{
				printf("%d",q[i]);
			}
			for(i=0;i<=rear;i++)
			{
				printf("%d",q[i]);
			}
		}
				
	}
	printf("\n enter the size of queue ");
	scanf("\n\t%d",&size);
	while(z=1)
	{
		printf("\n select any option:\t\n1.insert\t\n2.delete\t\n3.display\n");
		scanf("\n%d",&ch);;
		switch(ch)
		{
			case 1:
				printf("\n enter the element to insert");
				scanf("\t%d",&val);
				enqueue(val);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			default:
				printf("\n invalid choice");
		}
	}
}
				
