#include <vector>
#include <iostream>
#include <algorithm>
#include <limits>
using namespace std;

// draw out examples to understand the conditions to add "(" and ")"
// O(4^n/(n)^0.5)
class Solution {
    public:
    vector<string> generateParentheses(int n) {
        vector<string> sol;
        backtrack(sol, "", 0, 0, n);
        return sol;
    }

    void backtrack(vector<string> &vec, string curr, int open, int close, int n) {
        if (open == n && close == n) {
            vec.push_back(curr);
            return;
        }
        // cond
        if (open < n) {
            curr.append("(");
            backtrack(vec, curr, open + 1, close, n);
            curr.pop_back();
        }
        if (close < open) {
            curr.append(")");
            backtrack(vec, curr, open, close + 1, n);
            curr.pop_back();
        }
    }
};