hey this is nothing but inserrtion and deletion at the beginning
void MyStack ::push(int x) {
//this is nothing just insertion at beg
       StackNode *temp=new StackNode(x);
       temp->next=top;
       top=temp;
}
/* The method pop which return the element
  poped out of the stack*/
int MyStack ::pop() {
    if(top==NULL){
        return -1;
    }
    StackNode *temp1=top;
    top=top->next;
    return temp1->data;
}
