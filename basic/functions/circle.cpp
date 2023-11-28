// To print the area and circumference of a circle
// #include<iostream>
// using namespace std;
// void circle(float r){
//     float pi = 3.14;
//     float area = pi*r*r;
//     float circumference = 2*pi*r;
//     cout<<"Area and Circumference is: "<<area<<" "<<circumference<<endl;
// }
// int main(){
//     circle(7);
// }

// lcm
// #include<iostream>
// using namespace std;
// int min(int a,int b){
//     if(a<b) return a;
//     else return b;
//     }
// int gcd(int a,int b){
//     for(int i=min(a,b);i>1;i--){
//         if(a%i==0 && b%i==0){
//             return i;
//         }
//     }
//     cout<<gcd;
// }
// int main(){
//     int x,y;
//     int gc = 0;
//     int lcm;
//     cout<<"enter a,b";
//     cin>>x>>y;
//     gc = gcd(x,y);
//     lcm = (x*y)/(gc);
//     cout<<lcm<<" "<<gc;
//     return 0;
// }

// Check Armstrong number or not
// #include<iostream>
// using namespace std;
// int p(int a,int b){
//     int res = 1;
//     for(int i=0;i<b;i++){
//         res *= a;
//     }
//     return res;
// }
// int main(){
//     int n;
//     int a = 0;
//     cout<<"Enter n: ";
//     cin>>n;
//     int t = n;
//     int count=0;
//     for(int i=n;i>0;i=i/10){
//         count++;
//     }

//     while(t){
//         int l = t%10;
//         a += p(l,count);
//         t=t/10;
//     }

//     if(n==a){
//         cout<<"Armstrong"<<endl;
//     }
//     else{
//         cout<<"Not Armstrong"<<endl;
//     }
//     cout<<a<<endl;
//     cout<<n;

//     return 0;
// }



// Rotate array by 90 degree

// #include<iostream>
// #include<algorithm>
// using namespace std;
// const int max_size = 100;
// int main()
// {
//     int n;
//     cin >> n;

//     int arr[max_size][max_size];
//     for (int i = 0;i < n;i++) {
//         for (int j = 0;j < n;j++) {
//             cin >> arr[i][j];
//         }
//     }
//     int temp[max_size][max_size];
//     for (int i = 0;i < n;i++) {
//         for (int j = 0;j < n;j++) {
//             temp[i][j] = arr[j][i];
//         }
//     }
//     for (int i = 0;i < n;i++) {
//         for (int j = 0;j < n;j++) {
//             arr[i][j] = temp[i][j];
//         }
//     }

//     for (int i = 0;i < n;i++) {
//         for (int j = 0;j < n / 2;j++) {
//             swap(arr[i][j], arr[i][n - j - 1]);
//         }
//     }

//     for (int i = 0;i < n;i++) {
//         for (int j = 0;j < n;j++) {
//             cout << arr[i][j];
//         }
//         cout << endl;
//     }
// }

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
cout<<endl;
    int trr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            trr[i][j] = arr[j][i];
        }
    } 

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j] = trr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            swap(arr[i][j],arr[i][n-j-1]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}