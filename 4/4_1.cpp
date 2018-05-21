#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> newNums(nums1.size()+nums2.size());
        int i=0,j=0;
        int index=0;
        int size1=nums1.size();
        int size2=nums2.size();
        while(i<size1||j<size2){
            if(i<size1&&j<size2)
                newNums[index++]=nums1[i]<nums2[j]?nums1[i++]:nums2[j++];
            else if(i<size1)
                newNums[index++]=nums1[i++];
            else
                newNums[index++]=nums2[j++];
        }
        int newSize=newNums.size();
        if(newSize%2)
            return newNums[newSize/2];
        else
            return (newNums[newSize/2-1]+newNums[newSize/2])/2.;
    }
}; 

int main(){
	vector<int> nums1={1,3};
	vector<int> nums2={2};
	cout<<Solution().findMedianSortedArrays(nums1,nums2);
}
