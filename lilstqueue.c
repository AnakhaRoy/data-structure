#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
struct node*front=NULL;
struct node*rear=NULL;

void enqueue(int num)
{
	struct node*ptr;
	ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=num;
	ptr->next=NULL;
	if((front==NULL)&&(rear==NULL))
	{
		front=rear=ptr;
	}
	else
	{
		rear->next=ptr;
		rear=ptr;
	}
	printf("\ninserted successfully\n");
}
void dequeue()
{
	if(front==NULL)
	{
		printf("\nUNDERFLOW\n");
		return;
	}
	else
	{
	struct node*temp=front;
	int temp_data=front->data;
	front=front->next;
	free(temp);
	printf("\npoped element is%d\t",temp_data);
	}
}	
void display()
{
	struct node*temp;
	if((front==NULL)&&(rear==NULL))
	{
		printf("\nQueue is empty");
	}
	else
	{
		printf("\n queue elements are :\t");
		temp=front;
		while(temp)
		{
			printf("\t %d",temp->data);
			temp=temp->next;
		}

}
} 
 void main()
 {
 	int num,ch;
 	while(1)
 	{
 		printf("\nSelect any operation\n1.push\n2.pop\n3.display\n4.exit\t");
 		scanf("\t%d",&ch);
 		switch(ch)
 		{
 			case 1:
 				printf("\nEnter number to insert :\t");
 				scanf("\t%d",&num);
 				enqueue(num);
 				break;
 			case 2:
 				dequeue();
 				break;
 			case 3:
 				display();
 				break;
 			case 4:
 				exit(0);
 				break;
 			default:
 				printf("\nINVALID SYNTAX\n");
 		}
 	}
 	
 }
 					
 		
 	
