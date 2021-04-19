#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
int main()
{
 string s ;
 cin>>s ;
 int l=s.length();
 int sum=0 ,pos2,pos1='a';
 //zeus
 for(int i=0 ; i<l;i++)
 {



      sum+=min(abs(pos1-s[i]),26-abs(pos1-s[i]));

     pos1=s[i] ;
 }
 cout<<sum ;
}
