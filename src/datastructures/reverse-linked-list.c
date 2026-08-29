#include <stdio.h>

struct Node{
  int data;
 struct Node* next;
};
struct Node *reverse_linked_list(struct Node *head){
   struct Node* current=head;
   struct Node* next=NULL;
   struct Node* previous=NULL;
  while(current!=NULL){
    
    next=current->next;
    current->next=previous;
    previous=current;
    current=next;
  }

  return previous;
}
