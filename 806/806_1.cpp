#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        vector<int> ans(2,0);
        int sum=0;
        ans[0]=1;
        for(auto i:S){
            sum+=widths[i-'a'];
            if(sum>100){
                sum=widths[i-'a'];
                ans[0]++;
            }
        }
        ans[1]=sum;
        return ans;
    }
};
