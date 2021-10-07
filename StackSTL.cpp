#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    for(int i=1; i<=5; i++){ // output will follow LIFO
        s.push(i);
    }
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}
