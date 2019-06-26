///QUESTION

/*Delhi's Odd Even

Due to growing Traffic Problem Kejriwal wants to devise a new scheme. The scheme is as follows, each car will be allowed to run on Sunday if the sum of digits which are even is divisible by 4 or sum of digits which are odd in that number is divisible by 3. However to check every car for the above criteria can't be done by the Delhi Police. You need to help Delhi Police by finding out if a car numbered N will be allowed to run on Sunday?
Input Format:

The first line contains N , then N integers follow each denoting the number of the car.
Constraints:

N<=1000 Car No >=0 && Car No <=1000000000
output format

N lines each denoting "Yes" or "No" depending upon whether that car will be allowed on Sunday or Not !
sample input

2
12345
12134

sample output

Yes
No
*/
///CODE

#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i= 1;i<=n;i++)
    {
        long long int cno;
        cin>>cno;
        int sum1=0,sum2=0;

        while(cno>0)
        {
            int x = cno%10;
            if(x%2==0)
            {
                sum1 = sum1 +x;
            }
            else if(x%2!=0)
            {
                sum2 = sum2+x;

            }
            x++;
            cno = cno/10;
        }

        if( sum1%4==0 || sum2%3==0)
            cout<<"YES"<<endl;

        else cout<<"NO"<<endl;

    }
    return 0;
}