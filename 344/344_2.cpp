#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    string reverseString(string s) {
        return string(s.rbegin(),s.rend());
    }
};
