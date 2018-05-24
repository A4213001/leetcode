#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	string s="123 456";
	int begin=0;
	for(int i=0;i<=s.length();i++){
		if(s[i]==' '||i==s.length()){
			reverse(&s[front],&s[i]);
			front=i+1;
		}
	}
}
