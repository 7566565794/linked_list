void intersection(Node **head1, Node **head2,Node **head3)
{
    Node *p=*head1;
    Node *q=*head2;
    while(p!=NULL && q!=NULL){
        if(p->val==q->val){
            // cout<<"hfhghhdhdghdghfhhdjhj";
            Node *temp=new Node();
            temp->val=p->val;
            temp->next=NULL;
            if(*head3==NULL){
                *head3=temp;
            }
            else{
                struct Node *prev=*head3;
                while(prev->next!=NULL){
                    prev=prev->next;
                }
                prev->next=temp;    
                }
             p=p->next;//u were making mistake here, u was increment it outside so both the conditions were not getting satisfied 
             q=q->next;
        }
        else if(p->val>q->val){
                q=q->next;
        }
        else{
                p=p->next;
        }
       
    }
   
}
