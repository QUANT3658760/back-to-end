#include <stdio.h>
#include <stdlib.h>


struct Node{
  int data;
  struct Node *next;
};

struct Node *head;
void insert(int x)
{
  struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
  temp->data = x;
  temp->next = NULL;

    if (head == NULL){
    head = temp;
    }
  
  else if (head != NULL)
  {
    struct Node *temp2;
    temp2 = head;
    while (temp2->next != NULL)
    {
      temp2 =temp2->next;
    }  
    temp2->next = temp;
  }

}

void print(){
  struct Node*temp = head;
  printf("The List's elements are: ");
  while (temp!= NULL){
    printf("%d ",temp->data);
    temp=temp->next;
  }
  printf ("\n");
}

int main(void) {
  head = NULL;

  int x,i,n;

  printf ("Please enter the size of the Linked List?\n");
  scanf("%d",&n);

  for (i=0; i<n; i++){
    printf("Please enter the element of the list\n");
    scanf("%d",&x);
    insert(x);
    print();
  }

  printf("The END,:)");
  
  return 0;
}
