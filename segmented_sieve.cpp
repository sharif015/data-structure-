#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
#define N NULL
#define M 1000000-10
int arr[M]={} ;
int cc=0 ;
vector<int>prime ;
map<int ,int>m ;
map<int,int>:: iterator it;
int lis[128];
int listsize ;

void sieve()
{
      for(int i=4 ;i<=M ; i+=2)
      {
            arr[i]=1 ;
      }
      prime.push_back(2);
      for(int i=3 ;i*i<=M ;i++)
      {
            if(arr[i]==0)
            {
                  for(int j=i*i ; j<=M ; j+=i*2)
                  {
                        arr[j]=1 ;

                  }
            }


      }
      for(int i=3 ; i<=M ; i++)
      {
        if(arr[i]==0)
        {
              prime.push_back(i) ;
        }
      }


}
void segmented_sieve(int l,int r)
{
      int pri[r-l+1]={};
      for(int i=0 ; i<=r-l+1 ; i++)
      {
            pri[i]=1 ;
      }
      if(l==1)
      {
            pri[0]=0 ;
      }
      for(int i=0;prime[i]*prime[i]<=r ; i++)
      {
            int curprime=prime[i];
            int base=curprime*curprime ;
            if(base<l)
            {
                  base=((l+curprime-1)/curprime)*curprime ;
            }
            for(int j=base ; j<=r ; j+=curprime)
                  pri[j-l]=0 ;
      }
      for(int i=0 ;i<=r-l ;i++)
      {

            if(pri[i]==1)
            {
                   cc++ ;
                  cout<<l+i<<endl ;

            }

      }
      cout<<" cc=" <<cc-1 ;
      cc=0 ;
      cout<<endl;
}
int prime_factor(int n)
{
      int t=sqrt(n);
      listsize=0 ;
      int div=1 ;

      for(int i=0 ; prime[i]<=n ; i++)
      {
            if(n%prime[i]==0)
            {
                     int cnt=1 ;
                  while(n%prime[i]==0)
                  {
                        n=n/prime[i] ;
                        m[prime[i]]++ ;
                        lis[listsize]=prime[i];
                        listsize++ ;
                        cnt++ ;
                        //cout<<prime[i]<<" " ;
                  }
                div*=(pow(prime[i],cnt)-1)/(prime[i]-1);
            }

      }
       if(n>1)
            {
                  //cout<<n ;
                  m[n]=1 ;
                  lis[listsize]=n;
                        listsize++ ;
            }
            return div ;
}
int main()
{
sieve();
cout<<prime_factor(720);


}







