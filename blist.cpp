#include<bits/stdc++.h>
#include<fstream>
using namespace std;

struct vache {
    int debut, finn, seaux;
};

typedef struct vache Vache;

bool comparer(Vache v1, Vache v2) {
    return v1.debut <= v2.debut;
}

int main() {
    //ofstream fout("blist.out");
    //ifstream fin("blist.in");
    int n;
    cin >> n;
    vector<Vache> vaches(n);

    for(int i = 0 ; i < n ; i++) {
        cin >> vaches[i].debut >> vaches[i].finn >> vaches[i].seaux;
    }

    sort(vaches.begin(), vaches.end(), comparer);

    int total_besoins = 0, disponibles = 0;


    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            if(vaches[j].finn <= vaches[i].debut) disponibles += vaches[j].seaux;

        }

        total_besoins += vaches[i].seaux - min(vaches[i].seaux, disponibles);
        disponibles -= min(disponibles, vaches[i].seaux);


    }

    cout << total_besoins;
}
