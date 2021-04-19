#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
#define N NULL
int mod(int n,int m)
{
      int ans=1 ;
      for(int i=1 ;i<=n;i++)
      {
        ans=((ans%m)*(i%m))%m ;
      }
      return ans ;
}
int main()
{
cout<<mod(10,679);
}
