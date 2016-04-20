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
int cnt , item ;

struct llnode *newnode ,*ptr;

printf("Enter Node to be created :");

cin >> cnt;

while( cnt > 0)
{
	printf("Enter the info : ");
	cin >> item;

  // Creating a new node
	newnode = (struct llnode*)malloc(sizeof(struct llnode));
	newnode -> info = item;
	newnode->next = NULL;


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



int main(){

	create();
	printf("linklist is :\n");
  display();
	return 0;
}
