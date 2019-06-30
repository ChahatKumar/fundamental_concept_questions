///QUESTION
/*
 *
Count Digits

Take the following as input.
A number
A digit
Write a function that returns the number of times digit is found in the number. Print the value returned.
Input Format:

Integer (A number) Integer (A digit)
Constraints:

0 <= N <= 1000000000 0 <= Digit <= 9
output format

Integer (count of times digit occurs in the number)
sample input

5433231
3

sample output

3
 */
///CODE
#include<iostream>
using namespace std;
int main() {
    long long int n;
    int d;
    cin>>n>>d;
    int i=0;

    while(n>0)
    {
        long long int c= n%10;
        if(c==d)
            i++;
        n=n/10;

    }
    cout<<i;
    return 0;
}