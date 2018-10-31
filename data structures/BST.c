#include<stdio.h>
#include<stdlib.h>

struct Bstnode
{
 int data;
 struct Bstnode *lchild,*rchild;
}*root=NULL;

void insert (void);
int search (int x);
void remove_ele(int x);
void BST_Traversals(void);
void inorder(struct Bstnode *tt);
void preorder(struct Bstnode *tt);
void postorder(struct Bstnode *tt);
void max_value(void);
void min_value(void);
int IsEmpty(void);

void insert(void)
{
 struct Bstnode *temp,*current,*parent_current;
 int item;
 printf("enter data\n");
 scanf("%d",&item);
 temp=(struct Bstnode *)malloc(sizeof(struct Bstnode *));
 temp->data=item;
 temp->lchild=NULL;
 temp->rchild=NULL;
 if(root==NULL)
 {
   root=temp;
   return;
 }
 current=root;
 while(1)
 {
     if(current->data>temp->data)
     {
        if(current->lchild==NULL)
	{
           current->lchild=temp;
	   return;
 	}
       current=current->lchild;
     }
    else if(current->data<temp->data)
     {
	if(current->rchild==NULL)
        {
            current->rchild=temp;
            return;
        }
        current=current->rchild;
     }
    else
    {
      printf("\n this is a Duplicate Entry *** so insertion is regreted\n");
      return;
    }
 }
}


int IsEmpty(void)
{
 if(root==NULL)
   return 1;
 else
   return 0;
}

void max_value(void)
{
    struct Bstnode *temp=root;
    while(temp->rchild!=NULL)
         temp=temp->rchild;
    printf("\n The MAX value of BST is :%d",temp->data);
}

void min_value(void)
{
    struct Bstnode *temp=root;
    while(temp->lchild!=NULL)
         temp=temp->lchild;
    printf("\n The MIN value of BST is :%d",temp->data);
}

int search(int key)
{
 struct Bstnode *temp=root;
 while(temp!=NULL)
 {
      if(temp->data>key)
           temp=temp->lchild;
      else if(temp->data<key)
           temp=temp->rchild;
      else 
          return 1;
 }
 return 0;
}

void BST_Traversals(void)
{
  if(root==NULL)
  {
    printf("\nBST is empty *** traversals are not possible\n");
    return;
  }
  int choice;
  printf("\n BST  Traversals MENU \n");
  printf("\n1.inorder traversal  2. preoder traversal 3.postorder traversal\n");
  printf("enter your choice\n");
  scanf("%d",&choice);
  if(choice==1)
   {
         printf("\n Inorder Traversals Display \n");
         inorder(root);
   }
  else if(choice==2)
   {
         printf("\n Preorder Traversals Display \n");
         preorder(root);
   }
  else if(choice==3)
   {
         printf("\n Postorder Traversals Display \n");
         postorder(root);
   }
  else
   {
        printf("\n Wrong Choice\n");
        BST_Traversals();
   }
}


void inorder(struct Bstnode *temp)
{
     if(temp!=NULL)
     {
          inorder(temp->lchild);
          printf("%5d",temp->data);
          inorder(temp->rchild);
     }
}
 
void preorder(struct Bstnode *temp)
{
     if(temp!=NULL)
     {
          printf("%5d",temp->data);
          preorder(temp->lchild);
          preorder(temp->rchild);
     }
}
 
void postorder(struct Bstnode *temp)
{
     if(temp!=NULL)
     {
          postorder(temp->lchild);
          postorder(temp->rchild);
          printf("%5d",temp->data);
     }
}
 

int main()
{
 int ch,val;
 
 while(1)
 {
  printf("\nBST MENU\n");
  printf("1.insert\n2.remove_ele\n3.traversals\n4.search\n5.Max value\n");
  printf("6.Min value\n7.exit\n");
  printf("\n Enter your choice between 1 to 7\n");
  scanf("%d",&ch);
  
  switch(ch)
  {
    case 1: insert();break;
    case 2: if(IsEmpty())
                  printf("\n BST is Empty *** so deletion is not possible\n");
            else 
            {
              printf("\nEnter a key value to delete from BST\n");
              scanf("%d",&val);
              remove_ele(val);
            }
            break;
    case 3:BST_Traversals();break;
    case 4:if(IsEmpty())
               printf("\n BST is Empty *** so search is not possible\n");
           else 
           {
               printf("\n Enter a key value to search in BST\n");
               scanf("%d",&val);
               if(search(val))
                      printf("\n the element %d found  in BST\n",val);
               else
                      printf("\n the element %d not found in BST\n",val);
           }
           break;
   case 5:if(IsEmpty())
            printf("\nBST is Empty*** so finding of maximum is not possible\n");
          else 
             max_value();
          break;
   case 6:if(IsEmpty())
            printf("\nBST is Empty*** so finding of minimum is not possible\n");
          else 
             min_value();
          break;
   case 7: exit(0);
   default:  printf("\n enter the choice between 1 to 7 \n");
  }
 }
}  


void remove_ele(int key)
{
  struct Bstnode *remv=root,*parent_remv=root,*replacable,*parent_replacable;
 
  while(1)
  {
    if(remv->data==key)
         break;
    parent_remv=remv;
    if(remv->data>key)
       remv=remv->lchild;
    else if(remv->data<key)
       remv=remv->rchild;
    if(remv==NULL)
    {
      printf("\n Given KEY is not in BST *** so deletion is not possible\n");
      return;
    }
  }
  printf("\n the deleted element is : %d\n",remv->data);
  if(remv->lchild==NULL&&remv->rchild==NULL)
  {
    if(remv==root)
    {
       root=NULL;
       free(remv);
       return;
    }
   
   if(parent_remv->data>remv->data)
       parent_remv->lchild=NULL;
   else if(parent_remv->data<remv->data)
       parent_remv->rchild=NULL;
     free(remv);
    return;
  }
   else if(remv->lchild!=NULL&&remv->rchild==NULL)
   {
     if(remv==root)
     {
        root=remv->lchild;
        free(remv);
         return;
     }
     if(parent_remv->data>remv->data)
         parent_remv->lchild=remv->lchild;
     if(parent_remv->data<remv->data)
         parent_remv->rchild=remv->lchild;
      free(remv);
      return;
   }
  
   else if(remv->lchild==NULL&&remv->rchild!=NULL)
   {
     if(remv==root)
     {
        root=remv->rchild;
        free(remv);
         return;
     }
     if(parent_remv->data>remv->data)
         parent_remv->lchild=remv->rchild;
     if(parent_remv->data<remv->data)
         parent_remv->rchild=remv->rchild;
      free(remv);
      return;
   }
  
   parent_replacable=remv;
   replacable=remv->lchild;
   if(replacable->rchild==NULL)
    {
      remv->lchild=replacable->lchild;
      remv->data=replacable->data;
      free(replacable);
      return;
    }
   while(replacable->rchild!=NULL)
   {
       parent_replacable=replacable;
       replacable=replacable->rchild;
   }
   remv->data=replacable->data;
   parent_replacable->rchild=replacable->lchild;
   free(replacable);
}
