#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& ops) {
        int sum=0;
        stack<int> numStack;
        for(auto i:ops){
            if(i=="C")
                numStack.pop();
            else if(i=="D")
                numStack.push(numStack.top()*2);
            else if(i=="+"){
                int top1=numStack.top();
                numStack.pop();
                int top2=numStack.top();
                numStack.push(top1);
                numStack.push(top1+top2);
            }
            else{
                numStack.push(stoi(i));
            }    
        }
        while(!numStack.empty()){
            sum+=numStack.top();
            numStack.pop();
        }
        return sum;
    }
};

int main(){
	vector<string> ops={"5","-2","4","C","D","9","+","+"};
	cout<<Solution().calPoints(ops);
}


