#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
#define N NULL

vector<int>v ;
void visor(int n)
{
   int t=sqrt(n) ;
   int s ;
   for(int i=1 ; i<=t ;i++)
   {
       if(n%i==0)
       {
         s=n/i ;
         if(s!=i)
         {
               v.push_back(i);
               v.push_back(s);
         }
         else
         {
               v.push_back(i);
         }
       }
   }
   sort(v.begin(),v.end());
   for(int i=0 ; i<v.size();i++)
      cout<<v[i]<<endl;
}
int main()
{
      int n ;
      cin>>n ;
 visor(n);
}
