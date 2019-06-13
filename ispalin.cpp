// this program is to find whether a linklist is palindrome or not
2
3
1 2 1
4
1 2 3 4//testcase
bool isPalindrome(Node *head)
{
    //Your code here
    if(head==NULL){
        return true;
    }
    Node *p=head;
    stack <int> s;
    while(p!=NULL){
        s.push(p->data);
        p=p->next;
    }
    p=head;
    while(s.empty()==false && p!=NULL){
        if(s.top()!=p->data){
            return false;
        }
        s.pop();
        p=p->next;
    }
    return true;
}
//this program can also be done reversing a linked list so please make sure u are doing through that also
// whenever u understood reversing linklist.
