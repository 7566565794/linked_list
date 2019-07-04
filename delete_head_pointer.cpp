efficient solution
void deleteNode(Node *node)
{
   Node *p=node;
   int temp=p->next->data;
   Node *q=p->next;
   p->next=q->next;
   p->data=temp;
   q->next=NULL;
   delete(q);
}
