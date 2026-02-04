#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int h = haystack.size();
        int n = needle.size();

        if (n == 0) return 0;

        int i = 0, j = 0;
        while (j < n && i <= h - n) {
            if (haystack[i + j] != needle[j]) {
                i++;
                j = 0;
            } else {
                j++;
            }
        }

        if (j == n)
            return i;

        return -1;
    }
};

int main() {
    Solution obj;

    string haystack, needle;

    // Input strings (can include spaces)
    getline(cin, haystack);
    getline(cin, needle);

    int result = obj.strStr(haystack, needle);
    cout << result << endl;

    return 0;
}
