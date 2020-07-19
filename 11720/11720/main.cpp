#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int t, sum=0;
    char a;
    cin>>t;
    
    for(int i=0; i<t; i++){
        cin>>a;
        sum+=a-'0';
    }
    cout<<sum<<endl;
    return 0;
}
