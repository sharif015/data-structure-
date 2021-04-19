#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
#define N NULL
 struct node
 {
       int data ;
       struct node *next ;
 };
 bool ispresent(struct node* head,int data);
 //struct node* result=N ;
 void Push(struct node **head ,int data)
 {
       struct node *tmp ;
       tmp=(struct node*)malloc(sizeof(struct node)) ;

      tmp->data=data ;
      tmp->next=*head ;
      *head=tmp ;
 }
 void display(struct node *head)
 {
       while(head!=N)
       {
             cout<<head->data<<" ";
             head=head->next ;
       }
 }
struct node* unin(struct node *head1,struct node *head2)
 {
       struct node *result=N ;
       while(head1!=N)
       {
             Push(&result,head1->data);
             head1=head1->next ;
       }
       while(head2!=N)
       {
           if(!ispresent(result,head2->data))
           {
                 Push(&result,head2->data);

           }
           head2=head2->next ;
       }
       return result ;
 }
 struct node* i_section(struct node* head1,struct node *head2)
 {
       struct node *result=N ;
       while(head1!=N)
       {
             if(ispresent(head2,head1->data))
             {
          Push(&result,head1->data);
             }

             head1=head1->next ;

       }
       return result ;
 }
 bool ispresent(struct node* head,int data)
 {
    while(head!=N)
    {
          if(head->data==data)
          {
                return 1;
          }
          head=head->next ;
    }
    return 0 ;
 }
int main()
{
      int n ;
      cin>>n ;
      struct node* head1=N ;
      struct node* head2=N ;
      struct node* Unin=N ;
      struct node* intersection=N ;
 for(int i=0 ; i<n ;i++)
 {
       int a ;
       cin>>a ;
       Push(&head1,a);
 }
 for(int i=0 ; i<n ;i++)
 {
       int aa ;
       cin>>aa ;
       Push(&head2,aa);
 }
 Unin=unin(head1,head2);
 intersection=i_section(head1,head2);
 cout<<"\n union of two set: " ;
 display(Unin);
 cout<<"\nintersection of two set: " ;
 display(intersection);
 return 0 ;
}
