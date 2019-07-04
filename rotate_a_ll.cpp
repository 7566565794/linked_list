.. this is indeed a very simple question ...
Node* rotate(Node* head, int k) {
    Node *p=head;
    Node *q=head;
    
    while(p->next!=NULL){
        if(k>1){
            q=q->next;
            k--;
        }
        p=p->next;
    }
    // cout<<p->data<<endl;
    p->next=head;
    head=q->next;
    q->next=NULL;
    return head;
}
/*testcase
2
8
1 2 3 4 5 6 7 8
4
5
2 4 7 8 9
3

Output:
5 6 7 8 1 2 3 4
8 9 2 4 7
*/
