///QUESTION
/*
Revising Quadratic Equations

Given coefficients of a quadratic equation , you need to print the nature of the roots (real and distinct , real and equal , imaginary).
Input Format:

First contains three coefficients a,b,c from the equation ax^2 + bx + c = 0.
Constraints:

-100 <= a, b, c <= 100
output format

Output contains one/two lines.First line contains nature of the roots .The next line contains roots separated by a space if they exist. If roots are imaginary do not print the roots.
sample input

1 -11 28

sample output

Real and Distinct
4 7

 */
///CODE

#include<iostream>
#include<math.h>
using namespace std;
int main() {
    float a,b,c,det;
    cin>>a>>b>>c;
    det = b*b - 4*a*c;
    if(det>0)
    {
        cout<<"real and distinct"<<endl;
        float r1 = (-b- sqrt(det))/float(2*a);
        float r2=  (-b + sqrt(det))/float(2*a);
        cout<<r1<<" "<<r2;
    }

    else if(det==0)
    {
        cout<<"real and equal"<<endl;
        float r1 = -b/float(2*a);
        cout<<r1<<" "<<r1;

    }
    else if(det<0)
    {
        cout<<"imaginary";


    }
    return 0;
}