#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout("shuffle.out");
    ifstream fin("shuffle.in");
    int n;fin>>n;
    vector<int> a(n);
    for(int i= 0; i < n;i++)fin>>a[i];
    vector<string> v(n);
    vector<string> initial_pos(n);
    for(int i = 0 ; i < n ;i++) fin>>v[i];
    for(int i = 1; i <= n ;i++)
    {
        int j = i-1;
        int pos = a[a[a[j] -1]-1]-1;
        initial_pos[j] = v[pos];
    }
    for(int i = 0 ; i < n ; i++)fout<<initial_pos[i]<<endl;
}
