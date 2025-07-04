/*Given a two-digit positive integer n
, find the sum of its digits.

Input
The first line contains an integer t
 (1≤t≤90
) — the number of test cases.

The only line of each test case contains a single two-digit positive integer n
 (10≤n≤99
).

Output
For each test case, output a single integer — the sum of the digits of n
.*/

#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int sum = 0;
        while(n > 0){
            int digit = n % 10;
            sum = sum + digit;
            n = n/10;
        }
        cout << sum << endl;
    }
}