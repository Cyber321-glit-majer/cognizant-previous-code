/*
Given a positive whole number n, find the smallest number which has the very same digits existing in the whole number n and is greater than n. In the event that no such certain number exists, return – 1.

Note that the returned number should fit in a 32-digit number, if there is a substantial answer however it doesn’t fit in a 32-bit number, return – 1.

Example 1:
Input: n = 12
Output: 21

Explanation:  Using the same digit as the number of permutations, the next greatest number for 12 is 21.

Example 2:
Input: n = 21
Output: -1

Explanation:  The returned integer does not fit in a 32-bit integer

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    
int n;
cin>>n;

int rev=0;
int num = n;
while(num!=0)
{
int temp = num%10;
rev = rev*10+ temp;
num /= 10;
}
if(n==0)
cout<<-1;
if(n>rev)
{
cout<<-1;
}
else
cout<<rev;
}
