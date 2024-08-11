#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    vector<string> v;
    v.push_back("fligower");
    v.push_back("fligow");
    v.push_back("flight");
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;
    //hamko 1st and last elsement ka beech me comparision karna hai;
    // the we get the longest common prefix;

    string s=v[0];
    string t=v[v.size()-1];

    int i=0;
    int j=0;
    while(i<s.size() && j<t.size()){
        if(s[i]==t[j]){
            cout<<s[i];
            i++;
            j++;
        }
        else break;
    }
    
}


