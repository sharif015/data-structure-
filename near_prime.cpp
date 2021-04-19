#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
#define N NULL

int main()
{
 int t,n ;
 cin>>t ;
 while(t--)
 {
    cin>>n ;
    if(n<=30)
    {
      cout<<"NO"<<endl;
    }
    else
    {
          cout<<"YES"<<endl;
          if( !(n==36 || n==40 || n==44)){
          cout<<6<<" " <<10<<" "<<14<<" " ;
          cout<<n-30 <<endl;
          }
          else
          {
                cout<<6<<" " <<10<<" "<<15<<" " ;
                cout<<n-31 <<endl;

          }
    }
 }
}
