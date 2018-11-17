// Course:  CS213 - Programming II  - 2018
// Title:   Assignment III
// Purpose: Combination
// Author:  Saeed Muhammed



#include <iostream>

using namespace std;

int comb(int n , int k );
int main()
{
   cout<<"The value = "<< comb( 10,2);



    return 0;
}

int comb(int n , int k ){
if ( n >= k ){
  if(n==k ||k==0)
    return 1 ;
  else
    return comb ( n-1 , k-1) + comb (n-1 , k );
}
else{
   cout<<"The firs value is less than second value"<<endl;

   return 0 ;

}

}
