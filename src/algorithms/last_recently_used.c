#include <stdio.h>
#include <stdnoreturn.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct Cache{
  char Domain[100];
  struct Cache * Next;
};
struct Cache* initialize_cache(){
  struct Cache *head=NULL;
  struct Cache *second=NULL;
  struct Cache *third=NULL;
  head = malloc(sizeof(struct Cache));
  second= malloc(sizeof(struct Cache));
  third =  malloc(sizeof(struct Cache));
  head->Next=second;
  second->Next=third;
  third->Next=NULL;
  char domain1[100]= "google.com";
  char domain2[100]= "facebook.com";
  char domain3[100]= "linkedin.com";
  strcpy(head->Domain, domain1);
  strcpy(second->Domain, domain2);
  strcpy(third->Domain, domain3);

  return head;
}
struct Cache* create_new_cache(char domain[100]){
  struct Cache * new_cache= NULL;
  new_cache=(struct Cache*)malloc(sizeof(struct Cache));
  strcpy(new_cache->Domain,domain);
  new_cache->Next=NULL;
  return new_cache;
  
}
struct Cache* update_priority(struct Cache* current, struct Cache * reference_head, struct Cache * prev){
  if(prev==NULL){
    return reference_head;
  }
  prev->Next=current->Next;
  current->Next=reference_head;
  return current;
}
void print_cache(struct Cache * head){
  while(head!=NULL){
    printf("%s ->", head->Domain);
    head=head->Next;
  }
}
struct Cache* patch_cahche(struct Cache *head, char new_domain[100]){
  struct Cache * prev=NULL;
  struct Cache* referenc_head=head;
  while(head){
    if (strcmp(head->Domain,new_domain)==0){
     strcpy(head->Domain,new_domain);
     struct Cache* to_return=update_priority(head, referenc_head, prev);
      return to_return;
      }
      prev=head;
      head=head->Next;
    }
    struct Cache *new_cache= create_new_cache(new_domain);
    new_cache->Next=referenc_head;
     if (prev!=NULL){
      prev->Next=NULL;
     }
     struct Cache *slow_cache=referenc_head;
     struct Cache *fast_cache= referenc_head->Next;
     while(fast_cache->Next !=NULL){
        slow_cache=fast_cache;
        fast_cache=fast_cache->Next;
      }
    slow_cache->Next=NULL;
    free(fast_cache);    
     return new_cache;
}
int main(){
  struct Cache *head= initialize_cache();
  printf("Original Linked List is :\n");
  print_cache(head);

  printf("\n After Adding Tiktok :\n");
  char tiktok[100];
  char add[]="tiktok.com";
  strcpy(tiktok, add);
  struct Cache * new_head=patch_cahche(head, tiktok);
  print_cache(new_head);

  printf("\n After Readding google : \n");
  char goole[100];
  char add2[]="google.com";
  strcpy(goole, add2);
  struct Cache * new_head1=patch_cahche(new_head, goole);
  print_cache(new_head1);

  printf("\n After Adding tiktok again \n");
  char google2[100];
  char add3[]="tiktok.com";
  strcpy(google2, add3);
  struct Cache * new_head2=patch_cahche(new_head1, google2);
  print_cache(new_head2);

  return 0;
}
