///QUESTION
/*
 *
Pythagoras Triplet

Given a number N (denoting one of the legs of the triangle), Print its Pythagoras pair in increasing order if they exist. Otherwise, print "-1".
Input Format:

A single integer N
Constraints:

N <= 10^9
output format

Two numbers X and Y denoting the rest of the numbers of the Pythagorean triplet in increasing order.
sample input

3

sample output

4 5
 */
///CODE


#include<iostream>
using namespace std;
int main() {
    long int N;
    cin>>N;
    long int N2,N3,m,n;

    if(N%2==0)
    {
        m= N/2;
        n=1;
        N2 = m*m - n*n;
        N3 = m*m + n*n;

    }
    else

    {
        m = (N+1)/2;
        n= (N-1)/2;
        N2 = 2*m*n;
        N3 = m*m + n*n;
    }

    if ((N3*N3 == N*N + N2*N2) && N>0 && N2>0)
        cout<<N2<<" "<<N3;
    else
        cout<<-1;
    return 0;
}

