///QUESTION
/*
Help Ramu

Ramu often uses public transport. The transport in the city is of two types: cabs and rickshaws. The city has n rickshaws and m cabs, the rickshaws are numbered by integers from 1 to n, the cabs are numbered by integers from 1 to m.

Public transport is not free. There are 4 types of tickets:

A ticket for one ride on some rickshaw or cab. It costs c1 ruppees;
A ticket for an unlimited number of rides on some rickshaw or on some cab. It costs c2 ruppees;
A ticket for an unlimited number of rides on all rickshaws or all cabs. It costs c3 ruppees;
A ticket for an unlimited number of rides on all rickshaws and cabs. It costs c4 ruppees.

Ramu knows for sure the number of rides he is going to make and the transport he is going to use. He asked you for help to find the minimum sum of ruppees he will have to spend on the tickets.
Input Format:

Each Test case has 4 lines which are as follows:

The first line contains four integers c1, c2, c3, c4 (1 ≤ c1, c2, c3, c4 ≤ 1000) — the costs of the tickets. The second line contains two integers n and m (1 ≤ n, m ≤ 1000) — the number of rickshaws and cabs Ramu is going to use. The third line contains n integers ai (0 ≤ ai ≤ 1000) — the number of times Ramu is going to use the rickshaw number i. The fourth line contains m integers bi (0 ≤ bi ≤ 1000) — the number of times Ramu is going to use the cab number i.
Constraints:
output format

Print a single number — the minimum sum of ruppes Ramu will have to spend on the tickets.
sample input

2
1 3 7 19
2 3
2 5
4 4 4
4 3 2 1
1 3
798
1 2 3

sample output

12
1
*/
///CODE


#include<iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int i,c1,c2,c3,c4,n,m;
        cin>>c1>>c2>>c3>>c4>>n>>m;
        int a[n],b[m];
        //for rikshaw
        int sum1 =0;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            sum1 = sum1 + min(a[i]*c1,c2);
        }
        sum1 = min(sum1,c3);
        //for cab
        int sum2=0;
        for(i=1;i<=m;i++)
        {
            cin>>b[i];
            sum2 = sum2 + min(b[i]*c1,c2);
        }
        sum2 = min(sum2,c3);

        int ans = min(sum1+sum2,c4);
        cout<<ans<<endl;
    }
    return 0;
}

