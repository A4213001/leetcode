#include<vector>
using namespace std; 

class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ans;
        for(int i=0;i<=num;i++){
            int copy=i;
            int count=0;
            while(copy){
                if(copy&1)
                    count++;
                copy=copy>>1;
            }
            ans.push_back(count);
        }
        return ans;
    }
};
