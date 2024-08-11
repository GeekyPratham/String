#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    string str =" raghav is a maths teacher. He is a DSA mentor as well!";
    stringstream ss(str);
    string temp;
    vector<string> v;  //string ka vector

    while(ss>>temp){
        v.push_back(temp);
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;

    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;

    int max=0;
    for(int i=0;i<v.size();i++){
        int count=1;
        for(int j=i+1;j<v.size();j++){
            if(v[i]==v[j]){
                count++;
            }

        }
        if(max<count){
                max=count;
        }
    }

    for(int i=0;i<v.size();i++){
        string s=v[i];
        int count=1;
        for(int j=i+1;j<v.size();j++){
            if(v[i]==v[j]){
            count++;
            }
            
        }
        if(max==count){
            cout<<s<<" "<<max<<endl;
        }
    }


}