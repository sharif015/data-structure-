#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
#define N NULL

int main()
{
      int arr[222];
 for(int i=1 ; i<20 ; i++)
 {
        arr[i]=i ;
 }
 for(int i=2 ; i<20 ; i++)
 {
       if(arr[i]==i)
       {
             cout<<i<<" " ;
       }
 }
}
