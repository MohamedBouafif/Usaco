/*
ID: mohamed288
TASK: gift1
LANG: C++
*/
#include<bits/stdc++.h>
#include <iostream>
#include <fstream>
using namespace std;
int main()
{ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");

    int np;fin>>np;

    unordered_map<string,int> mp;
    vector<string> v;
    for(int i = 0 ;i < np ;i++)
    {
        string name;
        fin>>name;
        mp[name] =0;
        v.push_back(name);

    }
    for(int i = 0 ;i < np;i++)
    {
        string giver;
        fin>>giver;

        int money , nb;
        fin>>money>>nb;

        if(nb!=0)
        {
            mp[giver] += money%nb - money;
            for(int j = 0 ; j < nb ;j++)
            {
                string receiver;fin>>receiver;
                mp[receiver] += money/nb;
            }
        }


    }

    for(int i = 0 ; i < np; i++){
        fout<<v[i]<<" "<<mp[v[i]]<<endl;
    }

    return 0;
}
