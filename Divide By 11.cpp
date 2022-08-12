/*
Given a number n, the task is to find the remainder when n is divided by 11. The input number may be very large.

Since the given number can be very large, you can not use n % 11.

Input Specification:
inputs a large number in the form of a string

Output Specification:
Return the remainder modulo 11 of input1

Example1:
Input : str = 13589234356546756
Output : 6

Example2:
Input : str = 3435346456547566345436457867978
Output : 4

Example3:
input: str = 121
Output: 0

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
 string s;
 cin>>s;
 int l=s.size();
 int rem=0;
 int curr;
 for(int i=0;i<l;i++)
 {
     curr=rem*10+(s[i]-'0');
     rem=curr%11;
 }
 cout<<rem;
 
    return 0;
}
