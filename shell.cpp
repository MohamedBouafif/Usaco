/*
ID: mohamed288
TASK: friday
LANG: C++
*/
#include <iostream>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
int main()
{
    ofstream fout ("shell.out");
    ifstream fin ("shell.in");
    int n;fin>>n;
    vector<int> v1(3) , v2(3), v3(3);
    v1[0] = 1; v2[1] = 1; v3[2] = 1;
    vector<int> res(3);
    while(n--)
    {
        int a,b,g;
        fin>>a>>b>>g;
        if(a==1&&b==2||a==2&&b==1)
        {
            //ken jet mawjouda fil 2
            int garbage = v2[1];
            v2[1] = v2[0]; v2[0] = garbage;
            //ken jet mawjouda fil 1
            garbage = v2[0];
            v1[0] = v1[1];v1[1] = garbage;
            //ken jet mawjouda fil 3
            garbage = v3[0];
            v3[0] = v3[1]; v3[1] = garbage;

        }
        if(a==1&&b==3||a==3&&b==1)
        {
           int garbage = v1[0];
            v1[0] = v1[2]; v1[2] = garbage;

            garbage = v2[0];
            v2[0] = v2[2]; v2[2] = garbage;

             garbage = v3[0];
            v3[0] = v3[2]; v3[2] = garbage;


        }
        if(a==2&&b==3||a==3&&b==2)
        {
           int garbage = v1[1];
            v1[1] = v1[2]; v1[2] = garbage;

            garbage = v2[1];
            v2[1] = v2[2]; v2[2] = garbage;

            garbage = v3[2];
            v3[2] = v3[1]; v3[1] = garbage;
        }
        if(v1[g-1]==1) res[0]++;
        if(v2[g-1]==1) res[1]++;
        if(v3[g-1]==1) res[2]++;

    }
    sort(res.begin(),res.end());
    fout<<res[res.size()-1]<<endl;

}
