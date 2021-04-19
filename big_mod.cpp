#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
#define N NULL

int main()
{
     int ans=1 ;
 for(int i=1 ;i<=10 ;i++)
 {
        ans+=floor(log(i));
 }
 cout<<ans ;
}

