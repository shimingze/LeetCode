#include <cstdio> 
#include <map>
#include <vector>
#include <string>
#include <iostream>
#include <queue>
#include <set>

using namespace std;

const int Maxn = 1000;
struct filesys{
	string file;
	string user;
}userGroup[Maxn];

int main()
{   
	
	
    set<string> FN;
    string user,file;
	int n;
	cin >> n;
    for(int i=0;i<n;i++){
		cin >> userGroup[i].user;
		cin >> userGroup[i].file;
		FN.insert(userGroup[i].file);
	}
    for(set<string>::iterator iter = FN.begin();iter!=FN.end();iter++){
		cout << *iter <<" ";
        for(int i = 0;i<n;i++){
		if(userGroup[i].file ==*iter ) cout<<userGroup[i].user<<' ';
	}
	}
	
	system("pause");
    return 0;
}