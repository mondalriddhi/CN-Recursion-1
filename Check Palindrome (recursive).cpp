/*  Check whether a given String S is a palindrome using recursion. Return true or false.
Input Format :
String S
Output Format :
'true' or 'false'

Sample Input 1 :
racecar
Sample Output 1:
true
Sample Input 2 :
ninja
Sample Output 2:
false

*/

#include <iostream>
using namespace std;



bool checkPalindrome(char input[]) {
    // Write your code here
int j = 0;
    while (input[j])
        j++;
    if(j<=1)
        return true;
    else if(j==2){
        if(input[0]==input[1])
            return true;
        else
            return false;
    }
    else{
        if(input[0]==input[j-1]){
            input[j-1] = '\0';
            return true && checkPalindrome(input+1);
        }
        else
            return false;
    }
    
}




int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}

