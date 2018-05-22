#include<vector>
using namespace std;

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++){
            int copy=i;
            bool valid=1;
            while(copy){
                int num=copy%10;
                if(num){    
                    if(i%num)
                        valid=false;
                    copy/=10;
                }
                else{
                    valid=0;
                    break;
                }
            }
            if(valid)
                ans.push_back(i);
        }
        return ans;
    }
};
