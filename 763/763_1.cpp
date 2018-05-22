#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    vector<int> partitionLabels(string S){
        vector<int> ans;
        map<char,int> mapS;
        for(int i=0;i<S.size();i++)
            mapS[S[i]]=i;
        int lastIndex=0,start=-1;
        for(int i=0;i<S.size();i++){
            lastIndex=max(lastIndex,mapS[S[i]]);
            if(lastIndex==i){
                ans.push_back(lastIndex-start);
                start=lastIndex;
            }
        }
        return ans;
    }
};
