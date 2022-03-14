#include<stdio.h>
int n,o=1,front=-1,rear=-1,a[10];
void EnQ(){
	if(front==0 && rear==(n-1))
	{
	  printf("Overflow\n");
	}
	else
	{
	  if(front==-1 && rear==-1)
	  {
	    front=rear=0;
	  }
	  else if(front!=0 && rear==(n-1))
	  {
	    rear=0;
	  }
	  else
	  {	
	    rear++;
	  }
	  printf("Enter Data\n");
	  scanf("%d",&a[rear]);
	}	
}
void DeQ(){
	if(front==-1)
	{
	  printf("Undefrlow\n");
	}
	else
	{
	  printf("Deleted element - %d\n",a[front]);
	  if(front==rear)
	  {
		front=rear=1;
	  }
	  else if(front==(n-1))
	  {
		front=0;
	  }
	  else
	  {
		front++;
	  }
	}
	
}
void Display(){
	printf("Queue : \n");
	if(front<rear)
	{
	  for(int i=front;i<=rear;i++)
	  {
		printf("%d\n",a[i]);
	  } 
	}
	else
	{
	  if(rear<front)
	  {
	    for( int i=0;i<=rear;i++)
	    {
		printf("%d\n",a[i]);  
	    }
	  }
	    for(int i=front;i<n;i++)
	    {
		printf("%d\n",a[i]);
	    }
	  }
}
void main(){
	printf("Enter the number of elements in the Queue\n");
	scanf("%d",&n);
	printf("\n1.Enqueue\n2.Dequeue\n3.Display\n");
	while(o!=0){
		printf("\nEnter any option ( Enter 0 to end )\n");
		scanf("%d",&o);
		switch(o){
			case 1 : EnQ();
			break;
			case 2 : DeQ();
			break;
			case 3 : Display();
			break;
		}
	}
}
