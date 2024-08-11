
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    cout<<s<<endl;
    int count=0;
    int n=s.length();
    for(int i=0;i<n;i++){
        if(n==1) cout<<0;
        else if(n==2 && s[0]!=s[1]){
            count++;
            break;
        }
        else if(i==0){
            if(s[i]!=s[i+1]) count++;
        }
        else if(i==n-1){
            if(s[i]!=s[i-1]) count++;

        }
        else if(s[i]!=s[i-1] && s[i]!=s[i+1]) count++;

    }

    cout<<count;
    
    
}