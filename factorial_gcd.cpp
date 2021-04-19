#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
#define N NULL

int main()
{
      ll t=1;
      ll a,b ;cin>>a>>b ;
      int k=min(a,b);

 for(int i=2;i<=k;i++)
 {
       t*=i ;
 }
 cout<<t ;
}
