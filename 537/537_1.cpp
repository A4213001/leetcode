#include<string>
#include<sstream>
using namespace std;

class Solution {
    struct complex{
        int x,y;
        complex(int nx,int ny):x(nx),y(ny){}
    };
public:
    string complexNumberMultiply(string a, string b) {
        int xIndex;
        int x,y;
        stringstream ss;
        for(int i=0;i<a.length();i++){
            if(a[i]=='+')
                xIndex=i;
        }
        for(int i=0;i<xIndex;i++)
            ss<<a[i];
        ss>>x;
        ss.clear();
        for(int i=xIndex+1;i<a.length()-1;i++)
            ss<<a[i];
        ss>>y;
        ss.clear();
        complex complexA(x,y);
        
        for(int i=0;i<b.length();i++){
            if(b[i]=='+')
                xIndex=i;
        }
        for(int i=0;i<xIndex;i++)
            ss<<b[i];
        ss>>x;
        ss.clear();
        for(int i=xIndex+1;i<b.length()-1;i++)
            ss<<b[i];
        ss>>y;
        ss.clear();
        complex complexB(x,y);
        return to_string(complexA.x*complexB.x-complexA.y*complexB.y)+'+'+to_string(complexA.y*complexB.x+complexA.x*complexB.y)+'i';
    }
};
