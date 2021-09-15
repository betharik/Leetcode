#include <vector>
#include <iostream>
#include <stack>
#include <unordered_map>

using namespace std;

// O(4^n*n)
class Solution {
    public:

        unordered_map<char, vector<char>> genMap() {
            string alphabet = "abcdefghijklmnopqrstuvwxyz";
            stack<string> s;
            unordered_map<char, vector<char>> m;
            m['0'] = {'0'};
            m['1'] = {'1'};
            for (char i = '2'; i < '8'; ++i) {
                for (size_t j = 0; j < 26; ++j) {
                    if (i == 7 || i == 9) {
                        m[i] = {alphabet[j], alphabet[j+1], alphabet[j+2], alphabet[j+3]};
                        j += 3;
                    }
                    else {
                        char a = alphabet[j];
                        cout << a;
                        m[i] = {alphabet[j], alphabet[j+1], alphabet[j+2]};
                        j += 2;
                    }
                }
            }
            for (char i = '0'; i < '9'; ++i) {
                cout << "m[" << i << "] : ";
                for (size_t j = 0; j < m[i].size(); ++j) {
                    cout << m[i][j] << " ";
                }
                cout << endl;
            }
            return m;
        }
        
        // vector<string> phoneNumberMnemonics(string phoneNumber) {
            // string alphabet = "abcdefghijklmnopqrstuvwxyz";
            // stack<string> s;
            // unordered_map<int, vector<char>> m;
            // m[0] = {0};
            // m[1] = {1};
            // for (int i = 2; i < 8; ++i) {
            //     for (int j = 0; j < 26; ++j) {
            //         if (i == 7 || i == 9) {
            //             m[i] = {alphabet[j], alphabet[j+1], alphabet[j+2], alphabet[j+3]};
            //             j += 3;
            //         }
            //         else {
            //             m[i] = {alphabet[j], alphabet[j+1], alphabet[j+2]};
            //             j += 2;
            //         }
            //     }
            // }
            // for (int i = 0; i < 9; ++i) {
            //     cout << "m[" << i << "] : ";
            //     for (int j = 0; j < m[i].size(); ++j) {
            //         cout << m[i][j] << " ";
            //     }
            //     cout << endl;
            // }
            // s.push(phoneNumber[0]);
            // while (!s.empty) {
            //     char curr 
            // }
            // return {phoneNumber};
        // }
};

int main() {
    Solution a;
    // unordered_map<char, vector<char>> map = a.genMap();
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    unordered_map<char, vector<char>> map = a.genMap();
    
    return 0;
}