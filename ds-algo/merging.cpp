#include<bits/stdc++.h>
using namespace std ;

void print(int arr[],int l)
{
    for(int i=0;i<l;i++)
    cout<<arr[i]<<" " ;
    cout<<endl ;
}
void merge(int arr[],int l,int m,int r)
{
 
 int rr=m-l+1 ;
 int ss=r-m ;
int A[rr],B[ss],C[rr+ss] ;
for(int i=0;i<rr;i++)
{
    A[i]=arr[i+l];
}
for(int i=0;i<ss;i++)
{
    B[i]=arr[m+1+i];
}

int ar=0,bs=0,ptr=l;
while(ar<rr && bs<ss)
{
    if(A[ar]<=B[bs])
    {
        arr[ptr]=A[ar];
        ar++ ;
        ptr++ ;
    }
    else
    {
        arr[ptr]=B[bs];
        ptr++ ;
        bs++ ;
    }
}

}

void mergesort(int arr[],int l,int r)
{
    if(l<r){
    int m=l+(r-l)/2 ;
    mergesort(arr,l,m);
    mergesort(arr,m+1,r);
     merge(arr,l,m,r);
    }
}

int main()
{
   
int arr[]={ 12, 11, 13, 5, 6, 7,556,4,6,41,38,3453,4634,164,46346,3456,345,6345,646,3456,456486,4564,15,64 };
int a_size=sizeof(arr)/sizeof(int);
mergesort(arr,0,a_size-1);
print(arr,a_size);




}