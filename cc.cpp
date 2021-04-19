#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
#define N NULL

int main()
{
 int t ;
 cin>>t ;
 int arr[150];
 map<int ,int>m ;
 set<int>s ;
 while(t--)
 {
       int n ;
       cin>>n ;




       for(int i=0 ; i<n ; i++)
       {
            cin>>arr[i] ;
            m[arr[i]]++ ;
            s.insert(arr[i]);
       }
       for(auto u:s)
       {
            cout<<u<<" ";
       }
            s.clear();



             for(int i=0 ; i<n ; i++)
       {

             if(m[arr[i]]>=2)
             {
                   if(n==1)
                   {
                         break ;
                   }
                   else{

                   cout<<arr[i]<< " ";
                   break ;
                   }
             }

       }
       cout<<endl;



 }
}
