int count_nodes(Node *head){
    if(head==NULL)
        return 0;
    Node *p=head;
    int count =0;
    while(p!=NULL){
        count++;
        p=p->next;
    }
    return count;
}
int getintersectdata(int d,Node *head1,Node *head2){
     Node *p=head1;
     Node *q=head2;
    for(int i=0;i<d;i++){
        if(p->next==NULL){
            return -1;
        }
        p=p->next;
    }
    while(p!=NULL && q!=NULL){
        if(p==q){
            return p->data;
        }
        p=p->next;
        q=q->next;
    }
    return -1;
}
int intersectPoint(Node* head1, Node* head2)
{
  int c1=count_nodes(head1);
  int c2=count_nodes(head2);
    
    if(c1>c2){
        int d=c1-c2;
        return getintersectdata(d,head1,head2);
    }
    else{
        int d=c2-c1;
        return getintersectdata(d,head2,head1);        
    }
}

/*
please see the algorithm explanation for more clarification
*/
