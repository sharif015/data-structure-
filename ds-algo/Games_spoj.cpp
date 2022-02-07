#include<bits/stdc++.h>
using namespace std ;
int main()
{
      int t ;
      cin>>t ;
      while(t--)
      {
      string s;
      cin>>s ;
      bool flag=false ;
      int denominator=1 ;
      int number=0;
      for(int i=0;i<s.size();i++)
      {
           if(flag)
           denominator=denominator*10 ;
           if(s[i]=='.')
           {
           flag=true ;
           continue ;
           }
           number=number*10+(s[i]-'0');


      }
      int gcd=__gcd(number,denominator);
      cout<<denominator/gcd<<endl ;
      }
}
