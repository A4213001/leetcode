#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count=0;
        for(auto i:S){
            for(auto j:J){
                if(i==j)
                    count++;
            }
        }
        return count;
    }
};

int main() {
    string J,S;
    cin>>J>>S; 
    cout<<Solution().numJewelsInStones(J,S);
}
