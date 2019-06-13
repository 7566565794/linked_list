// function inserts the data in front of the list
void insertAtBegining(struct node** headRef, int newData)
{
    // Code here
    
        struct node *p=new node();
         p->data=newData;
        p->next=(*headRef);
        (*headRef)=p;
       
}
// function appends the data at the end of the list
void insertAtEnd(struct node** headRef, int newData)
{
    // Code here
    struct node *r;
    struct node *s=new node();
    r=*headRef;
    if(*headRef==NULL){
        insertAtBegining(headRef,newData);
    }
    else{
        while(r->next!=NULL){
            r=r->next;
        }
        node *s=new node();
        s->data=newData;
        s->next=NULL;
        r->next=s;
    }
    
}
