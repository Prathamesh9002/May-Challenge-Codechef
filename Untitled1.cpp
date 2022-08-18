#include<bits/stdc++.h>
using namespace std;
// Driver Program to test above functions
int main()
{
    vector<int> v={2,14,9,8,9,0,7,6,7,9,2,13};
    vector<int> res;
    unordered_map<int, int> map;
    for(int j=0;j<12;j++){
        map[v[j]]++;
    }
    for(int i=0;i<12;i++){
        if(map[v[i]]==1){
            res.push_back(v[i]);
        }
    }
    
    for(int k=0;k<12;k++){
        if(map[v[k]]>1){
            while(map[v[k]>0]){
                res.push_back(v[k]);
                map[v[k]]--;
            }
        }
    }
    
    for(int i=0;i<12;i++){
        cout<<res[i]<<endl;
    }
	return 0;
}