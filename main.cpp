#include <algorithm>
#include <cstring>
#include <climits>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <sstream>


#include "../utils/VectorUtils.hpp"
#include "../utils/PrintUtils.hpp"

// https://leetcode.com/problems/sort-array-by-parity/

// #include "../utils/HeapUtils.hpp"
// #include "../utils/BinarySearch.hpp"
// #include "../utils/TreeUtils.hpp"

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto __ __attribute__((unused)) = []() {              // NOLINT
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        if (A.empty()) return A;
        int left = 0;
        int right = A.size() - 1;
        while (left < right) {
            while (left < A.size() && A[left] % 2 == 0)
                ++left;
            while (right >= 0 && A[right] % 2 == 1)
                --right;
            if (left < right)
                swap(A[left], A[right]);
        }
        return A;
    }
};

void test1() {
    vector<int> v1{3,6,1,2,4};

    cout << "[2,4,3,1] ? " << Solution().sortArrayByParity(v1) << endl;
}

void test2() {

}

void test3() {

}