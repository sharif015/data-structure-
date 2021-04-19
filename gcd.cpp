#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
#define N NULL
ll gcd(ll a,ll b)
{
 if(b==0)
      {
            return a ;
      }
      else
      {
            return gcd(b,a%b);
      }
}
ll lcm(ll arr[],ll n)
{
      ll ans=arr[0];
      for(ll i=1 ; i<n; i++){
      ans=((ans*arr[i])/(gcd(arr[i],ans)));


      }
      return ans ;
}
int main()
{
ll arr[1000];
ll n ;
cin>>n ;

for(ll i=0 ; i<n ; i++)
{
    arr[i]=i+1  ;
}
cout<<lcm(arr,n);

}
