#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;

    vector<int> A(N);

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d ", &A[i]);
        if (A[i] & 2) {
            printf("%d ", A[i]);
        }
    }
}