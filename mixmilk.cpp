/*
ID: mohamed288
TASK: mixmilk
LANG: C++
*/
#include <iostream>
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout ("mixmilk.out");
    ifstream fin ("mixmilk.in");
    long long  c1,c2,c3;
    long long m1,m2,m3;
    fin>>c1>>m1>>c2>>m2>>c3>>m3;
    for(int i = 1 ; i <= 33;i++)
    {
        long long  amount  = min(m1,m2-c2);
        m2 +=amount;
        m1 -=  amount;


        amount  = min(m2, c3-m3);
        m3 +=amount;
        m2 -=amount;



        amount  = min(m3,c1-m1);
        m1 +=amount;
        m3 -= amount;

    }
    long long amount  = min(m1, c2- m2);
    m2 = m2 + amount;
    m1 -= amount;


    fout<<m1<<endl;
    fout<<m2<<endl;
    fout<<m3<<endl;
}
