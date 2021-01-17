#include<iostream>
using namespace std;

int main() {
    int a;
    cin>>a;
    
    if(a&1) {
        cout<<9<<" "<<a-9<<endl;
    } else  {
        cout<<8<<" "<<a-8<<endl;
    }
    
    return 0;
    
}