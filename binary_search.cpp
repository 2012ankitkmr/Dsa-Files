#include<bits/stdc++.h>

#define MAXN 500

  int binarysearch( int a[] , int low , int high , int num )
  {

  
if(low < high)
 {
     int mid = ( high + low ) /2;

    if( a[mid] == num )
     return mid;

    else if ( a[mid] < num)
    return binarysearch(a , mid+1 , high , num);
    else return binarysearch(a , low , mid-1 ,num );
   }
return -1;
}


using namespace std;
int main()
{

int num , n;
int arr[MAXN];

cout<<"Enter the number of elements of array : ";
scanf("%d", &n );

cout<<"Enter elements of array : \n";
for(int i = 0 ; i < n ; i++)
{
cin >> arr[i];
}

cout<<"Enter number to find : ";
cin>>num;

sort( arr , arr + n );

int ans = binarysearch( arr , 0 , n-1 , num );

if( ans == -1 )
printf("Element not found \n ");
else
printf("Element found at %d location\n", ans);


  return 0;
}
