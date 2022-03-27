struct Node* makeUnion(struct Node* head1, struct Node* head2)
{
    // code here
    set<int>s;
    Node* p=head1;
    Node* q=head2;
    while(p){
        s.insert(p->data);
        p=p->next;
    }
    while(q){
        s.insert(q->data);
        q=q->next;
    }
    Node* a=new Node(0);
    Node* t=a;
    for(auto i:s){
        t->next=new Node(i);
        t=t->next;
    }
    a=a->next;
    return a;
    
}
