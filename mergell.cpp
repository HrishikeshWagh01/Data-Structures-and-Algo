#include<iostream>
using namespace std;

struct Node{

    int data;
    struct Node *next;
};
void create(struct Node ** head, int new_data){

    struct Node* new_node = new(Node);
    new_node->data = new_data;
    new_node->next = *head;
    *head = new_node;
}
struct Node* merge_ll(struct Node* p, struct Node* q){

    struct Node* ptr;
    struct Node* last;

    if(p->data < q->data){
        ptr = p;
        last = p;
        p = p->next;
        last->next =  NULL;
    }
    else{
        ptr = q;
        last = q;
        q = q->next;
        last->next = NULL;
    }
    while(p!=NULL && q!=NULL){

        if(p->data < q->data){
            last->next = p;
            last = p;
            p = p->next;
            last->next = NULL;
        }
        else{
            last->next = q;
            last = q;
            q = q->next;
            last->next = NULL;
        }

    }
    if(p){
        last->next = p;
    }
    if(q){
        last->next = q;
    }

    return ptr;

}
void print_ll(struct Node* head){

    while(head!=NULL){
        cout << head->data << endl;
        head = head->next;
    }
}
int main(){

    struct Node* first = new(Node);
    struct Node* second = new(Node);

    first = NULL;
    second = NULL;

    create(&first,90);
    create(&first,70);
    create(&first,50);
    create(&first,20);
    create(&first,10);

    create(&second,80); 
    create(&second,60);
    create(&second,40);

    struct Node* third = merge_ll(first,second);
    print_ll(third);
}