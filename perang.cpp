#include <bits/stdc++.h>
using namespace std;

int main () {

    // M = Harta

    map <int, map<int, int>> harta;

    int X;
        scanf("%d", &X);
    
        for (int i = 0; i < X; i++) {
            int X, Y, W;
            cin >> X >> Y >> W;

            harta[X][Y] = W;
        }
        
for (auto& s:harta) {
    int x = s.first;
    for (auto& ss:s.second) {
        int y = ss.first;
        int w = ss.second;
        cout << "Koordinat (" << x << ", " << y << ") = " << w << endl;
    }
}

}