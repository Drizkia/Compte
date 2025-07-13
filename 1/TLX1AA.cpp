#include <unordered_set>
#include <cstdio>

int main(){
    int N, X;
        scanf("%d", &N);
    std::unordered_set<int> set;

    while (N--) {
        scanf("%d", &X);
            if (set.insert(X).second) {
                printf("%d\n", X);
            }
    }
    set.reserve(100000);
}