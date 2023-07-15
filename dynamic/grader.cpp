#include "histogram.h"
#include <cstdio>

int main() {
    int N;
    std::vector<int> H;
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        int h;
        scanf("%d", &h);
        H.push_back(h);
    }
    std::vector<long long> ans = max_area(H);
    for(int i = 0; i < ans.size(); i++) {
        printf("%lld\n", ans[i]);
    }
    return 0;
}