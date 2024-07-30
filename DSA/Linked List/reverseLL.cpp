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
// };

// Node* reverseLL(Node* &head){

//     Node* prevptr = NULL;
//     Node* currptr = head;

//     //currptr->next = prevptr;
//     //move all 3 ptrs by one step ahead
//     while(currptr != NULL){
//         Node* nextptr= currptr->next;
//         currptr->next = prevptr;
//         prevptr = currptr;
//         currptr = nextptr;
//     }

//     //when this loop ends, prevptr pointing to my last node which is new head
//     Node* new_head = prevptr;
//     return new_head;

// }

// void reveseRecLL(Node* &head){
//     if(head == NULL) return;

// }

// int main(){
//     LinkedList ll;
//     ll.insertAtTail(1);
//     ll.insertAtTail(2);
//     ll.insertAtTail(3);
//     ll.insertAtTail(4);
//     ll.insertAtTail(5);
//     ll.insertAtTail(6);
//     ll.display();
//     ll.head = reverseLL(ll.head);
//     ll.display();

//     return 0;
// }







// #include<bits/stdc++.h>
// using namespace std;
// class Node {
// public:
//     int val;
//     Node* next;
//     Node(int val) {
//         this->val = val;
//         this->next = nullptr;
//     }
// };
// Node* createList(vector<int>& arr) {
//     Node* dummy = new Node(0);
//     Node* head = dummy;
//     for (int num : arr) {
//         head->next = new Node(num);
//         head = head->next;
//     }
//     return dummy->next;
// }
// Node* reverseList(Node* l1) {
//     Node* prev = nullptr;
//     Node* curr = l1;
//     while (curr != nullptr) {
//         Node* next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//     }
//     return prev;
// }
// void printList(Node* head) {
//     while (head) {
//         cout << head->val << " ";
//         head = head->next;
//     }
//     cout << endl;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> v;
//     for (int i = 0;i < n;i++) {
//         int a;
//         cin >> a;
//         v.push_back(a);
//     }
//     Node* l1 = createList(v);
//     l1 = reverseList(l1);
//     printList(l1);
// }





// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node* next;
//     Node(int val){
//         this->val = val;
//         this->next = nullptr;
//     }
// };
// Node* createList(vector<int>& arr){
//     Node* dummy = new Node(0);
//     Node* head = dummy;
//     for(int num : arr){
//         head->next = new Node(num);
//         head = head->next;
//     }
//     return dummy->next;
// }
// Node* ReverseList(Node* l1){
//     Node* prev = nullptr;
//     Node* curr = l1;
//     while(curr != NULL){
//         Node* next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//     }
//     return prev;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int ways(int n) {
//     if (n <= 0) {
//         return 0;
//     }
//     if (n == 1 || n == 2) {
//         return n;
//     }
//     return ways(n - 1) + ways(n - 2);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << ways(n);
// }




// #include<iostream>
// using namespace std;
// int ways(int n){
//     if(n<=0) return 0;
//     if(n==1 || n==2) return n;
//     return ways(n-1) + ways(n-2);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<ways(n);

//     return 0;
// }



#include<iostream>
#include<vector>
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
    Node* createList(vector<int> &v){
        Node* dummy = new Node(0);
        Node* head = dummy;
        for(int num:v){
            head->next = new Node(num);
            head = head->next;
        }
        return dummy->next;
    }
    Node* reverseList(Node* l1){
        Node* prev = nullptr;
        Node* curr = l1;
        while(curr != nullptr){
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    void printList(Node* head){
        while(head){
            cout<<head->val<<" ";
            head = head->next;
        }
    }

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    Node* l1 = createList(v);
    l1 = reverseList(l1);
    printList(l1);

    return 0;
}