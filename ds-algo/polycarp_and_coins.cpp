#include<bits/stdc++.h>
using namespace std ;
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
  long long int  n ;
  cin>>n ;
  int reminder=n%3 ;
  long long int k=n-reminder ;
  k=k/3 ;
  if((k+2*(k+reminder))==n)
  {
  cout<<k<<" "<<k+reminder<<endl ;
  }
  else
  {
  if(reminder==2)
  {
    if(k+2*(k+1)==n)
    {
    cout<<k<<" "<<k+1<<endl ;
    }

  }

else
  cout<<k+reminder<<" "<<k<<endl ;




}





}
}
