#include <stdio.h>
#include <conio.h>
#define max 100
int queue[max];
int front=-1,rear=-1;
void Insert_Element();
void Delete_Element();
void Display_Queue();
void Empty_Queue();

int main(void) 
{
	int choice;
	printf("--------------------------Enter the choice u want-------------------------\n");
	do{
		printf("\n\n 1.Insert an element");
        printf("\n 2.Delete an element");
        printf("\n 3.Display queue");
        printf("\n 4.Empty queue");
        printf("\n 5.Exit");
        printf("\n Enter your choice: ");
	    scanf("%d",&choice);
	    switch(choice)
		{
	    	case 1: Insert_Element();
            break;
            case 2: Delete_Element();
            break;
            case 3: Display_Queue();
            break;
            case 4: Empty_Queue();
            break;
            case 5:
            return 0;
	    	
	    }
		
	}while(choice!=5);
    return 0;
}
void Insert_Element()
{
	int n;
	if(rear<max-1)
	{
		if(front==-1)                                         
		front=0;
		printf("Entre the Element to inserted in queue\n");
		scanf("%d",&n);
		queue[++rear]=n;
	}
	else
	printf("Queue is overflow\n");
	
}
void Delete_Element(){
	int n;                                           
	if(front==-1 || front>rear){                        
		printf("Queue Underflow\n");               
	}                                                   
	else                                                
	{                                                   
		n=queue[front++];                  
		printf("The element deleted :- %d\n",n);
	}
}
void Display_Queue()
{
	int i;
	if(front==-1 || front>rear)
	{
		printf("No element to be displayed\n");
	}
	else{
		printf("The Number of element in Queue\n");
		for(i=front;i<=rear;i++){
			printf("Element at %d is %d \n",i,queue[i]);
		}
	}
}
void Empty_Queue()
{
front = -1;
rear = -1;
printf("\n New Queue created successfully.\n");
}