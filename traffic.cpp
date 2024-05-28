#include<bits/stdc++.h>
using namespace std;
struct road{
    string ramp;
    int a,b;
};typedef struct road ROAD;
int main()
{
    ofstream fout("traffic.out");
    ifstream fin("traffic.in");
    int n;fin>>n;
    vector<ROAD> v(n);
    for(int i = 0 ; i < n ;i++) fin>>v[i].ramp>>v[i].a>>v[i].b;
    long long  low = 0, heigh = INT_MAX;
    for(int i = n-1; i >= 0; i--)
    {
        if(v[i].ramp=="none") //{low = max(v[i].a, low);heigh = min(v[i].b, heigh);}
            {
                if(v[i].a>= low) low= v[i].a;
                if(v[i].b<=heigh) heigh = v[i].b;
            }
        else if(v[i].ramp=="on"){low -= v[i].b; heigh-=v[i].a;}
        else{low+=v[i].a;heigh+=v[i].b;}
    }
    if(0>=low)fout<<0<<" "<<heigh<<endl;
    else fout<<low<<" "<<heigh<<endl;

    low = 0; heigh = INT_MAX;
    for(int i = 0; i < n ;i++)
    {
        if(v[i].ramp=="none") //{//low = max(v[i].a, low);heigh = min(v[i].b, heigh);}
                {
                    if(v[i].a>=low)low = v[i].a;
                    if(v[i].b<=heigh) heigh = v[i].b;
                }
        else if(v[i].ramp=="on"){low += v[i].a; heigh+=v[i].b;}
        else{low-=v[i].b;heigh-=v[i].a;}
    }
    //cout<<max(0,low)<<" "<<heigh<<endl;
    if(0>=low)fout<<0<<" "<<heigh<<endl;
    else fout<<low<<" "<<heigh<<endl;
}
