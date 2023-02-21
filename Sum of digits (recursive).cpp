/*  Write a recursive function that returns the sum of the digits of a given integer.
Input format :
Integer N
Output format :
Sum of digits of N

Sample Input 1 :
12345
Sample Output 1 :
15
Sample Input 2 :
9
Sample Output 2 :
9

*/

#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    // Write your code here

    if(n==0){
        return 0;
    }
    int ans=sumOfDigits(n/10);
    return ans+n%10;
}


int main() {
   int n;
   cin >> n;
   cout << sumOfDigits(n) << endl;
}

