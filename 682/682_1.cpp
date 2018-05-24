#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;

int calPoints(vector<string>& ops) {
    int sum=0;
    string num;
    stack<int> numStack;
    for(int i=0;i<ops.size();i++){
        if(ops[i][0]=='C')
            numStack.pop();
        else if(ops[i][0]=='D')
            numStack.push(numStack.top()*2);
        else if(ops[i][0]=='+'){
            int top1=numStack.top();
            numStack.pop();
            int top2=numStack.top();
            numStack.push(top1);
            numStack.push(top1+top2);
        }
        else{
			num="";
        	for(int j=0;j<ops[i].size();j++){
        		num+=ops[i][j];
			}
			numStack.push(stoi(num));
		}    
    }
    while(!numStack.empty()){
        sum+=numStack.top();
        numStack.pop();
    }
    return sum;
}

int main(){
	vector<string> ops={"5","-2","4","C","D","9","+","+"};
	cout<<calPoints(ops);
}


