#include<bits/stdc++.h>
using namespace std ;
void swap(char *a,char *b)
{
    char temp=0 ;
    temp=*a ;
    *a=*b ;
    *b=temp ;
}
void print(char ar[])
{
char u ;
for(u=0;u<6;u++)
{
  printf("%d ",ar[u]-'0');
}
printf("\n");

}
int main()
{
    char array[8];
    for(int i=0; i<6; i++)
    {
        cin>>array[i];
    }
    int c=0 ;
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<6-1-i; j++)
        {


            if(array[j]>array[j+1])
            {

                swap(array[j],array[j+1]);
                 print(array); c++ ;
        cout<<c<<endl ;

            }
        }
    }
    print(array);






}






