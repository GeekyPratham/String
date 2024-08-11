#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    string arr[]={"0123","0023","456","00182","940","002901"};
    
    int max=stoi(arr[0]);
    string maxS= arr[0];

    int n=sizeof(arr)/sizeof(arr[0]);

        for(int j=1;j<n;j++){
            int y=stoi(arr[j]);
            if(max<y){
                 max=y;
                 maxS=arr[j];
            }
        }
        cout<<maxS<<" "<<max;
        
    
}

