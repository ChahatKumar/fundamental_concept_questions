///QUESTION
/*
 *
Is Armstrong Number

Take the following as input.

A number
Write a function which returns true if the number is an armstrong number and false otherwise, where armstrong number is defined as follows

371 is an Armstrong number as 371 = 3^3 + 7^3 + 1^3
Print the value returned.
Input Format:

Integer
Constraints:

0 < N < 1000000000
output format

Boolean
sample input

371

sample output

true
 */
///CODE
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    long long int n;
    cin>>n;
    long long int temp =n;

    int i=0;
    while(n>0)
    {
        i++;
        n=n/10;
    }
    int sum =0;
    n=temp;
    long long int N=n;

    for(int j=1;j<=i;j++)
    { int c = n%10;
        sum = sum + pow(c,i);
        n=n/10;

    }
    if(sum==N)
        cout<<boolalpha<<bool(1);
    else
        cout<<boolalpha<<bool(0);



    return 0;
}