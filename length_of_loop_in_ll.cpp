//hash technique cant be used to find the length of the loop;
finding length of loop using floyds algorithm
int count_nodes( struct Node *p){
    struct Node *temp = p->next;
    int count=1;
    while(p!=temp){
        temp=temp->next;
        count++;
    }
    return count;
}
int countNodesinLoop(struct Node *head)
{
     int count=0;
     struct Node *s=head;
     struct Node *f=head;
     while(s&&f&&f->next){
         s=s->next;
         f=f->next->next;
         if(s==f){
             return count_nodes(s);
         }
     }
     return 0;
}
