#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int i = s.size() - 1;
        while (i >= 0 && s[i] == ' ')
        {
            i--;
        }

        int len = 0;
        // Count length of last word
        while (i >= 0 && s[i] != ' ')
        {
            len++;
            i--;
        }
        return len;
    }
};

int main()
{
    Solution obj;
    string s;
    getline(cin, s); // Read full sentence including spaces

    int result = obj.lengthOfLastWord(s);
    cout << result << endl;

    return 0;
}
