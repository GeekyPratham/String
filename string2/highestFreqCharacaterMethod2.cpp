// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm>
// using namespace std;
// int main(){

//     string s;
//     getline(cin,s);
//     cout<<s<<endl;

//     vector<int> arr(26,0);
//     for(int i=0;i<s.length();i++){
//         char ch=s[i];
//         int ascii= (int) ch;
//         arr[ascii-97]++;
//     }
//     int max=0;
//     int num;
//     for(int i=0;i<26;i++){
//         if(arr[i]>max){
//             max=arr[i];
//             num=i;
            
//         }
//     }
//     cout<<(char)(num+97)<<'='<<max;
// }

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main(){

    string s;
    getline(cin,s);
    cout<<s<<endl;

    vector<int> arr(26,0);
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int ascii= (int) ch;
        arr[ascii-97]++;
    }
    int max=0;
    int num;
    for(int i=0;i<26;i++){
        if(arr[i]>max){
            max=arr[i];
            
            
        }
    }
    for(int i=0;i<26;i++){
        if(arr[i]==max){
            cout<<(char)(i+97)<<'='<<max<<endl;

        }
        
    }
}