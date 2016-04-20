#include<bits/stdc++.h>

#define MAXN 500
int inf = 0xFFFF;
int MAXSIZE = 50; //defines maximum size of the stack



struct stack{

int info[MAXN];
int top;

};

void initialize_stack(stack *S1) {
  S1->top = -1;
}

bool is_full(stack *S1)
{
  if(S1->top == MAXSIZE-1 )
  return true;
  return false;
}
bool is_empty(stack *S1)
{
  if(S1->top == -1 )
  return true;
  return false;
}

void pop(stack *S1)
{
if(is_empty(S1))
{
  printf("Stack Underflow\n");
  return;
}
printf("Item Popped\n" );

S1->top--;
}

int peep(stack *S1)
{
  if(is_empty(S1))
  {
    printf("Stack is empty\n");
    return inf;
  }
  return S1->info[S1->top];

}

void push(stack *S1 , int item)
{
if( is_full(S1) )
{
  printf("Stack Overflow!!!!!!\n");
  return;
}

S1->info[++S1->top] = item;
}

int main()
{
stack S1;
int choice , item ,a = 1,ans;
initialize_stack(&S1);
//printf("top=%d\n",S1.top );
printf("Stack Initialized...\n");
while(a == 1)
{

printf("\nEnter your choice:\n1.Reinitialize Stack\n2.Push an item\n3.Pop an item\n4.Peep\n5.Is empty\n6.Is full\n7.exit\n>>");
std::cin >> choice;
switch(choice)
{

case 1:
printf("Stack Reinitialized\n" );
initialize_stack(&S1);
break;

case 2:
printf("Enter the item\n>>" );
std::cin>>item;
push(&S1,item);
break;


case 3:
pop(&S1);
break;

case 4:
 ans = peep(&S1);
if(ans != inf)
printf("Top element is %d \n",ans );
break;

case 5:
if(is_empty(&S1))
printf("Stack is empty\n");
else
printf("Stack is not empty\n" );
break;

case 6:
if(is_full(&S1))
printf("Stack is full\n");
else
printf("Stack is not full\n" );
break;

case 7:
a = 1;
break;
default:printf("Enter a Valid Choice\n" );

}
}

  return 0;
}
