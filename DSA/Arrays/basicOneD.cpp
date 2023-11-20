#include<iostream>
using namespace std;

int main(){
    // Declaration    << datatype arrayname[arraysize]; >>
    // Initialization   << datatype arrayname[] = {1,2,3,4,5}; >>

    // int arr[];   // We cannot declare an array without its size

    int orr[6];     // oneD array Declaration..

    int arr[5] = {1,2,3,4,5};       // oneD array Initialization..

    arr[8] = 6;  // will also assign given value to out of range index..
    
    return 0;
}




// #include <iostream>
// #include <cmath>
// using namespace std;
// // Function to check if a number is prime
// bool isPrime(int n) {
//     if (n <= 1) {
//         return false;
//     }
//     for (int i = 2; i <= sqrt(n); ++i) {
//         if (n % i == 0) {
//             return false;
//         }
//     }
//     return true;
// }
// int main() {
//     int N;
//     cin >> N;

//     int A[N];
//     for (int i = 0; i < N; ++i) {
//         cin >> A[i];
//     }

//     long long sum = 0;

//     for (int i = 0; i < N; ++i) {
//         for (int j = i + 1; j < N; ++j) {
//             int diff = j - i;
//             if (isPrime(diff)) {
//                 sum += abs(A[j] - A[i]);
//             }
//         }
//     }

//     cout << sum << endl;

//     return 0;
// }
