#include<bits/stdc++.h>
using namespace std ;
int check_forbiden(string s,string f)
{
   int j = s.size();
   string k=f ;
   reverse(f.begin() , f.end());
   int find=0 ;

   for(int i=0;i<l;i++)
   {
       if( (s[i]==f[0] && s[i+1]==f[1]) ||(s[i]==k[0] && s[i+1]==k[1]) )
       {
           find++ ;
       }
   }
   return find ;

}
int main()
{
    string s ;
    cin>>s ;
    string k ;
    cin>>k ;
  cout<<  check_forbiden(s,k);

}
