Node* segregate(Node *head) {
    Node *p=head;
    int count_0=0;
    int count_1=0;
    int count_2=0;
    while(p!=NULL){
        if(p->data==0)
            count_0++;
        else if(p->data==1)
            count_1++;
        else
            count_2++;
        p=p->next;
    }
    p=head;
    // printf("%d %d %d ",count_0,count_1,count_2);
        while(count_0>0){
            p->data=0;
            p=p->next;
            count_0--;
        }
        while(count_1>0){
            p->data=1;
            p=p->next;
            count_1--;
        }
        while(count_2>0){
            p->data=2;
            p=p->next;
            count_2--;
        }
    return head;
   }
