#include <stdio.h>
#include <stdlib.h>

typedef struct Node{ int x; struct Node* next; } Node;

int len(Node* h){ int c=0; for(;h;h=h->next) c++; return c; }

int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    Node *head=NULL,*tail=NULL;
    for(int i=0;i<n;i++){
        Node* p=malloc(sizeof(Node));
        scanf("%d",&p->x); p->next=NULL;
        if(!head) head=tail=p; else{ tail->next=p; tail=p; }
    }
    int cmd,v; scanf("%d%d",&cmd,&v);
    if(cmd==1){
        Node* p=malloc(sizeof(Node)); p->x=v; p->next=head; head=p;
    }else if(cmd==2){
        int L=len(head), k=L/2+1;
        if(k<=1){
            Node* p=malloc(sizeof(Node)); p->x=v; p->next=head; head=p;
        }else{
            Node* cur=head; for(int i=1;i<k-1;i++) cur=cur->next;
            Node* p=malloc(sizeof(Node)); p->x=v; p->next=cur->next; cur->next=p;
        }
    }
    for(Node* p=head;p;p=p->next) printf("%d ",p->x);
    printf("\n");
    return 0;
}
