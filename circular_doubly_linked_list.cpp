#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
#define N NULL
struct node
{
      int data ;
      struct node *prev ;
      struct node *next ;
}*first=NULL ,*last;
void create(int data)
{
      struct node *tmp  ;
      tmp=new node();
      tmp->data=data ;
      tmp->prev=NULL ;
      tmp->next=NULL ;
      if(first==NULL)
      {
            first=last=tmp ;
      }
      else
      {
            last->next=tmp ;
            tmp->prev=last ;
            last=tmp ;
      }
first->prev=last ;
last->next=first ;
}

void insertatanyposition(int pos ,int data)
{
      struct node *tmp ,*t;
      tmp=new node() ;
      tmp->data=data ;
      tmp->next=NULL ;
      tmp->prev=NULL ;
      int k=1 ;
      t=first ;
      while(k<pos)
      {
            t=t->next ;
            k++ ;
      }
      //   45
      //2 3 4
      if(pos==1)
      {

      t->prev=tmp ;
      tmp->next=first ;
      first=tmp ;

      last->next=first ;
      first->prev=last ;
      }
      else{
      tmp->next=t->next ;
      t->next->prev=tmp ;
      t->next=tmp ;
      tmp->prev=t ;
      }
}
void insertatlast(int data)
{
      struct node *tmp ;
      tmp=new node() ;
      tmp->data=data ;
      tmp->next=NULL ;
      tmp->prev=NULL ;
      last->next=tmp ;
      tmp->prev=last ;
      last=tmp ;
      last->next=first ;
      first->prev=last ;
}
void display()
{
      struct node *forw ,*rev ;
      forw=first ;
      rev=last ;
      do
      {
            cout<<forw->data<<" " ;
            forw=forw->next ;
      }
      while(forw!=first) ;
      cout<<endl ;
      do
      {
            cout<<rev->data <<" " ;
            rev=rev->prev ;
      }while(rev!=last);
}
void deleted(int pos)
{
      struct node *t;

      int k=1 ;
      t=first ;
      while(k<pos)
      {
            t=t->next ;
            k++ ;
      }
      if(pos==1)
      {
        first=t->next ;
        last->next=first ;
        first->prev=last ;
        free(t);
      }
      else{
      t->prev->next=t->next ;
      t->next->prev=t->prev ;
      free(t);
      }

}
int main()
{
printf("enter node number: \n");
int a,b,c,d,e,f ;
cin>>a ;
 for(int i=1 ; i<=a ; i++)
 {
       create(i);
 }
 printf("enter a data to insert at last : \n");
 cin>>b ;
 insertatlast(b);cout<<endl ;
 display();
 printf("enter a position but not last postion then enter data : \n");
 cin>>c>>d ;
 insertatanyposition(c,d);cout<<endl ;
 display();
 printf("enter a postion to deleted : \n");
 cin>>e ;
 deleted(e);cout<<endl;
 display();
}
