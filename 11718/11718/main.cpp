#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    while(1){
        getline(cin, input);
        if(input=="") break;
            cout<<input<<endl;
    }
}