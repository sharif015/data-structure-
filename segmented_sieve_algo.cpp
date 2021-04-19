#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
#define N NULL
#define M 10000000
vector<int>prime ;
ll arr[M]={} ;
void sieve()
{
      for(ll i=4 ; i<=M ; i+=2)
      {
            arr[i]=1 ;
      }
      prime.push_back(2) ;
      for(ll i=3 ;i<=M ;i++)
      {
            if(arr[i]==0)
            {
                  for(ll j=i*i ; j<=M ;j+=i*2)
                  {
                        arr[j]=1 ;
                  }
            }
      }
      for(ll i=3 ; i<=M ; i++)
      {
            if(arr[i]==0)
            {
                  prime.push_back(i);
            }
      }
}
void segment_sieve(ll L,ll R)
{
  int mark[R-L+1]={} ;
  if(L==1)
      mark[0]=1;
      for(ll i=0 ; prime[i]*prime[i]<=R ;i++)
      {
            int cprime=prime[i];
            int base=cprime*cprime ;
            if(base<L)
            {
             base=((L+cprime-1)/cprime)*cprime ;
            }
            for(int i=base ; i<=R ; i+=cprime)
            {
                  mark[i-L]=1 ;
            }
      }
      for(int i=0 ; i<=R-L;i++)
      {
            if(mark[i]==0)
                  cout<<L+i<<endl;
      }

}
int prime_factor(int n)
{
      int t=sqrt(n) ;
      int sum=1 ;
      for(int i=0 ; prime[i]<=t ; i++)
      {
            if(n%prime[i]==0)
            {
                  int cnt=1 ;
                  while(n%prime[i]==0)
                  {
                        n=n/prime[i];
                        cnt++ ;
                  }
                  if(prime[i]==2)
                  {


                        sum=1;
                  }
                  else
                  {
                        int tmp=0 ;
                        for(int j=0 ; j<cnt ; j++)
                        {
                              tmp+=pow(prime[i],j);
                        }
                        sum*=tmp ;
                  }
            }

      }
      if(n>1)
      {
        sum*=(n+1);
      }
      return sum ;
}

int main()
{
 sieve();
 int mx=0 ;
 for(int i=1 ; i<10000 ; i++){
 cout<<"i->"<<i<<"->"<<prime_factor(i)<<" " <<endl;
 if(prime_factor(i)>mx)
 {
       mx=prime_factor(i);
 }
 }
 cout<<"mx="<<mx ;

}
