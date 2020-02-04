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

void create_list_bottom()

{
	 Node *list = create_node();
	Node *temp = head;
	scanf("%d",&list->data);
        list->next = head;
	if(head==NULL)
	{ list->next = list;
		head = list;
	
	}
	else {
	  
  while (temp->next!=head)
	   { temp = temp->next;
             
           }
  temp->next = list;}
}

void transverse()

{
	Node *temp = head;

	if (head!=NULL)
	{
		do
		{
			printf("%d ", temp->data);
			temp = temp->next;
		}

		while (temp!=head);
	}
}

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
    /*insert();
    transverse();
    delete();
    transverse();*/
    return 0;
 }  