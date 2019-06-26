///QUESTION

/*Von Neuman Loves Binary

Given a binary number ,help Von Neuman to find out its decimal representation. For eg 000111 in binary is 7 in decimal.
Input Format:

The first line contains N , the number of binary numbers. Next N lines contain N integers each representing binary represenation of number.
Constraints:

N<=1000 Digits in binary representation is <=16.
output format

N lines,each containing a decimal equivalent of the binary number.
sample input

4
101
1111
00110
111111

sample output

5
15
6
63
*/
///CODE

#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i= 1;i<=n;i++)
    {  int j=0;
        int sum =0;
        long long int x;
        cin>>x;
        while(x>0)
        {
            int c = x%10;
            sum = sum + c*pow(2,j);
            j++;
            x=x/10;
        }
        cout<<sum<<endl;

    }
    return 0;
}

