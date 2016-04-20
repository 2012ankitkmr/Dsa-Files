#include<bits/stdc++.h>
using namespace std;
#define MAXN 500

int find_Num( int a[] , int num ,int n)
{
int res = -1;
	//  LINEAR TRAVERSAL PART
	for(int i = 0 ; i < n ; i++ )
	{
		if( a[i] == num)
		res = i;
	}

	// returns only the first occurence of the number
return res;

}
int main()
{
	int n = 20 , a[MAXN];

//INPUT ARRAY USING RANDOM FUNCTION
	for(int i = 0 ; i < n ; i++ )
	{
		a[i] = rand()%20;
	}

	int num ;
	printf("Enter number that needs to be found:\n");
	cin>>num;
	 //Number we need to find ;
	int ans = find_Num( a , num , n);

	printf("Input Array :- \n");
	for(int i = 0 ; i < n ; i++ )
	printf("%d ", a[i] );

	cout<<"\n";

	if(ans == -1)
	printf("Element not found\n");
	else
	printf("Element found at %d location \n", ans );


	return  0;

}
