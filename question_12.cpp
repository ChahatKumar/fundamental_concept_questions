///QUESTION
/*Increasing Decreasing Sequence

Take the following as input.

A number (N)
Take N more numerical inputs
The N inputs for a sequence S = s1, s2, .., sN. Compute if it is possible to split sequence into two sequences -
s1 to si and si+1 to sN such that first sequence is strictly decreasing and second is strictly increasing. Print true/false as output.
Input Format:
Constraints:

0 < N < 1000 Each number in sequence S is > 0 and < 1000000000
output format
sample input

5
1
2
3
4
5

sample output

true
 */
///CODE
#include <iostream>
using namespace std;
int main() {

    int i,j,n;
    cin>>n;
    long long int x=0;
    for(i=1;i<=n;i++)
    {
        long long int s;
        cin>>s;
        if(s<x || x==0)
        {
            j=i;
            x=s;
        }
        else
        {
            x=s;
            j++;
            break;
        }
    }
    if(j==n)
        cout<<"true";
    else
    {
        for(i=j+1;i<=n;i++)
        {
            long long int s;
            cin>>s;
            if(s>x)
            {
                j=i;
            }
            x=s;
        }
    }
    if(j==n)
        cout<<"true";
    else
        cout<<"false";

    return 0;
}


