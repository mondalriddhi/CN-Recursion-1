/*  Given the number 'n', find out and return the number of digits present in a number .
Input Format :
Integer n
Output Format :
Count of digits

Sample Input 1 :
 156
Sample Output 1 :
3
Sample Input 2 :
 7
Sample Output 2 :
1

*/

#include<iostream>
using namespace std;


int count(int n){
    //write your code here
    int c;
    if(n==0){
        return 0;
    }
    c=count(n/10);
   int ans=c+1;
    
    return ans;
}


int main(){
    int n;
    cin >> n;
  
    cout << count(n) << endl;
}



