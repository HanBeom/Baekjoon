#include <iostream>
#include <string>
using namespace std;

int main() {
    string w;

    while(true){
        getline(cin, w);
        
        if(w=="END"){
           break;
        }
        for(int i=w.length()-1; i>=0; i--){
            cout<<w[i];
        }
        cout<<endl;
    }
}
