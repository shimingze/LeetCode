//可重集 元素重复的集合 全排列输出并且不重复输出
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

void pemute(int len,vector<int> &vv,vector<int> &v,int cur){
    if(cur == len){
        for(vector<int>::iterator iter = v.begin();iter != v.end();iter++){
            cout << *iter <<" ";
        }
        cout << endl;
    } //递归边界
     else{
         for(int i=0;i<len;i++){
             int timenow=0,timetot=0;
             for(int k=0;k<cur;k++){
                 for(int m=0;m<len;m++) if(v[m]==vv[k]) timenow++;
                 for(int j=0;j<len;j++) if(v[j]==vv[k]) timetot++;
             }
             if(timenow<timetot){
                 v[cur] = vv[i];
                 pemute(len,vv,v,cur+1);
             }
         }
     }
}

int main(){
    vector<int> v;
    int n;
    cin >> n;
    int len = n;
    while(n--){
    int midval = 0;
    cin >> midval;
    v.push_back(midval);
    }
    vector<int> ans;
    pemute(len,v,ans,1);
    return 0;
}