#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
#define N NULL
char  adjmat[20][20];
vector<int>v[10];
int main()
{
 int n ;
 cin>>n ;
 for(int i=1;i<=n ;i++)
 {
       int t,k ;
       cin>>t>>k;
   v[t].push_back(k);
   v[k].push_back(t);
 }
for(int i=1;i<=n ;i++){
            cout<<i<< " :" ;
      for(auto u :v[i])
cout<<u<< ' ' ;
cout<<endl;
}

}
