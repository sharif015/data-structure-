#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
#define N NULL
#define M 100000
int arr[M+3]={} ;
vector<int>prime ;
void sieve()
{
      for(int i=4; i<=M ; i+=2)
      {
            arr[i]=1 ;
      }
      prime.push_back(2);
      for(int i=3 ; i*i<=M ; i++)
      {
            if(arr[i]==0)
            {
                  for(int j=i*i ; j<=M; j+=i*2)
                  {
                        arr[j]=1 ;
                      //cout<<"j="<<j <<" " ;
                  }
                 //cout<<"finish" <<endl;
            }
      }
      for(int i=2 ; i<=M ; i++)
      {
            if(arr[i]==0)
           prime.push_back(i) ;
      }
}
int main()
{
sieve();
int t=prime.size();
for(int i=0 ; i<t ;i++)
{
      cout<<prime[i]<<endl;
}
}
