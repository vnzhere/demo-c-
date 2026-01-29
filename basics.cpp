#include <iostream>
using namespace std;

int main() {
//     (odd even)
    // int num;
    // cout << "Enter a number: ";
    // cin >> num;

    // if (num % 2 == 0)
    //     cout << num << " is Even";
    // else
    //     cout << num << " is Odd";



// #warning THIS IS THE HELLO VERSION

//     int n= 10;
//     for (int i=0; i<5; i++){
//         cout << "hello" << endl;
//     }


// 3 nos and unka prod
// int a,b,c;
// cin >> a;
// cin >> b;
// cin >> c;

// int d= a*b*c;
// cout<< "The product is :" << d<< endl;


// 2 nos and unka average
// int a,b;
// cin >> a;
// cin >> b;
// int average= (a+b)/2;
// cout << "The average is: " << average << endl;


// sum of 10 numbers
// int num;
// int sum =0;
// cout << "Enter 10 numbers: \n";
// for (int i=1; i<=10; i++){
//     cin >> num;
//     sum += num;
// }
// cout<< "Sum = " << sum << endl;

// sum of 10 even numbers

    // int num, sum = 0, count = 0;

    // cout << "Enter even numbers:\n";

    // while (count < 10) {
    //     cin >> num;

    //     if (num % 2 == 0) {
    //         sum += num;
    //         count++;
    //     }
    // }

    // cout << "Sum = " << sum << endl;


    // sum of even nos between 20 and 40 both included
    // int sum = 0;
    // for (int i= 20; i<=40; i+=2){
    //     sum += i;
    // }

    // cout << "Sum of even nos between 20 and 40 = " << sum << endl;

    // print all nos from 1 to n and print how amnt are even

    // int n , evencount=0;
    // cout << "Enter n: ";
    // cin >> n;
    // for (int i=1; i<=n ; i++){
    //     cout << i << endl;
    //     if(i % 2 == 0)
    //     evencount++;
    // }

    // cout << "Total even numbers count:" << evencount << endl;


    // takes 10 nos and then prints sum plus largest no

    // int num, sum=0, largest;
    // cout << "enter 10 numbers :\n";
    // for (int i=1; i<=10; i++){
    // cin>> num;
    // sum += num;

    // if (num > largest) {
    //         largest = num;
    //     }
    // }
    // cout << "The sum is: " << sum << endl;
    // cout << "Largest = " << largest << endl;

    // takes a no and prints multiplication table of n for even results.
int n;
cout << "Enter value of n: " << endl;
cin >>n;
int i =2;
    cout << "table of n: " << endl;
do {
    cout << n << "x" << i << "=" << n*i << endl;
    i+=2;

}
while (i<=10);


     return 0;


}
