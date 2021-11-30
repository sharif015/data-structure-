#include<bits/stdc++.h>
using namespace std ;

struct node {
int c ;
    struct node *left ;
    struct node *right;
};
struct node* create()
{
    struct node *newnode ;
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter data: ");
int n ;
scanf("%d",&n);
if(n==-1)
{
    return 0;
}
newnode->c=n ;
printf("enter left node: %d\n",n);
newnode->left=create();
printf("enter right node: %d\n",n);
newnode->right=create();
return newnode ;



}
void in_order(struct node* root)
{
    if(root==NULL)return ;

    in_order(root->left);
    in_order(root->right);
    printf("%d ",root->c);
}
int main()
{
struct node *root ;
root=0 ;
root=create();

in_order(root);


}
