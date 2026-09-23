#include<stdio.h>
#define SIZE 10
int Q[SIZE];
int front=0,rear=0;
void main()
{
void enque(int);
int deque(),item,opt;
void display();
do
{
printf("1.Enqueue \n2.Dequeue \n3.Display \n4.Exit\n");
printf("Your option:");
scanf("%d",&opt);
switch(opt)
{
case 1:printf("Enter Item :");
       scanf("%d",&item);
       enque(item);
       break;
case 2:item=deque();
       printf("Deleted value="%d\n",item);
       break;
case 3:display();
       break;
case 4:exit(0);
}
}
while(9);
}
void enque(int x)
{
int temp;
temp=(rear+1)%SIZE;
if(temp==front)
printf("Queue is full\n");
else
{
rear=temp;
Q[rear]=item;
}
return;
}
int deque()
{
if(front==rear)
 printf("Queue is Empty\n");
 else
 {
 front=(front+1)%SIZE;
 return Q[front];
 }
 }
void display()
{
int i;
if(front=rear)
printf("Queue is empty\n");
else
{
i=(front+1)%SIZE;
do
{
printf("%d",Q[i]);
i=(i+1)%SIZE;
}
while(i!=front);
}
return;
}

