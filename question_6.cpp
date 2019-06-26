///QUESTION
/*Decimal To Octal

Take N (number in decimal format). Write a function that converts it to octal format. Print the value returned.
Input Format:
Constraints:

0 < N <= 1000000000
output format

sample input

63

sample output

77
*/
///CODE

#include<iostream>
#include<math.h>
using namespace std;

int main() {
    long long int n;
    cin>>n;
    int sum =0;
    int i =0;
    while(n>0)
    {
        int c= n%8;
        sum = sum + c*pow(10,i);
        i++;
        n=n/8;

    }
    cout<<sum;

    return 0;
}
