#include<bits/stdc++.h>
#define MAXN 50


int stack[MAXN];


int main()
{
int top1 = -1 , top2 = MAXN ,a = 1 , item , id , choice;

printf("Stacks Initialized...\n");
while(a == 1)
{

printf("\nEnter your choice:\n1.Reinitialize Stacks\n2.Push an item\n3.Pop an item\n4.Peep\n5.Is empty\n6.Is full\n7.exit\n>>");
std::cin >> choice;
switch(choice)
{

case 1:
printf("Stack Reinitialized\n" );
top1 = -1;
top2 = MAXN;
break;

case 2:
printf("Enter the Stack 1 or 2 :");
std::cin >> id;
printf("Enter the item : " );
std::cin >> item;
if(id == 1)
{
  if(top1 == top2-1)
    {
      printf("Stack Overflow!!\n" );
    }
    else
stack[++top1] = item;

}
else
{
  if(top1 == top2-1)
    {
      printf("Stack Overflow!!\n" );
    }
    else
stack[--top2] = item;
}
break;

case 3:

printf("Enter the Stack 1 or 2 :");
std::cin >> id;
if(id ==1)
{
if(top1 == -1)
printf("Stack Underflow\n" );
else
top1--;
}
else{
if (top2 == MAXN)
printf("Stack Underflow\n" );
else
top2++;
}
break;

case 4:

printf("Enter the Stack 1 or 2 :");
std::cin >> id;
if(id == 1)
{
  if(top1 == -1)
  printf("Stack is empty\n" );
  else
printf("Top element is %d \n",stack[top1] );
}

else{
  if(top2 == MAXN)
  printf("Stack is empty\n" );
  else
  printf("Top element is %d \n",stack[top2] );

}

break;

case 5:
printf("Enter the Stack 1 or 2 :");
std::cin >> id;
if(id == 1)
{
  if(top1 == -1)
printf("Stack is empty!\n");
else
printf("Stack is not empty\n" );

}
else
{
  if(top2 == MAXN)
printf("Stack is empty!\n");
else
printf("Stack is not empty\n" );

}

break;

case 6:
printf("Enter the Stack 1 or 2 :");
std::cin >> id;
  if(top1 == top2-1)
printf("Stack is empty!\n");
else
printf("Stack is not empty\n" );
break;

case 7:
a = 1;
break;
default:printf("Enter a Valid Choice\n" );

}
}



  return 0;
}
