#include<bits/stdc++.h>

#define MAXN 500

namespace ank{
  int binary_search( int a[] , int low , int high , int num )
  {
if(low <= high)
 {
     int mid = ( high + low ) >> 1;

    if( a[mid] == num )
    {
      return

    }


  }
}

}


using namespace std;
int main()
{

int num;
vector< int > arr(MAXN,0);
cout<<"Enter the number of elements of array : ";
scanf("%d",&n);

cout<<"Enter elements of array:\n";

for(int i = 0 ; i < n ; i++)
{
cin >> arr[i];
}
cout<<"Enter number to find : ";
cin>>num;
sort( arr.begin() , arr.end() );
int ans = ank::binary_search(arr,0,n-1,num);

  return 0;
}
