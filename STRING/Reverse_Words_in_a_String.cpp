#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());

        string result = "";
        string word = "";
        int n = s.length();

        for (int i = 0; i < n; i++) {
            if (s[i] != ' ') {
                word += s[i];   
            } else {
                if (!word.empty()) {
                    reverse(word.begin(), word.end()); 
                    if (!result.empty())
                        result += " ";
                    result += word;
                    word = "";
                }
            }
        }

        if (!word.empty()) {
            reverse(word.begin(), word.end());
            if (!result.empty())
                result += " ";
            result += word;
        }

        return result;
    }
};

int main() {
    Solution obj;

    string s;
    getline(cin, s);   
    string ans = obj.reverseWords(s);
    cout << ans << endl;

    return 0;
}
