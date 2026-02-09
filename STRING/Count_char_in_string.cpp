#include <iostream>
#include <unordered_map>
using namespace std;

void countChar(string s){
    int cnt=0;
    for (int i = 0; i < s.size(); i++){
        if(s[i] == ' ') continue;
        cnt++;
    }
    cout << "Number of characters in String is: "<< cnt;
}

int main() {
    string s;
    getline(cin, s);
    countChar(s);
    return 0;
}
