#include<stdio.h>
#include<stdlib.h>

struct node
{
int info;
struct node *link;
};

struct node *head=NULL;

struct node * createnode()
{
struct node *p;
p=(struct node *)malloc(sizeof(struct node));
return(p);
}

void insertnode_at_beginning()
{
struct node *temp;
temp=createnode();
scanf("%d",&temp->info);
temp->link=head;
head=temp;
printf("%d is inserted in linked_list at beginning.\n",temp->info);
}

void insertnode_at_middle()
{
    int position,number=2;
    struct node *p;
    p=head;
    if(head==NULL)
        printf("\nlinked_list is empty.");
    else
        {
    printf("enter element=");
    struct node *temp;
    temp=createnode();
    scanf("%d",&temp->info);
    temp->link=NULL;
    printf("enter position where you want to insert element=");
    scanf("%d",&position);
    while(number!=position)
    {
        p=p->link;
        number++;
    }
    temp->link=p->link;
    p->link=temp;
    printf("%d is inserted in linked_list at middle.\n",temp->info);
}
}

void insertnode_at_end()
{
struct node *temp;
temp=createnode();
scanf("%d",&temp->info);
temp->link=NULL;
if(head==NULL)
    head=temp;
else
{
 struct node *t;
 t=head;

 while(t->link!=NULL)
 {
     t=t->link;
 }
 t->link=temp;
 printf("%d is inserted in linked_list at end.\n",temp->info);
}
}

void deletenode_at_beginning()
{
      if(head==NULL)
        printf("linked_list is empty.");
    else
    {
       struct node *d;
       d=head;
       head=d->link;
       printf("%d is deleted from the linked_list at beginning.\n",d->info);
       free(d);
    }
}

void deletenode_at_middle()
{
int position,num=1,a=1,b=1;
struct node *d;
d=head;
struct node *p;
p=head;
if(head==NULL)
    printf("\nlinked_list is empty.");
else
    {
printf("enter the position which u want to delete=");
scanf("%d",&position);
while(num!=position)
{
    d=d->link;
    num++;
    if(a!=b)
    {
        p=p->link;
    }
    b++;
}
printf("%d is deleted from the linked_list at middle.\n",d->info);
p->link=d->link;
free(d);
}}

void deletenode_at_end()
{
     int a=1,b=1;
     struct node *r;
     struct node *p;
     r=head;
     p=head;
     if(head==NULL)
     {
       printf("\nlinked_list is empty.");
     }
     else
        {
     while(r->link!=NULL)
     {
         r=r->link;
         if(a!=b)
         {
             p=p->link;
         }
         b++;
     }
      printf("%d is deleted from the linked_list at end.\n",r->info);
      p->link=NULL;
      free(r);
}
}
void view_linked_list_element()
{
    struct node *t;
    if(head==NULL)
        printf("\nlinked_list is empty.");
    else
    {
        t=head;
    while(t!=NULL)
        {
         //printf("|_%d_|_%u_|--->",t->info,t->link);
         printf("%d\t",t->info);
         t=t->link;
    }
    printf("\n");
    }
 }

void count_linked_list()
{
    static int size;
    struct node *t;
    t=head;
    while(t!=NULL)
    {
        t=t->link;
        size++;
    }
    printf("size of linked_list is %d.\n",size);
}
void menu()
{
 printf("\n 1.  insert element in linked_list at beginning.");
 printf("\n 2.  insert element in linked_list at middle.");
 printf("\n 3.  insert element in linked_list at end.");
 printf("\n 4.  delete element in linked_list at beginning.");
 printf("\n 5.  delete element in linked_list at middle.");
 printf("\n 6.  delete element in linked_list at end.");
 printf("\n 7.  view element of linked_list.");
 printf("\n 8.  cout the size of linked_list.");
 printf("\n 9.  exit program.");
 }

void main()
{
  int choice;
  menu();
  while(1)
  {
        //menu();
        printf("\nenter your choice=");
        scanf("%d",&choice);
   switch(choice)
   {
   case 1:
        printf("enter element=");
        insertnode_at_beginning();
        break;
   case 2:
        insertnode_at_middle();
        break;
   case 3:
        printf("enter element=");
        insertnode_at_end();
        break;
   case 4:
        deletenode_at_beginning();
        break;
    case 5:
        deletenode_at_middle();
        break;
   case 6:
        deletenode_at_end();
        break;
   case 7:
        view_linked_list_element();
        break;
   case 8:
        count_linked_list();
        break;
   case 9:
        printf("exit program.");
        exit(0);
   default :
        printf("invalid choice,try again.\n");
    }
  }
}

