#include <iostream>
using namespace std;

int main() {
    int i;
    char a[1000];
    cin>>a;
    
    for(i=0; i<100; i++){
        if(a[i]=='\0') break;
    }

    for(int j=0; j<i; j++){
        cout<<a[j];
        if((j+1)%10==0) cout<<endl;
    }
    cout<<endl;
    return 0;
}
