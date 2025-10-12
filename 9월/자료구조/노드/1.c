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
    int t; scanf("%d",&t);
    int pos=1, found=0;
    for(Node* p=head;p;p=p->next,++pos){
        if(p->x==t){ if(found) printf(" "); printf("%d",pos); found=1; }
    }
    if(!found) printf("0");
    printf("\n");
    return 0;
}
