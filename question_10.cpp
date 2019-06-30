///QUESTION
/*
 * Check prime

Take as input a number N, print "Prime" if it is prime if not Print "Not Prime".
Input Format:
Constraints:

2 < N <= 1000000000
output format
sample input

3

sample output

Prime
*/
///CODE
#include<iostream>
using namespace std;

int main() {
    int i;
    long long int n;
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"Not Prime";
            return 0;
        }
    }
    if(i==n)
        cout<<"Prime";
    return 0;
}