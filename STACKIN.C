#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *ptr;
}*top,*temp,*top1;
int topelement();
void push(int data);
void pop();
void empty();
void display();
void  stackcount();
void destroy();
void create();
int count=0;
void main()
{
int ch,no,e;
clrscr();
printf("\n1.push\n 2.pop\n3.top \n 4.empty \n5.exit \n6.display\n7.stackcount\n8.destroy\n");
create();
while(1)
{
printf("enter the choice:\n");
scanf("%d",&ch);
switch(ch)
{
case1:printf("enter the data \n");
scanf("%d",&no);
    push(no);
    break;
case2:pop();
      break;
case3:if(top==NULL)
printf("the stack is empty\n");
else
{
e=topelement();
printf("the top element in the stack is %d\n",e);
}
break;
case 4:empty();
break;
case 5:exit(0);
case 6:display();
break;
case 7:stackcount();
break;
case 8:destroy();
break;
default:printf("enter choice is invalid\n");
break;

}
}
}
void create()
{
top=NULL;
}
int topelement()
{
return(top->info);
}
void push(int data)
{
if(top==NULL)
{
top=(struct node*)malloc(sizeof(struct node));
top->ptr=NULL;
top->info=data;
}
else
{
temp=(struct node*)malloc(sizeof(struct node));
temp->ptr=top;
temp->info=data;
top=temp;
}
count++;
}
void pop()
{
top1=top;
if(top1==NULL)
{
printf("error:trying to pop from empty stack \n");
return;

}
 else
 {
 top1=top1->ptr;
 printf("popped value=%d\n ",top->info);
 free(top);
 top=top1;
 count--;
 }}
 void stackcount ()
 {
 printf("the number of elements in stack =%d\n",count);
}
void display ()
{
top1=top;
if (top1==NULL){
printf("stack is emepty !!\n");
return;
}
printf("the stack elements are:\n");
while(top1!=NULL){
printf("%d\n",top1->info);
top1=top1->ptr;
}}
void empty(){
if(top==NULL)
printf("stack is empty\n");
else
printf("stack is not empty and contain %d elements \n",count);
}
void destroy()
{
top1=top;
while(top1!=NULL)
{
top1=top->ptr;
free(top);
top=top1;
}

printf("all stack  elements destroyed\n");
count=0;
}