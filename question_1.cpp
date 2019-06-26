///QUESTION
/*Simple Input

Given a list of numbers, stop processing input after the cumulative sum of all the input becomes negative.
Input Format:

A list of integers to be processed
        Constraints:

All numbers input are integers between -1000 and 1000.
output format

Print all the numbers before the cumulative sum become negative.
sample input

1
2
88
-100
49

sample output

1
2
88
*/
///CODE

#include<iostream>
using namespace std;
int main() {

    int n;
    int sum = 0;
    cin>>n;
    while ( sum >=0)
    {
        sum =sum + n;
        if(sum>=0)
        {

            cout<<n<<endl;
            cin>>n;}

    }


    return 0;
}
