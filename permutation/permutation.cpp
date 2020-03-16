#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
     public:
     vector<int> nums;
     vector<vector<int> > ans;
     int length;
     
     vector<vector<int> > permute(vector<int> &nums){
         this->length = nums.size();
         this->nums = nums;
         recur(0);
         return this->ans;
     }
     void swap(int &a,int &b){
         int temp; //写在公有成员变量中导致WA wrong answer
		 temp = a;// for循环里随便声明 作用域出不了循环
		 a = b;
		 b = temp;
	 } 
     void Print1(int x){
         cout<<x<<" ";
     }
     void recur(int cur){/*深度*/
         if(cur == length){
         ans.push_back(nums);
         }
         for(int i = cur;i<length;i++){
            
             swap(nums[i],nums[cur]);
             recur(cur+1);
             swap(nums[i],nums[cur]);
         }
     }
};

int Factorial(int abs){
    if(abs == 0) return 1;
    else return abs*Factorial(abs-1);
}

int main(){

    Solution s1 = Solution();
    vector<int> v;
    vector<vector<int> > vv;
    for(int i = 1; i<4 ; ++i){
        v.push_back(i);
    }
    vv = s1.permute(v);
    int vsize = v.size();
    int b = Factorial(vsize);
    for(int i = 0;i < b ; i++){
        for(int j = 0; j <vsize ; j++){
            cout<<vv[i][j]<<" ";
        }
        cout<<endl;
    }
    system("pause");
    return 0;
}