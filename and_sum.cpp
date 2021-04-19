#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
int main()
{
 int n,m ;
 cin>>n>>m ;
 int a,b ;
 cin>>a>>b ;
 int ans=0 ;
 while(b>0)
 {
       ans+=a&b ;
       b<<1 ;
 }
 cout<<ans ;
}
