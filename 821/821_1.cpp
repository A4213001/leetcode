#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        vector<int> ans;
        for(int i=0;i<S.length();i++){
            int shortDistance=INT_MAX;
            for(int j=i;j<S.length();j++){
                if(S[j]==C){
                    shortDistance=j-i;
                    break;
                }
            }
            for(int j=i;j>=0;j--){
                if(S[j]==C){
                    if(i-j<shortDistance)
                        shortDistance=i-j;
                    break;
                }
            }
            ans.push_back(shortDistance);
        }
        return ans;
    }
};
