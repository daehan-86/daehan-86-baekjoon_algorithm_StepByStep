#include "histogram.h"

std::vector<long long> max_area(std::vector<int> H) {
    std::vector<long long> ans;
    ans.push_back(H[0]);
    ans.push_back(0);
    ans.push_back(H[0] + 1);
    return ans;
}