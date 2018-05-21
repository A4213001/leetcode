#include<iostream> 
#include<vector>
using namespace std;

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int> colMax(grid.size(),INT_MIN);
        vector<int> rowMax(grid[0].size(),INT_MIN);
        for(int i=0;i<grid[0].size();i++){
            for(auto j:grid[i]){
                if(j>rowMax[i])
                    rowMax[i]=j;
            }
        }
        for(int i=0;i<grid[0].size();i++){
            for(int j=0;j<grid.size();j++){
                if(grid[j][i]>colMax[i])
                    colMax[i]=grid[j][i];
            }
        }
        int copy;
        int sum=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                copy=grid[i][j];
                rowMax[i]>colMax[j]?grid[i][j]=colMax[j]:grid[i][j]=rowMax[i];
                sum+=grid[i][j]-copy;
            }
        }
        return sum;
    }
};

int main(){
	int ary[4][4]={{3,0,8,4},
			       {2,4,5,7},
			       {9,2,6,3},
			       {0,3,1,0}};
	vector<vector<int>> grid(4,vector<int>(4));
	for(int i=0;i<grid.size();i++){
		for(int j=0;j<grid[0].size();j++){
			grid[i][j]=ary[i][j];
		}
	}
	cout<<Solution().maxIncreaseKeepingSkyline(grid);
}
