/*
ID: mohamed288
TASK: lostcow
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ofstream fout("lostcow.out");
    ifstream fin("lostcow.in");
    int x, y;
    fin>>x>>y;
    vector<int> v;
    if(x<y)
    {
        int distance = 1;
        while(x+distance < y)
        {
            v.push_back(x+distance);
            distance*= -2;
        }
        v.push_back(x+distance);
        int ans = 1;
        for(int i = 0 ; i < v.size()-1;i++) ans+=abs(v[i] - v[i+1]);
        if(v[v.size()-1]>y) ans-=(v[v.size()-1] - y);
        fout<<ans<<endl;
    }
    else
    {
        int distance = 1;
        while(x+distance > y)
        {
            v.push_back(x+distance);
            distance*= -2;
        }
        v.push_back(x+distance);
        int ans = 1;
        for(int i = 0 ; i < v.size()-1;i++) ans+=abs(v[i] - v[i+1]);
        if(v[v.size()-1]<y) ans-=(-v[v.size()-1] + y);
        fout<<ans<<endl;
    }
}
