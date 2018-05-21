#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std; 

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string morse[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> setS;
        string combination;
        for(auto i:words){
            combination="";
            for(auto j:i){
                combination+=morse[j-'a'];   
            }
            setS.insert(combination);
        }
        return setS.size();
    }
};

int main(){
	vector<string> words(4);
	words[0]="gin";
	words[1]="zen";
	words[2]="gig";
	words[3]="msg";
	cout<<Solution().uniqueMorseRepresentations(words);
}
