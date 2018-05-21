#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
class Solution {
public:
     vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(auto& x: A){
            reverse(x.begin(), x.end());
            for(auto& y: x) y ^= 1;
        }
        return A;
    }
};

int main(){
	vector<vector<int>> A(3,vector<int>(3));
	int ary[3][3]={{1,1,0},
			  	   {1,0,1},
			 	   {0,0,0}};
	for(int i=0;i<A.size();i++){
		for(int j=0;j<A[0].size();j++){
			A[i][j]=ary[i][j];
		}
	}
	A=Solution().flipAndInvertImage(A);
	for(int i=0;i<A.size();i++){
		for(auto j:A[i])
			cout<<j<<" ";
		cout<<endl;
	}
}
