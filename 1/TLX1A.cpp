#include <unordered_set>
#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);

    int N, X;
        scanf("%d", &N);
    unordered_set<int> set;

    for (int i = 0; i < N; i++) {
        scanf("%d", &X);
            if (set.find(X) == set.end()) {
                cout << X << "\n";
                set.insert(X);
            }
    }
}