#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
#define N NULL
struct node
{
      int data ;
      struct node *next ;
}*top=NULL;
void push(int data);
void pop();
int isempty();
void peek();
int main()
{
printf("enter number of data: \n");
int n ;
cin>>n ;
for(int i=0 ; i<n ; i++)
{
      int a ;
      cin>>a ;
      push(a);
}
pop();
pop();
peek() ;

}
int isempty()
{
  return top==NULL ;
}
void push(int data)
{

      struct node *tmp ;
      tmp=new node();
      tmp->data=data ;
      tmp->next=top ;
      top=tmp;
}
void pop()
{
      struct node *tmp ;
      tmp=top ;
      cout<<top->data<<endl;
      //free(tmp);
      top=top->next;
      delete tmp ;

}
void peek()
{
      struct node *tmp ;
      tmp=top;
      cout<<tmp->data<<endl ;
}
