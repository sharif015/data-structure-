#include<bits/stdc++.h>
using namespace std ;
struct student
{
  int id ;
  struct student *next ;
};
void insert(struct student **head,int data)
{
	struct student *tmp ,*current_node ;
	current_node=(struct student*) malloc(sizeof(struct student));
	current_node->id=data ;
	current_node->next=NULL ;
	tmp=*head ;
	while(tmp->next!=NULL){
	tmp=tmp->next ;
}
tmp->next=current_node ;


}
void display(struct student *head)
{
	while (head!=NULL)
	{
		cout<<head->id <<endl ;
		head=head->next ;
	}
}
int main()
{
 struct student *head ;
 for(int a=0 ;a<5 ;a++){
 	int j ;
 	cin>>j ;
  insert(&head,j);
}
  display(head);
}