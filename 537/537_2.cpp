#include<string>
using namespace std;

class Solution {  
    void getAB(const string& s, int& a, int& b) {  
        int i;  
        for(i=0; i<s.size(); ++i) {  
            if(s[i] == '+') {  
                a = stoi(s.substr(0, i));  
                break;  
            }  
        }  
        b = stoi(s.substr(i+1, s.size()-i-2));
    }  
public:  
    string complexNumberMultiply(string a, string b) {  
        int aa, ab, ba, bb;  
        getAB(a, aa, ab);  
        getAB(b, ba, bb);  
        return to_string(aa*ba - ab*bb) + "+" + to_string(ab*ba + aa*bb) + "i";  
    }  
};
