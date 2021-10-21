// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x<y){
            if((y-x)%2==0){
                cout<<(y-x)/2<<endl;
            }
            else
            cout<<((y-x+1)/2)+1<<endl;
        }
        else cout<<x-y<<endl;
        
    }

    return 0;
}