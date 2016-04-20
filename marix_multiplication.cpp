#include<bits/stdc++.h>
using namespace std;

int main()
{

int matrix1[4][4] , matrix2[4][4] , res[4][4] ,tempsum;


cout<<"Enter the first matrix:"<<endl;
for( int i = 0 ; i < 3 ; i++ )
{
  for( int j = 0 ; j < 3 ; j++)
  cin >> matrix1[i][j];

}
std::cout << "Enter the Second matrix" << std::endl;
for( int i = 0 ; i < 3 ; i++ )
{
  for( int j = 0 ; j < 3 ; j++)
  cin >> matrix2[i][j];
}



for( int i = 0 ; i < 3 ; i++ )
{
  for( int j = 0 ; j < 3 ; j++)
 {
   tempsum = 0;
   for(int k = 0 ; k < 3 ; k++ )
   {
    tempsum += matrix1[i][k] * matrix2[k][j];
   }
   res[i][j] = tempsum;
 }

}

std::cout << "The output matrix is :\n" << std::endl;
for( int i = 0 ; i < 3 ; i++ )
{
  for( int j = 0 ; j < 3 ; j++)
  cout << res[i][j]<< " ";
  cout<<"\n";

}





  return 0;

}
