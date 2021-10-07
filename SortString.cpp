#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s[100];
    cin.get(); // to consume the next line char
    for(int i=0; i<n; i++){
        getline(cin, s[i]); // this is how strings are taken as input
    }
    cout<<endl;
    // sort(s, s+n); // lexicographical sorting
    for(int i=0; i<n; i++){
        cout<<s[i]<<endl;
    }
    return 0;
}
