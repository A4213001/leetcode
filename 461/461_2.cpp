#include<iostream>
using namespace std; 

class Solution {
public:
    int hammingDistance(int x, int y) {
        int count = 0;  
	    while(x!=0||y!=0){  
	        if ((x&1) != (y&1)) count++;  
	        x = x>>1;  
	        y = y>>1;  
	    }  
	    return count;  
    }
};

int main(){
	int x=1,y=4;
	cout<<Solution().hammingDistance(x,y);
}
