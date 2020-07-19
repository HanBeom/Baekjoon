#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    
    if(a>b){
        if(a>c){
            if(b>c){
                cout<<b<<endl;
            }
            else{
                cout<<c<<endl;
            }
        }
        else{
            cout<<a<<endl;
        }
    }
    else{
        if(a<c){
            if(b<c){
                cout<<b<<endl;
            }
            else{
                cout<<c<<endl;
            }
        }
        else{
            cout<<a<<endl;
        }
    }
}

