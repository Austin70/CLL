#include<stdio.h>
#include<stdlib.h>
struct node
{int data;
 struct node* link;
};
 void display(struct node* head)
 {struct node* ptr;
  ptr=head->link;
  if(ptr==head)
   printf("list empty\n");
  else
  while(ptr!=head)
    {  printf("\n%d\n",ptr->data);
       ptr=ptr->link; 
    }
 }
 void createnode(struct node* head)
 {int data=0;
  struct node* ptr;
  struct node* new;
  new=(struct node*)malloc(sizeof(struct node));    
  printf("enter the data");
  scanf("%d",&data);
  ptr=head;
  while(ptr->link!=head)
  {ptr=ptr->link;}
  new->data=data;
  ptr->link=new;
  new->link=head;
  //free(new);
 }
 void merge(struct node* head,struct node *head1)
 {struct node* ptr;
  ptr=head;
  while(ptr->link!=head)
    ptr=ptr->link; 
  ptr->link=head1->link;
  while(ptr->link!=head1)
   ptr=ptr->link;
  ptr->link=head;
  display(head);
 
 
 }
 
 
 
 
 int main()
 {int choice=0;
  char ch;
  struct node* head=NULL;
  struct node* head1=NULL;
  head=(struct node*)malloc(sizeof(struct node));
  head1=(struct node*)malloc(sizeof(struct node));
 head->link=head;
  head1->link=head1;
  while(choice!=4)
  {
  printf("\n\n\tCIRCULAR LINKED LIST\n1.CREATE TWO CL\n2.MERGE FOR TWO CL\n3.DISPLAY\n4.EXIT\n");
  scanf("%d",&choice);
  switch(choice)
  { 
   case 1:do
          {printf("enter the data of first CL\n");
          createnode(head);
          printf("do you want to continue(y/n)");
          scanf("%c",&ch);//To accept the enter key stroke
  
          scanf("%c",&ch);
          
          }while(ch!='n');
          printf("enter the data of second CL\n");
         do
          {
          createnode(head1);
          printf("do you want to continue(y/n)");
          scanf("%c",&ch);//To accept the enter key stroke
  
          scanf("%c",&ch);
          
          }while(ch!='n');
          break;  
   case 2:merge(head,head1);
          break;
   case 3:printf("first CL\n");
          display(head);
          printf("second CL\n");
   		  display(head1);
   		
   		
  }
  
  }
  return 0;
 }
 
 
 
 
