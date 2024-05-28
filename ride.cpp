/*
ID: mohamed288
PROG: ride
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string s1 , s2;
    fin>>s1>>s2;
    long long p1 = 1, p2 = 1;
    for(int i = 0 ; i < s1.size(); i++)
        p1*= (s1[i] - 'A') + 1;
    for(int i = 0 ; i <s2.size();i++)
        p2*= (s2[i] - 'A')+ 1;

    if(p1%47 == p2%47)fout<<"GO"<<endl;
    else fout<<"STAY"<<endl;
}
