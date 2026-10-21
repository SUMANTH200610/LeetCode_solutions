class MyLinkedList {
public:
class Node{
    public:
    int val;
    Node* next;
    Node(int x){
        val = x;
        next = NULL;
    }
};
Node * head;
int size;
    MyLinkedList() {
        head = NULL;
        size = 0;
    }
    
    int get(int index) {
        if(index <0 || index >= size) return -1;
            
    Node* curr = head;
    for(int i = 0;i<index;i++){
        curr = curr->next;
    }
    return curr -> val;
    }
    void addAtHead(int val) {
        Node* newnode = new Node(val);
        newnode -> next = head;
        head = newnode;
        size++;
    }
    
    void addAtTail(int val) {
        Node* newnode = new Node(val);
        if(head == NULL)  head = newnode;
        else {
            Node* curr = head;
            while(curr->next != NULL){
                curr =  curr -> next ;
            }
            curr -> next = newnode;
        }
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index > size || index <0) return;
        else if(index == 0){
            addAtHead(val);
            return;
        }
        else if(index == size) {
            addAtTail(val);
            return;
        }
        Node* newnode = new Node(val);
        Node * current = head;
        for(int i = 0;i<index-1;i++){
            current = current->next;
        }
        
        newnode -> next = current-> next;
        current -> next = newnode;
        size++;
    }
    
    void deleteAtIndex(int index) {
        if(index >= size || index <0) return;
        else if(index == 0){
            Node* temp = head;
            head = head -> next;
            size--;
            return;

            

        }
        Node* current = head;
        for(int i = 0;i<index-1;i++){
            current = current -> next;
        }
        Node * newn = current-> next;
        current -> next = newn-> next;
        size--;

    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */