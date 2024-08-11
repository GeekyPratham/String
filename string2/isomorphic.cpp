#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    string s ;
    getline(cin,s);

    cout<<endl;

    string t ;
    getline(cin,t);

    cout<<endl;

    bool flag=true;

    if(s.length()!=t.length()){

        flag=false;

    }

    vector<int> v(150,1000);
    //make a vector of size 150 and fill  1000 in each box;

    for(int i=0;i<s.size();i++){
        int idx = (int)s[i];

        if(v[idx]==1000) v[idx]=s[i]-t[i];
        else if(v[idx]!=s[i]-t[i]) {
            flag = false;
        }

    }
    for(int i=0;i<150;i++){
        v[i]=1000;
    }

    for(int i=0;i<t.size();i++){
        int idx = (int)t[i];

        if(v[idx]==1000) v[idx]=t[i]-s[i];
        else if(v[idx]!=t[i]-s[i]) {
            flag = false;
        }

    }

    if(flag==false) cout<<" not an  isomorphic";
    else cout<<"isomorphic";





}