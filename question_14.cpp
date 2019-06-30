///QUESTION
/*
Basic Calculator

Write a program that works as a simple calculator.

1.It reads a character (ch)
2.If ch is among '+', '-', '*', '/' or '%' it furthur takes two numbers (N1 and N2 as input). It then performs appropriate appropriate operation between numbers and print the number. 3.If ch is 'X' or 'x', the program terminates.
4.If ch is any other character, the program should print 'Invalid operation. Try again.' and seek inputs again (starting from character).

Input Format:
Constraints:

Numbers should be greater than 0 and lesser than 100000000. For division and modulus, 2nd number should not be 0.
output format
sample input

*
1
2
/
4
2
+
3
2
;
X

sample output

2
2
5
Invalid operation. Try again.
 */
///CODE
#include<iostream>
using namespace std;
int main() {
    while(1)
    {
        char ch;
        cin>>ch;
        if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='%')
        {   long long int n1,n2,n3;
            cin>>n1>>n2;
            if(ch=='+')
                n3=n1+n2;
            else if(ch=='-')
                n3=n1-n2;
            else if(ch=='*')
                n3=n1*n2;
            else if(ch=='/')
            {
                if(n2==0)
                    break;
                else
                    n3=n1/n2;
            }
            else if(ch=='%')
            {
                if(n2==0)
                    break;
                else
                    n3=n1%n2;
            }
            cout<<n3<<endl;
        }
        else if(ch=='x' ||ch=='X')
            break;

        else
        {
            cout<<"Invalid operation. Try again."<<endl;
            continue;
        }
    }
    return 0;
}

