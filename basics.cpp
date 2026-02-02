// basics : conditionals ,loops etc

#include <iostream>
using namespace std;

// int main() {
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
// int n;
// cout << "Enter value of n: " << endl;
// cin >>n;
// int i =2;
//     cout << "table of n: " << endl;
// do {
//     cout << n << "x" << i << "=" << n*i << endl;
//     i+=2;

// }
// while (i<=10);



// functions: input given ---- output achieved
// return type/ function name/ input type

// return type fn name(input is written with name)
// int vanzhere(int n)
// {
//     //body
//     int result = 2*n;
//     return result;
// }

int main()
 {
// // write c++ code here
// int m= 10;
// int result = vanzhere(m);
// cout << result << endl; 

// Given an integer n. Your task is to calculate the sum of all natural numbers from 1 up to n (inclusive).If n is 0, the sum should be 0.
int n;
cin >> n;

int sum = 0;
for (int i =0; i<=n ; i++){
    sum+=i;
}
cout << sum;

    return 0;
}

//      return 0;


// }
