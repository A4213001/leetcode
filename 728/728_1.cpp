#include<vector>
using namespace std;

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        int copy,num;
        bool tf;
        for(int i=left;i<=right;i++){
            copy=i;
            tf=1;
            while(copy){
                num=copy%10;
                if(num){    
                    if(i%num)
                        tf=0;
                    copy/=10;
                }
                else{
                    tf=0;
                    break;
                }
            }
            if(tf)
                ans.push_back(i);
        }
        return ans;
    }
};
