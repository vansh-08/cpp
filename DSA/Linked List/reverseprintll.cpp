// Pattern: Traversing in reverse order

// Given the head of a singly linked list, print the list in reverse order.


// // My Approach
// #include<iostream>
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

// class LinkedList{
//     public:
//     Node* head;

//     LinkedList(){
//         head = NULL;
//     }

//     void insertAtTail(int value){
//         Node* new_node = new Node(value);
//         if(head == NULL){
//             head = new_node;
//             return;
//         }
//         Node* temp = head;
//         while(temp->next != NULL){
//             temp = temp->next;
//         }
//         temp->next = new_node;
//     }

//     void display(){
//         Node* temp = head;
//         while(temp != NULL){
//             cout<<temp->val<<"->";
//             temp = temp->next;
//         } cout<<"NULL"<<endl;
//     }

//     void displayReverse(Node* temp){
//         if(temp == NULL){
//             cout<<"NULL";
//             return;
//         }
//         displayReverse(temp->next);
//         cout<<"->"<<temp->val;
//     }

//     void disRev(){
//         displayReverse(head);
//     }
// };

// int main(){
//     LinkedList ll;
//     ll.insertAtTail(1);
//     ll.insertAtTail(2);
//     ll.insertAtTail(3);
//     ll.insertAtTail(4);
//     ll.insertAtTail(5);
//     ll.insertAtTail(6);
//     ll.display();
//     ll.disRev();

//     return 0;
// }



// solution provided by mam in vedio lecture
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
        if(head == NULL){
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

// void reversePrint(Node* head){
    
//     //base case
//     if(head==NULL){
//         return;
//     }

//     // recursive case
//     reversePrint(head->next);
//     cout<<head->val<<" ";
// }

void reversePrint(Node* head){
    // base case
    if(head == NULL){
        return;
    }
    reversePrint(head->next);
    cout<<head->val<<" ";
}

int main(){
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.display();
    reversePrint(ll.head);

    return 0;
}
