///QUESTION

/*Print reverse

Take N as input, Calculate it's reverse also Print the reverse.
Input Format:
Constraints:

0 <= N <= 1000000000
output format

sample input

123456789

sample output

987654321

C++

Custom Input

Output :
*/
///CODE

#include<iostream>
using namespace std;
int main() {
    long long int x;
    cin>>x;
    int a= 10;
    while (x>0)
    {
        cout<<x%a;
        x=x/10;
    }
    return 0;
}