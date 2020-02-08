#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

typedef struct node Node;
Node *head = NULL;

Node* create_node()
{ Node *temp;
temp = (Node*)malloc(sizeof(Node));
return temp;
}

void create_list_top(void)
{ Node *list = create_node();
  list->next = head;
  scanf("%d",&list->data);
  head = list;
  }

void create_list_bottom(void)
{ Node *list = create_node();
	Node *temp = head;
	scanf("%d",&list->data);
        list->next = NULL;
	if(temp==NULL)
	{ head = list;
	
	}
	else {
	  
  while (temp->next!=NULL)
	   { temp = temp->next;
             
           }
temp->next = list;}

         
  } 
void insert()
{ Node *temp;
       temp = head;
      Node * p = create_node();
      int pos,i;
      printf("\nEnter the position: \n");
      scanf("%d",&pos);
      printf("Enter data: \n");
      scanf("%d",&p->data);
       for(i=0;i<pos-1;i++)
        { temp = temp->next;}
	 p->next = temp->next;
	 temp->next = p;
	 //p->next = q;
	 }
void delete()
{
  Node *temp,*q;
  //Node *p = create_node();
  temp = head;
  int pos,i;
      printf("\nEnter the position: \n");
      scanf("%d",&pos);
      //printf("Enter data: \n");
      //scanf("%d",&p->data);
  for (i = 1; i<pos;i++)
  {
    temp = temp->next;

  }

  q = (temp->next)->next;
  temp->next = q;

}

void transverse(void)
{ Node *temp;
  temp = head;
  while (temp!=NULL)
   {printf("%d ",temp->data);
    temp = temp->next;}}
int main()
 { int n,i;
 	printf("Enter number of nodes:\n");
 	
    scanf("%d",&n);
    printf("Enter data:\n");
    for (i=0;i<n;i++)
    	{// create_list_top();}
	  create_list_bottom();}
    printf("\nList is : ");
    transverse();
    insert();
    transverse();
    delete();
    transverse();
    return 0;
 }  