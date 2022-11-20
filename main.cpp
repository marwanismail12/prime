#include <iostream>
using namespace std;

int main()
{
 bool prime = true;
 int i,n,z;
 cout<<"Enter i:\n" <<"Enter n:";
 cin>>i>>n;
 while (i<n)
 {
  prime = true;
  if (i == 0 || i == 1)
  {
   prime = false;
  }
    for (z = 2; z <= i/2 ; z++)
  {
   if (i % z == 0 )
    {
      prime = false;
      break;
    }
  }
    if (prime)
     cout <<i<<"-" ;
       i++;
 }
  return 0;
}
