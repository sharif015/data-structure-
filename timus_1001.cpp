#include<bits/stdc++.h>
using namespace std ;
#define ll long long
int main()
{
 stack<ll>s ;
 ll a ;
 while(scanf("%lld",&a)!=EOF)
 {
       s.push(a);
 }
 int k=s.size() ;
 while(k--)
 {
       ll t=s.top();

      printf("%.4lf\n",sqrt(t) );
      s.pop();
 }
 return 0 ;
}
