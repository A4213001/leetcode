#include<string>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string box;
        int begin=0;
        string ans="";
        for(int i=0;i<s.length();i++){
            if(s[i]==' '||i==s.length()-1){
                box=i==s.length()-1?s.substr(begin,i-begin+1):s.substr(begin,i-begin);
                begin=i+1;
                box=string(box.rbegin(),box.rend());
                ans+=i==s.length()-1?box:box+' ';
            }
        }
        return ans;
    }
};

