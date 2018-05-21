#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count=0;
        for(int i=0;i<S.size();i++){
            for(int j=0;j<J.size();j++){
                if(S[i]==J[j])
                    count++;
            }
        }
        return count;
    }
};

int main() {
    string J="aA",S="aAAbbbb";
    cout<<Solution().numJewelsInStones(J,S);
}
