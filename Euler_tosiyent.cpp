#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
#define N NULL
#define M 1000000-10
int arr[M]={} ;
vector<int>prime ;
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
int phi(int n)
{
      int ret=n ;
      for(int i=2 ; i*i<=n ;i++)
      {
            if(n%i==0)
            {

                  while(n%i==0)
                  {
                        n=n/i ;
                  }
                  ret=ret-ret/i ;
            }
      }
      if(n>1)
      {
            ret=ret-ret/n ;
      }
      return ret ;
}
int main()
{
  for(int i=2 ; i<100 ;i++)
  {
        printf("%d phi is=%d \n",i,phi(i));
  }

}
