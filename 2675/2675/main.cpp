#include <iostream>
#include <string>
using namespace std;

int main() {
    int t,r;
    string w;
    
    cin>>t;
    
    for(int i=0; i<t; i++){
        cin>>r>>w;
        
        for(int j=0; j<w.length(); j++){
            for(int k=0; k<r; k++){
                cout<<w[j];
            }
        
        }
        cout<<endl;
    }
}
