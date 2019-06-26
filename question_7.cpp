///QUESTION

/*Print Series

Take the following as input.

A number (N1)
A number (N2)
Write a function which prints first N1 terms of the series 3n + 2 which are not multiples of N2.
Input Format:
Constraints:

0 < N1 < 100 0 < N2 < 100
output format

sample input

10
4

sample output

5
11
14
17
23
26
29
35
38
41
*/
///CODE
#include<iostream>
using namespace std;
int main() {
    int n1,n2;
    cin>>n1>>n2;
    int no=1;
    int x= 1;
    while(1 )
    {

        int c= 3*x + 2;

        if( c%n2 != 0)
        {
            if(no<=n1)
            {
                cout<<c<<endl;
                no++;
            }

        }

        if(no>n1)
        {
            break;
        }

        x++;
    }

    return 0;
}
