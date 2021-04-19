#include<bits/stdc++.h>
using namespace std ;
int main()
{
 int l,z=0,n=0 ;
 cin>>l ;
 string s ;
 cin>>s ;
 for(int i=0 ;i<l;i++)
 {
       if(s[i]=='z')
       {
             z++ ;
       }
       if(s[i]=='n')
       {
             n++ ;
       }
 }
for(int i=0;i<n;i++) cout<<'1'<<" " ;
for(int i=0;i<z;i++)cout<<'0'<<" " ;
}
