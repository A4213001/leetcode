using namespace std;

class Solution {
public:
    int findComplement(int num) {
        int ans=0;
        int last;
        for(int i=0;num;i++){
            last=num&1^1;
            for(int j=0;j<i;j++)
                last=last<<1;
            ans+=last;
            num=num>>1;
        }
        return ans;
    }
};
