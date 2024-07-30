/*
        Cantilever assignment..

*/



// #include<iostream>
// using namespace std;

// int main(){
//     // int x = 5, y = 10;
//     // int *ptr1 = &x, *ptr2 = &y;
//     // int temp = *ptr1;
//     // *ptr1 = *ptr2;
//     // *ptr2 = temp;
//     // cout<<*ptr1<<" "<<*ptr2;

//     int x = 5;
//     int *ptr = &x;
//     cout<<*ptr<<endl;
//     return 0;
// }


// #include <iostream>
// #include <string>

// using namespace std;

// string convertToRoman(int year) {
//     if (year == 0) {
//         return "";
//     } else if (year >= 1000) {
//         return "M" + convertToRoman(year - 1000);
//     } else if (year >= 900) {
//         return "CM" + convertToRoman(year - 900);
//     } else if (year >= 500) {
//         return "D" + convertToRoman(year - 500);
//     } else if (year >= 400) {
//         return "CD" + convertToRoman(year - 400);
//     } else if (year >= 100) {
//         return "C" + convertToRoman(year - 100);
//     } else if (year >= 90) {
//         return "XC" + convertToRoman(year - 90);
//     } else if (year >= 50) {
//         return "L" + convertToRoman(year - 50);
//     } else if (year >= 40) {
//         return "XL" + convertToRoman(year - 40);
//     } else if (year >= 10) {
//         return "X" + convertToRoman(year - 10);
//     } else if (year >= 9) {
//         return "IX" + convertToRoman(year - 9);
//     } else if (year >= 5) {
//         return "V" + convertToRoman(year - 5);
//     } else if (year >= 4) {
//         return "IV" + convertToRoman(year - 4);
//     } else {
//         return "I" + convertToRoman(year - 1);
//     }
// }

// int main() {
//     // Sample usage
//     //int sampleInput = 2000;
//     int sampleInput;
//     cin>>sampleInput;
//     string sampleOutput = convertToRoman(sampleInput);
//     cout << sampleOutput << endl;
//     return 0;
// }





// #include <iostream>
// #include <vector>
// using namespace std;
// vector<int> pfr(int num, int d = 2) {
//     if (num == 1) {
//         return {};
//     } else if (num % d == 0) {
//         vector<int> f = {d};
//         vector<int> rf = pfr(num / d, d);
//         f.insert(f.end(), rf.begin(), rf.end());
//         return f;
//     } else {
//         return pfr(num, d + 1);
//     }
// }
// int main() {
//     // Sample Input
//     int number;
//     cout << "Enter a positive integer: ";
//     cin >> number;

//     // Recursive Prime f
//     vector<int> recursivef = pfr(number);
//     for (int factor : recursivef) {
//         cout << factor << " ";
//     }
//     cout << endl;
//     return 0;
// }




#include <iostream>
#include <vector>

using namespace std;

// Node definition for the linked list
struct Node {
    int value;
    Node* next;
    Node(int val) : value(val), next(nullptr) {}
};

// Function to count the number of critical points
int countCriticalPoints(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return 0;
    }

    Node* current = head->next;
    int count = 0;

    while (current->next != nullptr) {
        // Check for local minima
        if (current->value < current->next->value && current->value < current->next->next->value) {
            count++;
        }
        // Check for local maxima
        else if (current->value > current->next->value && current->value > current->next->next->value) {
            count++;
        }
        current = current->next;
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    Node* head = nullptr;
    Node* tail = nullptr;

    // Create linked list
    for (int i = 0; i < n; ++i) {
        int value;
        cin >> value;
        if (head == nullptr) {
            head = new Node(value);
            tail = head;
        } else {
            tail->next = new Node(value);
            tail = tail->next;
        }
    }

    // Print the number of critical points
    cout << countCriticalPoints(head) << endl;

    // Clean up memory
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
