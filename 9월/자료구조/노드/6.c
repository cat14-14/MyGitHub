#include <stdio.h>
#include <stdlib.h>

typedef struct Node{ int x; struct Node* next; } Node;

int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    Node *head=NULL,*tail=NULL;
    for(int i=0;i<n;i++){
        Node* p=malloc(sizeof(Node));
        scanf("%d",&p->x); p->next=NULL;
        if(!head) head=tail=p; else{ tail->next=p; tail=p; }
    }
    Node *prev=NULL,*cur=head,*next=NULL;
    while(cur){ next=cur->next; cur->next=prev; prev=cur; cur=next; }
    head=prev;
    for(Node* p=head;p;p=p->next) printf("%d ",p->x);
    printf("\n");
    return 0;
}
