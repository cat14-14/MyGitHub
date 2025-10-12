#include <stdio.h>
#include <stdlib.h>

typedef struct Node{ int x; struct Node* next; } Node;

int length(Node* h){ int c=0; for(;h;h=h->next) c++; return c; }

int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    Node *head=NULL,*tail=NULL;
    for(int i=0;i<n;i++){
        Node* p=malloc(sizeof(Node));
        scanf("%d",&p->x); p->next=NULL;
        if(!head) head=tail=p; else{ tail->next=p; tail=p; }
    }
    int k; scanf("%d",&k);
    int L=length(head);
    if(k<1||k>L){
        printf("error\n");
        return 0;
    }
    if(k==1){
        Node* tmp=head; head=head->next; free(tmp);
    }else{
        Node* cur=head; for(int i=1;i<k-1;i++) cur=cur->next;
        Node* tmp=cur->next; cur->next=tmp->next; free(tmp);
    }
    for(Node* p=head;p;p=p->next) printf("%d ",p->x);
    printf("\n");
    return 0;
}
