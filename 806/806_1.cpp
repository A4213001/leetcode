class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        vector<int> ans(2,0);
        int sum=0;
        ans[0]=1;
        map<char,int> mapW;
        for(char i='a';i<='z';i++){
            mapW[i]=(widths[i-'a']);
        }
        for(auto i:S){
            sum+=mapW[i];
            if(sum>100){
                sum=0+mapW[i];
                ans[0]++;
            }
        }
        ans[1]=sum;
        return ans;
    }
};
