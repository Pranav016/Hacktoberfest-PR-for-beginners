#include<bits/stdc++.h>
using namespace std;
int firstDuplicate(vector<int> a) {
    unordered_set<int> b;
    int res;
    bool present=false;
    
    for(int i=0;i<a.size();i++){
        if(b.find(a[i])!=b.end()){
            res=a[i];
            present=true;
            break;
        }
        else b.insert(a[i]);
    }
    if(present==true){
        return res;
    }
    else return -1;
}
