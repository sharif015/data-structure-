#include<bits/stdc++.h>
using namespace std ;
vector<int>v[100];
int main()
{
   int edges,vertex ;
   cin>>vertex>>edges ;
   for(int i=1;i<=edges;i++)
   {
         int x,y ;
         cin>>x>>y ;
         v[x].push_back(y);
        // v[y].push_back(x);
   }
   for(int i=1;i<=12;i++)
   {
         cout<<i<<"->" ;
         for(auto u:v[i])
            cout<<u<< " " ;
         cout<<endl;
   }
}
