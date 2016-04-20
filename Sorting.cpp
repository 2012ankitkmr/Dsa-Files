#include<bits/stdc++.h>
using namespace std;
#define  MAXN 500


void swap(int *a,int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{ 
int n , a[MAXN] , temp , it ;

for( scanf("%d",&n) , it = 0 ; it < n; it++)
scanf("%d", &a[it] );

for(int i = 0 ; i < n ; i++)
{
	for(int j = 1; j < n ; j++)
	{
		if( a[j-1] > a[j] )
		{
			swap( &a[j-1] , &a[j]);
		}
		
	}
}
for(int i = 0 ; i < n; i++ )
printf("%d ",a[i]);
cout<<"\n"; 
	
	
return 0;
}
