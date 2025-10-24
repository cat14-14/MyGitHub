#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct ListNode{
    element data;
    struct ListNode* next;
}Node;

int main(void){
    int n;
    if(scanf("%d", &n) != 1) return 0;
    Node* head = NULL, *tail = NULL;
    for(int i=0; i<n; i++){
        Node* p = malloc(sizeof(Node));
        if(scanf("%d", &p->data) != 1) return 0;
        p->next = NULL;
        if(!head) head = tail = p;
        else{ tail->next = p; tail = p; }
    }
    int t; scanf("%d",&t);
    int pos=1, found=0;
    for(Node* p=head;p;p=p->next,++pos){
        if(p->data==t){ if(found) printf(" "); printf("%d",pos); found=1; }
    }
    if(!found) printf("0");
    printf("\n");
    return 0;
}