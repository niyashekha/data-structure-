#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int stk[SIZE];
int sp=-1;
void main()
{
void push(int);
int pop(),opt,item;
void display();

do
{
printf("\n1.push \n2.pop \n3.display \n4.exit \n\n");
printf("Your option :");
scanf("%d",&opt);
switch(opt)
{
case 1:printf("Enter item :");
      scanf("%d",&item);
      push(item);
      break;
case 2:item=pop();
       if(item != -999)
       printf("Popped value=%d\n",item);
       break;
case 3:display();
       break;
case 4:exit(0);
}
}
while(1);
}
void push(int x)
{
 if(sp==SIZE-1)
 {
 printf("Stack is full\n");
 return;
 }
 else
 {
 stk[++sp]=x;
 return;
 }
}
int pop()
{
if(sp==-1)
{
printf("Stack is empty\n");
return -999;
}
else
{
return stk[sp--];
}
}
void display()
{
if(sp==-1)
printf("The stack is empty\n");
else
printf("The stack elements are: \n");
for(int i=sp;i>=0;i--)
{
printf("%d\n",stk[i]);
}
}


