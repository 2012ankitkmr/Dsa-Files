#include<bits/stdc++.h>
using namespace std;



struct llnode
{
	int info;
	struct llnode*next;
};


struct llnode*head = NULL;



void create()
{
int cnt = 6 , item ;

struct llnode *newnode ,*ptr;

while( cnt > 0)
{
  // Creating a new node
	newnode = (struct llnode*)malloc(sizeof(struct llnode));
	newnode -> info = cnt;
	newnode -> next = NULL;


	if(head == NULL)
	head = newnode;
	else
	{
		ptr = ( struct llnode*)malloc(sizeof(struct llnode));
		ptr = head;
	while( ptr -> next != NULL)
	ptr = ptr -> next;
	ptr -> next = newnode;
}
cnt--;
	}
}

void display()
{
	struct llnode *ptr;
	ptr = head;
	while(ptr != NULL)
	{

		printf("%d ",ptr->info);
		ptr = ptr->next;
	}
	printf("\n");
}



void delnode()
{

	int n;
printf("Enter the node to be deleted : ");
cin >> n;
struct llnode*ptr = head,*temp;

if(n == 1)
{
	head = ptr->next;
free(ptr);
printf("After Deletion : \n");
display();
return ;
}

n-=2;


while( (ptr != NULL )&& (n--))
{
ptr = ptr ->next;
}
temp = ptr->next->next;
ptr->next = temp;
ptr = ptr -> next;

//free(ptr);

printf("After Deletion : \n");
display();
}



int main(){

	create();
	printf("linklist is :\n");
  display();
delnode();

	return 0;
}
