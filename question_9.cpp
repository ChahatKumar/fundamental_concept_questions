///QUESTION
/*Conversion (Fahrenheit to Celsius)

Take the following as input.

Minimum Fahrenheit value
Maximum Fahrenheit value
Step

Print as output the Celsius conversions. Use the formula C = (5/9)(F – 32) E.g. for an input of 0, 100 and 20 the output is
0 17
20 6
40 4
60 15
80 26
100 37
Input Format:
Constraints:

0 < Min < 100 Min < Max < 500 0 < Step
output format
 sample input

0
100
20

sample output

0 -17
20 -6
40 4
60 15
80 26
100 37
 */
///CODE
#include<iostream>
using namespace std;
int main() {

    int min,max,step;
    cin>>min>>max>>step;

    for( int i = min;i<=max;i+=step)
    {
        cout<<i<<" ";
        int c = 5*(i-32)/9;
        cout<<c<<endl;

    }
    return 0;
}