#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
#define N NULL
bool check(int n)
{
   for(int i=3 ; i*i<=n;i++)
   {
         if(n%i==0)
         {
               return true ;
         }
   }
   return false ;
}
int main()
{
 int n ;
 cin>>n ;
 for(int i=1 ;i<10 ;i++)
 {
       int t=n*i+1 ;
       if(t>2 && t%2==0)
       {
             cout<<i ;
             break ;
       }
       else if(check(t))
       {
           cout<<i ;
             break ;
       }
 }
}
