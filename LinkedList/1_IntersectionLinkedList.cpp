/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* Link list Node 
struct Node {
    int data;
    struct Node* next;
}; */
/* Should return data of intersection point of two linked
   lists head1 and head2.
   If there is no intersecting point, then return -1. */
int intersectPoint(Node* head1, Node* head2){
    int l1=0,l2=0;
    Node *temp1=head1;
    Node *temp2=head2;
    while(temp1!=NULL){
        l1++;
        temp1=temp1->next;
    }
    while(temp2!=NULL){
        l2++;
        temp2=temp2->next;
    }
    int com=abs(l1-l2);
    if(l1>l2){
        for(int i=0;i<com;i++){
            head1=head1->next;    
        }
    }else{
        for(int i=0;i<com;i++){
            head2=head2->next;    
        }
    }
    
    while( (head1!=NULL) && (head2!=NULL)){
        if(head1==head2){
            return 1;
        }
    }
    return 0;
}