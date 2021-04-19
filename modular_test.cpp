#include<bits/stdc++.h>
using namespace std;
#define uLL unsigned long long int
#define M 1000000007
uLL f[1006];
void fact()
{
 uLL j,res,i;
 f[0]=1;
 for(j=1;j<=1006;j++){
 f[j]=((f[j-1]%M)*(j%M))%M;
 }
}
uLL modular_inverse(uLL a,uLL b)
{
 uLL ret;
 if(b==0)
 return 1;
 if(b%2==0)
 {
 ret=modular_inverse(a,b/2);
 return ((ret%M)*(ret%M))%M;
 }
 else
      return ((a%M)*(modular_inverse(a,b-1)%M))%M;
}
int main()
{
 int t,n,r,k;
 uLL a,b,c,temp,x,y,q;
 fact();
 for(int i=0 ;i<1000 ;i++)cout<<f[i]<<endl;
 /*scanf("%d",&t);
 for(int i=1; i<=t; i++)
 {
 scanf("%d%d",&n,&r);
 k=n-r;
 a= f[n];
 y=modular_inverse(n+1,M-2);
 x=modular_inverse(f[r],M-2);
 q=((y%M)*(x%M))%M;
 temp=((a%M)*(q%M))%M;
 printf("Case %d: %llu\n",i,temp);*/
 }

