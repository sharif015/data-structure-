#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
struct node{
      int data ;
      struct node *next ;
};
struct node *head=NULL ,*r=NULL;

void enquequ(int x)
{
      struct node* tmp ;
      tmp=(struct node*) malloc(sizeof(struct node ));
      tmp->data=x ;
      tmp->next=NULL ;
      if(head==0 && r==0)
      {
            r=head=tmp ;
      }
      else
      {
        r->next=tmp ;
        r=tmp ;
      }

}
void display()
{
      struct node *tmp;
      tmp=head ;
      while(tmp  !=NULL)
      {
            cout<<tmp->data<<"  " ;
            tmp=tmp->next;
      }
}
void peek()
{
      cout<<head->data<<endl ;
}
void dequeqe()
{
      struct node *tmp ;
      tmp=head;
      head=tmp->next;
      free(tmp);
      //cout<<head->data ;
}
int main()
{
      for(int i=0 ; i<5 ; i++)
      {
            int a ;
            cin>>a ;
            enquequ(a);
      }
      display() ;
      peek();
      dequeqe();
      display();
}
