#include<iostream>
#include<string>
using namespace std; 

class Solution {
public:
    bool judgeCircle(string moves) {
    	if(moves.length()==0)
    		return true;
    	if(moves.length()%2)
			return false;
        int x=0,y=0;
        for(auto i:moves){
            switch(i){
                case 'U':y++;break;
                case 'D':y--;break;
                case 'R':x++;break;
                case 'L':x--;break;
            }
        }
        if(x==0&&y==0)
            return true;
        else
            return false;
    }
};

int main(){
	string moves_1="LUDLRUDD";
	cout<<Solution().judgeCircle(moves_1)<<endl;
	
	string moves_2="RLULRLUDDRDLRU";
	cout<<Solution().judgeCircle(moves_2);
}
