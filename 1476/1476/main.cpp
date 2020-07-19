#include <iostream>
using namespace std;

int main() {
    int i=1;
    int e,s,m;
    cin>>e>>s>>m;
    while(true){
        if((i-e)%15==0 && (i-s)%28==0 && (i-m)%19==0){
            cout<<i<<endl;
            return 0;
        }
        i++;
    }
}
