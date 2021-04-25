#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
#define N NULL
struct Qnode{
      int data ;
      struct Qnode *next ;
}*f=NULL,*t=NULL;
typedef struct Qnode node ;

void Enqueue(int data);
void dequeue();
void display();
void peek() ;
int main()
{
      printf("Enter element numbers: \n");
      int a ;
      cin>>a ;
      for(int i=0 ;i<a ;i++)
      {
            int n ;
            cin>>n ;
            Enqueue(n);
      }
      dequeue();
      dequeue();
      dequeue();
       display();
         peek() ;

}
void Enqueue(int data)
{

    node *newnode ;
    newnode=new node() ;
    newnode->data=data ;
    newnode->next=NULL ;
    if(f==NULL && t==NULL){
    f=t=newnode ;
    }
    else
    {
          t->next=newnode ;
          t=newnode ;
    }

}
void display()
{
      node *tmp ;
      tmp=f ;
      while(tmp!=NULL)
      {
            cout<<tmp->data<<" "  ;
            tmp=tmp->next ;
      }
}
void dequeue()
{
      node *tmp ;
      tmp=f ;
      cout<<tmp->data<<endl ;
      f=f->next ;
      free(tmp);
}
void peek()
{
      node *tmp ;
      tmp=f ;
      cout<<endl;
      cout<<tmp->data<<endl;
}
