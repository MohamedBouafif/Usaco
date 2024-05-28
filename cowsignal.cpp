/*
ID: mohamed288
TASK: friday
LANG: C++
*/
#include <iostream>
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout("cowsignal.out");
    ifstream fin("cowsignal.in");
    int M,N,K;
    fin>>M>>N>>K;
    for(int i = 0 ; i < M;i++)
    {
        string s;
        fin>>s;
        string res;
        for(int j = 0 ; j < s.size(); j++)
        {
            string p;
            int l = j;
            while(s[l]==s[l+1]&& l+1 < s.size())
            {
                p+= s[l];
                l++;
            }
            p+=s[l];
            j = l;
            for(int k = 0 ; k < K ;k++)
            {
                    fout<<p;
                    res+=p;
            }

        }

        fout<<endl;
        for(int k = 0; k < K - 1; k++)
        {
            fout<<res<<endl;
        }

    }
}
