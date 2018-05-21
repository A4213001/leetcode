#include<iostream> 
#include<vector>
using namespace std;

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
    	int row=grid.size();
		int col=grid[0].size();
		vector<int> colMax(grid.size(),INT_MIN);
        vector<int> rowMax(grid[0].size(),INT_MIN);
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                rowMax[i]=grid[i][j]>rowMax[i]?grid[i][j]:rowMax[i];
                colMax[i]=grid[j][i]>colMax[i]?grid[j][i]:colMax[i];          
            }
        }
        int re=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                re+=min(rowMax[i],colMax[j])-grid[i][j];
            }
        }
        return re;
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
