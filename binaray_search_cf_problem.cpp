#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
#define N NULL
ll n ;
ll c[100000];
ll cost(ll arr[] ,ll k)
{

      ll ans=0 ;
      for(int i=0 ;i<n ;i++)
      {
            c[i]=arr[i]+(i+1)*k ;
      }
      sort(c,c+n);
      for(int i=0 ;i<k ;i++)
      {
            ans+=c[i];
      }
      return ans ;
}
int main()
{
ll s ;
cin>>n>>s ;
ll arr[n];
for(int i=0 ; i<n;i++)
{
      cin>>arr[i];
}
ll l=0 ,r=n+1;
while(r-l>1)
{
      ll mid=(l+r)/2 ;
      if(cost(arr,mid)<=s)
            l=mid ;
      else
            r=mid ;

}
cout<<l<<" "<<cost(arr,l);

}
