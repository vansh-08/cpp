// Given the head of a linked list, delete every alternate element from the list starting from the second element
// 1 2 3 4 5 -> 1 3 5

#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

class LinkedList{
    public:
    Node* head;
    LinkedList(){
        head = NULL;
    }

    void insertAtTail(int value){
        Node* new_node = new Node(value);
        if(head == NULL){ // linkedlist is empty}
        head = new_node;
        return;
        }
    
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<"->";
            temp = temp->next;
        } cout<<"NULL"<<endl;
    }
};

// void deleteAlternateNodes(Node* &head){

//     Node* curr_node = head;
//     while(curr_node != NULL && curr_node->next != NULL){
//         Node* temp = curr_node->next; //this is the node to be deleted
//         curr_node->next = curr_node->next->next;
//         free(temp);
//         curr_node = curr_node->next;
//     }
// }

void deleteAlternateNodes(Node* &head){
    Node* curr_node = head;
    while(curr_node != NULL && curr_node->next != NULL){
        Node* temp = curr_node->next;
        curr_node->next = curr_node->next->next;
        free(temp);
        curr_node = curr_node->next;
    }
}

int main(){
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.display();
    // deleteAlternateNodes(ll.head);
    deleteAlternateNodes(ll.head);
    ll.display();
    
    return 0;
}







// My Approach...
// #include<iostream>
// #include<cstddef>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node* next;

//     Node(int data){
//         val = data;
//         next = NULL;
//     }
// };

// void display(Node* head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout<<temp->val<<"->";
//         temp = temp->next;
//     }
//     cout<<"NULL"<<endl;
// }

// void insertAtHead(Node* &head, int val){
//     Node* new_node = new Node(val);
//     new_node->next = head;
//     head = new_node;
// }

// void deleteAlternate(Node* &head){
//     Node* prev = head;
//     int curr_pos = 1;
//     while(prev->next != NULL){
//         if(curr_pos % 2 != 0){
//             Node* temp = prev->next;
//             prev->next = prev->next->next;
//             free(temp);
//         }
//         else{
//             prev = prev->next;
//         }
//         curr_pos++;
//     }
// }
// int main(){
//     Node* a = new Node(9);
//     insertAtHead(a, 8),insertAtHead(a,7),insertAtHead(a, 6),insertAtHead(a,5);
//     insertAtHead(a, 4),insertAtHead(a,3),insertAtHead(a, 2),insertAtHead(a,1);
//     display(a);
//     deleteAlternate(a);
//     display(a);
//     return 0;
// }
