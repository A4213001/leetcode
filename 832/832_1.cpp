#include<iostream>
#include<vector>
using namespace std;
 
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int outSize=A.size();
        int inSize=A[0].size();
        for(int i=0;i<outSize;i++){
            for(int j=0;j<inSize/2;j++){
                swap(A[i][j],A[i][inSize-j-1]);
            }
        }
        for(int i=0;i<outSize;i++){
            for(int j=0;j<inSize;j++){
                A[i][j]=A[i][j]==0?1:0;
            }
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
