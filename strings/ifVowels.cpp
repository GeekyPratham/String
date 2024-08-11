// #include <iostream>
// #include <string>
// using namespace std;
// int main(){

//     string  str = "pratham";
//     int count =0;
//     for(int i=0;str[i]!='\0';i++){
//         if(str[i]=='a' || str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u' ){
//             count++;
//         }
//     }
//     cout<<count;
// }

// by taking input
// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string str;
//     cin>>str;
//     cout<<str;
//     cout<<endl;

//     int count =0;
//     for(int i=0;str[i]!='\0';i++){
//         if(str[i]=='a' || str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u'){
//             count++;
//         }
//     }
//     cout<<count;
// }
//output

// pratham raj
// pratham
// 2

#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
   
    getline(cin,str);
    cout<<endl;

    int count =0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a' || str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u'){
            count++;
        }
    }
    cout<<count;
}