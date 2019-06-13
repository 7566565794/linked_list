//detect loop in a linked list
int detectloop(Node *h)
{//this question might not be solved through this approach coz it might be possible they are not using bits/stdc++.h header file
    unordered_set<Node *> s;
    while(h!=NULL){
       if(s.insert(h)!=s.end()){
           return true;
       }
       s.insert(h);
       h=h->next;
    }
    return 0;
}

// detect loop through floyd's cycle finding algotithm
int detectloop(Node *h)
{
   Node *s=h;// slow pointer we always increment through 1 locations.
   Node *f=h;// fast pointer we always incrmeent through 2 locations.
   while(s && f && f->next){//  till all of them are not null
       s=s->next;
       f=f->next->next;
       while( s == f ){//see in loop there definately come a situation when both slow pointer and fast pointer will become equal
           return 1;
       } 
   }
    return 0;
}
