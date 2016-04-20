#include<bits/stdc++.h>
using namespace std;
#define N 500

int main()
{
	int a[N+1][N+1];
	int size = 5;
	for(int i = 0 ; i < size ;i++ )
	{
	for(int j = 0; j < size ; j++ )
	{
		if(j > i)
		continue;
		else
		a[i][j] = rand()%1000 + 1;
	}
	}

for(int i = 0 ; i < size ;i++)
{
	for(int j =0; j < size ; j++)
	{
		printf("%4d ", a[i][j] );
	}
	printf("\n");
}
	
return  0;
}
