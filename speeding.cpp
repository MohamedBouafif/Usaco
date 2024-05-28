/*
ID: mohamed288
TASK: speeding
LANG: C++
*/
#include <iostream>
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout("speeding.out");
    ifstream fin("speeding.in");
    int n,m;
    fin>>n>>m;
    vector<pair<int,int>> v, w;
    for(int i = 0 ; i < n ;i++)
    {
        int x,y;
        fin>>x>>y;
        v.push_back({x,y});
    }
    for(int i = 0 ; i < m ;i++)
    {
        int x,y;
        fin>>x>>y;
        w.push_back({x,y});
    }

    int ans = 0;
    int i = 0,j = 0;
    while(i<n&&j<m)
    {
        int distance  = min(w[j].first, v[i].first);
        v[i].first-= distance;
        w[j].first -= distance;

        ans = max(ans, max(0, w[j].second - v[i].second));

        if(w[j].first==0) j++;
        if(v[i].first==0) i++;
    }
    fout<<ans<<endl;
}
