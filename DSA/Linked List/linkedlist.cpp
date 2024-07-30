// #include<iostream>
// #include<cstddef>
// using namespace std;

// class Node {
//     public:
//     int val;
//     Node* next;

//     Node(int data) {
//         val = data;
//         next = NULL;
//     }
// };

// int main(){

//     Node* n = new Node(1);
//     cout<<n->val<<" "<<n->next<<endl;

//     return 0;
// }


// Traversal in a singly linked list
// we define a variable temp for traversal
// at first temp = head then temp = temp->next and if temp == null means end...



// Insertion at kth position in a singly linked list
// To Add a node at the start
// first refer head to next of new node then refer head to address of new node
// #include<iostream>
// #include<cstddef>
// using namespace std;
// class Node {
//     public:
//     int val;
//     Node* next;

//     Node(int data) {
//         val = data;
//         next = NULL;
//     }
// };

// void insertAtHead(Node* &head, int val){
//     Node* new_node = new Node(val);
//     new_node->next = head;
//     head = new_node;
// }

// void display(Node* head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->val<<"->";
//         temp = temp->next;
//     }
//     cout<<"NULL"<<endl;
// }

// int main(){
//     Node* head = NULL;
//     insertAtHead(head, 2);
//     display(head);
//     insertAtHead(head, 1);
//     display(head);
//     return 0;
// }




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

// void insertAtHead(Node* &head, int val){
//     Node* new_node = new Node(val);
//     new_node->next = head;
//     head = new_node;
// }

// void insertAtTail(Node* &head, int val){
//     // Time Complexity -> O(n), if tail pointer given then O(1)...
//     Node* new_node = new Node(val);
//     Node* temp = head;
//     while(temp->next != NULL){
//         temp = temp->next;
//     }
//     // temp has reached last node
//     temp->next = new_node;
// }

// // void insertAtK(Node* &head, int val, int k){
// //     // my logic
// //     Node* temp = head;
// //     int counter = 0; // 0 for zero based indexing and 1 for 1 based indexing for position of k...
// //     while(counter < k-1){
// //         temp = temp->next;
// //         counter++;
// //     }
// //     Node* next_node = temp->next;
// //     Node* new_node = new Node(val);
// //     temp->next = new_node;
// //     new_node->next = next_node;
// // }

// void display(Node* head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout<<temp->val<<"->";
//         temp = temp->next;
//     }
//     cout<<"NULL"<<endl;
// }

// void insertAtPosition(Node* &head, int val, int pos){
//     // Time Complexity -> O(n)...
//     if(pos == 0){
//         insertAtHead(head, val);
//         return;
//     }

//     Node* new_node = new Node(val);
//     Node* temp = head;
//     int current_pos = 0;
//     while(current_pos != pos-1){
//         temp = temp -> next;
//         current_pos++;
//     }
    
//     // temp is pointing to node at pos-1
//     new_node->next = temp->next;
//     temp->next = new_node;
// }

// // Updation at kth position in singly linked list...
// void updateAtPosition(Node* &head, int k, int val){
//     // Time Complexity -> O(n)...
//     Node* temp = head;
//     int curr_pos = 0;
//     while(curr_pos != k){
//         temp = temp->next;
//         curr_pos++;
//     }
//     temp->val = val;
// }


// // Deletion at -> starting, end and in-between...

// void deleteAtHead(Node* &head){
//     // Time Complexity -> O(1)
//     Node* temp = head; //node to be deleted
//     head = head->next;
//     free(temp); // Free up the memory space by using free function...
// }

// void deleteAtTail(Node* &head){
//     // Time Complexity -> O(n)...
//     // if tail node is given then also time complexity will be O(n), because in that case also we have to traverse from head(as we cannot traverse backwards in singly linked list)...
//     Node* second_last = head;
//     while(second_last->next->next != NULL){
//         second_last = second_last->next;
//     }

//     // now second_last points to second last node
//     Node* temp = second_last->next; // node to be deleted
//     second_last->next = NULL;
//     free(temp);
// }

// void deleteAtPosition(Node* &head, int pos){
//     // Time Complexity -> O(n)
//     if(pos == 0){
//         deleteAtHead(head);
//         return;
//     }

//     int curr_pos = 0;
//     Node* prev = head;
//     while(curr_pos != pos-1){
//         prev = prev->next;
//         curr_pos++;
//     }

//     // prev is pointing to node at pos-1
//     Node* temp = prev->next; // node to be deleted
//     prev->next = prev->next->next;
//     free(temp);
// }

// int main(){
//     Node* n = new Node(2);
//     display(n);
//     insertAtHead(n, 1);
//     display(n);
//     insertAtTail(n, 3);
//     display(n);
//     insertAtTail(n, 33);
//     display(n);
//     insertAtPosition(n, 4, 1);
//     display(n);
//     updateAtPosition(n, 2, 22);
//     display(n);
//     deleteAtHead(n);
//     display(n);
//     deleteAtTail(n);
//     display(n);
//     deleteAtPosition(n, 1);
//     display(n);

//     // insertAtK(n, 5, 1);
//     // display(n);
//     // int k = 2;
//     // insertAtK(n, 9, k); // zero based indexing for k
//     // display(n);
//     // insertAtK(n, 33, 3);
//     // display(n);

//     return 0;
// }





// Implementation of Linked List with class named LinkedList...
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

    void insertAtHead(int value){
        Node* new_node = new Node(value);
        if(head == NULL){
            head = new_node;
            return;
        }
        new_node->next = head;
        head = new_node;
    }

    void insertAtPosition(int pos, int value){

        if(pos == 1){
            insertAtHead(value);
            return;
        }
        int counter = 1;
        Node* temp = head;
        while(counter != pos-1){
            temp = temp->next;
            counter++;
        }
        Node* new_node = new Node(value);
        new_node->next = temp->next;
        temp->next = new_node;
    }

    void updateAtPosition(int pos, int value){
        if(pos == 1){
            head->val = value;
            return;
        }
        int counter = 1;
        Node* temp = head;
        while(counter != pos){
            temp = temp->next;
            counter++;
        }
        temp->val = value;
    }

    void deleteAtHead(){
        Node* temp = head;
        head = head->next;
        free(temp);
    }

    void deleteAtTail(){
        Node* temp = head;
        while(temp->next->next != NULL){
            temp = temp->next;
        }
        Node* last = temp->next;
        temp->next = NULL;
        free(last);
    }

    void deleteAtPosition(int pos){
        if(pos == 1){
            deleteAtHead();
            return;
        }
        Node* temp = head;
        int counter = 1;
        while(counter != pos-1){
            temp = temp->next;
            counter++;
        }
        Node* curr = temp->next;
        temp->next = temp->next->next;
        free(curr);
    }

    Node* ReverseLL(Node* &head){
        Node* prev = nullptr;
        Node* curr = head;
        while(curr != nullptr){
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    void display(){
        if(head == NULL){
            cout<<"NULL"<<endl;
            return;
        }
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<"->";
            temp = temp->next;
        } cout<<"NULL"<<endl;
    }
};

int main(){
    LinkedList ll;
    ll.insertAtTail(2);
    ll.insertAtHead(1);
    ll.insertAtTail(5);
    ll.insertAtPosition(3,3);
    ll.display();
    ll.updateAtPosition(4,4);
    ll.display();
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtTail();
    ll.display();
    ll.insertAtTail(8);
    ll.insertAtTail(9);
    ll.display();
    ll.head = ll.ReverseLL(ll.head);
    ll.display();

    return 0;
}




// Implementatin of linked list without defining different class for linked list...
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

// void display(Node* head){
//     if(head == NULL){
//         cout<<"NULL"<<endl;
//         return;
//     }
//     Node* temp = head;
//     while(temp != NULL){
//         cout<<temp->val<<"->";
//         temp = temp->next;
//     } cout<<"NULL"<<endl;
// }

// int main(){
//     Node* head = new Node(5);
//     display(head);

//     return 0;
// }
