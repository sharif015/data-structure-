#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
int lcm(ll x,ll y)
{
  ll t=__gcd(x,y);
  return (x/t)*y ;
}
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
       int a,b,t ;
       cin>>a>>b ;
       int l=a+1,r=b-1;

       while(l<=a && b<=r){
                 t=lcm(a,b);
       if(l<=t && t<=r)
       {
          cout<<a<<" "<<b<<endl;
          break;
       }


       a++;b-- ;
       }
       //cout<<"-1"<<" " <<"-1"<<endl;
 }
}
