///QUESTION

/*Binary To Decimal

Take N (number in binary format). Write a function that converts it to decimal format and Print the value returned.
Input Format:
Constraints:

0 < N <= 1000000000
output format

sample input

101010

sample output

42
*/
///CODE

#include<iostream>
#include<math.h>
using namespace std;
int main() {
    long long int n;
    cin>>n;
    int i=0;
    int sum =0;
    while(n>0)
    { int c= n%10;
        sum = sum + c*pow(2,i);
        i++;
        n=n/10;
    }
    cout<<sum<<endl;

    return 0;
}

