#include<bits/stdc++.h>

#define MAXN 500


int queue[MAXN];

int main()
{
int front = 1 ,rear = 0 , choice , item ,a = 1;

printf("Queue initialized..\n");
while(a == 1)
{

printf("\nEnter your choice:\n1.Reinitialize Queue\n2.Push an item\n3.Pop an item\n4.front element\n5.last element\n6.Is empty\n7.Is full\n8.exit\n>>");
std::cin >> choice;
switch(choice)
{

case 1:
printf("Queue Reinitialized\n" );
front  = 1; rear = 0;
break;

case 2:
printf("Enter the item\n>>" );
std::cin>>item;
if(rear == MAXN-1)
{
  printf("Queue Overflow\n");
}
else
queue[++rear] = item;
break;


case 3:
if(rear<front )
{
    printf("Queue Underflow\n");
}
else
front++;
break;

case 4:
if(rear<front )
{
    printf("Queue is empty\n");
}
else
printf("Front element is %d : ",queue[front]);
break;

case 5:
if(rear<front )
{
    printf("Queue is empty\n");
}
else
printf("Rear element is %d : ",queue[rear]);
break;


case 6:
if(rear<front )
{
    printf("Queue is empty\n");
}
else
printf("Queue is not empty");
break;

case 7:
if(rear == MAXN-1)
{
  printf("Queue is full\n");
}
else
printf("Queue is not full");

break;
case 8:
a = 1;
break;
default:printf("Enter a Valid Choice\n" );

}
}

  return  0;
}
