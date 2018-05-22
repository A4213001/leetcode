#include<iostream>
using namespace std; 

class Solution {
public:
    int hammingDistance(int x, int y) {
        int d=x^y;
        int count=0;
        while(d){
            if(d%2)
                count++;
            d/=2;
        }
        return count;
    }
};

int main(){
	int x=1,y=4;
	cout<<Solution().hammingDistance(x,y);
} 
