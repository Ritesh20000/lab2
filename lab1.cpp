#include <iostream>
using namespace std;
class Node{
    public:
    // Data 
    int data;
    // Pointer to the next Node
    Node * next;
    // Construct that makes the ptr to NULL
    Node(){
    next = NULL;
    }

};

class LinkedList{
    // Head and Circles inside linked with each other
    public:
    // Head and tail to Node type ptr
    Node * head;
    Node * tail;

    // Construct
    LinkedList(){
        head = NULL;
        tail = NULL;
    } 

    // Insert
    void insert(int value){
       // If 1st Node is added
       Node * temp = new Node; 
       // Insert value in the node
       temp->data = value;
       // 1st Node only.
       if(head == NULL){
            head = temp;
       }
       // Any other Node
       else{
            tail->next = temp;
       }
       tail = temp;
    } 
    void deletat(int pos){
      Node * current = head;
        int i =1;
        while(i < pos-1){
            i++;
            current = current->next;
        } Node * temp = tail;
     current->next = NULL; 
     
        // update tail
        tail = current;
        // delete temp
         delete temp;}


    void insertAt(int pos, int value){
        // Reach the place before the pos
        Node * current = head;
        int i =1;
        while(i < pos-1){
            i++;
            current = current->next;
        }
    

        // Create a node
        Node * temp = new Node;
        temp -> data = value;
        temp->next = current->next;
        current->next = temp;
        
    }

    // Deletion of last element
    void delet(){
        // store the tail in temp
        Node * temp = tail;
        // before tail has to point to null
        Node * current = head;
        while(current->next != tail){
            current = current->next;
        }
        current->next = NULL; 

        // update tail
        tail = current;
        // delete temp
         delete temp;
    }
    // Display
    void display(){
        Node * current = head;
        while(current != NULL){
            cout << current->data << "->";
            current = current->next;
        }
        cout << endl;
    }
};


int main(){
    LinkedList l1;
    l1.insert(1);
    l1.insert(2);
    l1.insert(3);
    l1.display();
    l1.delet();
    l1.display();
    l1.insertAt(1, 4);
    l1.display();
    l1.deletat(2);
    l1.display();
    
    return 0;
}
