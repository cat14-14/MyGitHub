#include <stdio.h>
#include <stdlib.h>

typedef struct Node{ int x; struct Node* next; } Node;

void print_rev(Node* h){
    if(!h) return;
    print_rev(h->next);
    printf("%d ",h->x);
}

int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    Node *head=NULL,*tail=NULL;
    for(int i=0;i<n;i++){
        Node* p=malloc(sizeof(Node));
        scanf("%d",&p->x); p->next=NULL;
        if(!head) head=tail=p; else{ tail->next=p; tail=p; }
    }
    print_rev(head);
    printf("\n");
    return 0;
}
