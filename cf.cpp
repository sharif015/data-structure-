#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
int main()
{
      int t ;
      cin>>t ;
      int arr[200];
      set<int>s ;
      map<int ,int>m ;
      while(t--)
      {
          int n ;
          cin>>n ;
          for(int i=1 ; i<=n;i++)
          {
                int a ;
                cin>>a ;
                 m[a]++ ;
                s.insert(a);


          }
          for(auto u:s)
            cout<<u<< " ";
          for(int i=1 ; i<=n ;i++)
          {
                for(auto u:m)
                {
                      int k=u.second ;
                      while(k>1){
                      cout<<u.first<<' ' ;
                      k--;
                      }

                }

          }
          s.clear();
          m.clear();
          cout<<endl;

      }
}
