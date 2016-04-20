#include<bits/stdc++.h>
using namespace std;
#define  MAXN 500



int main()
{
int n , a[MAXN] , temp , it ;

printf("Enter number and then the array \n" );
for( scanf("%d",&n) , it = 0 ; it < n; it++)
scanf("%d", &a[it] );

for(int i = 0 ; i < n ; i++)
{
	for(int j = 1; j < n ; j++)
	{
		if( a[j-1] > a[j] )
		{
			int temp = a[j-1];
			a[j-1] = a[j];
			a[j] = temp;
		}

	}
}
printf("The Output array is :\n" );
for(int i = 0 ; i < n; i++ )
printf("%d ",a[i]);
cout<<"\n";


return 0;
}
