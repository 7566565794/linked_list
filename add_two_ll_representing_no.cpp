int carry=0;
    Node *res=NULL;
    Node *prev=NULL;
    while(first!=NULL || second!=NULL){
        int sum=carry+(first?first->data:0)+(second?second->data:0);
        carry=(sum>=10)? 1:0;
        sum=sum%10;
        Node *temp=new Node(sum);
        if(res==NULL){
            res=temp;
        }
        else{
            prev->next=temp;
        }
        prev=temp;
    if(first)
        first=first->next;
    if(second)
        second=second->next;
    }
    if(carry>0){
        prev->next=new Node(carry);
    }
    return res;
