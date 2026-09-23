#include<stdio.h>
define SIZE 10
int stk[SIZE];
int sp=-1;
void main()
{
void push(int);
int pop(),opt,item;
do
{
printf("1.push \n 2.pop \n 3.exit \n");
printf("Your option :");
scanf("%d",&opt);
switch(opt)
{
case 1:printf("Enter item :");
      scanf("%d",&item);
      push(item);
      break;
case 2:item=pop()
       printf("Popped value="%d",item);
       break;
case 3:exit(0);
}
}
while(1);
}
void push(int x)
{
 if(sp=SIZE-1)
 {
 printf("Stack is full");
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
printf("Stack is empty");
return;
}
else
{
return stk[sp--];
}
}
} 
