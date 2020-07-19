#include <iostream>
using namespace std;

int main() {
    /*
     1 1 +6
     2 7 +12
     3 19 +18
     4 37 +24
     5 61 +30
     6 91
     */
    long long n;
    cin >> n;
    
    int cnt=1;
    long long range=1;
    long long tmp=1;
    
    while(1){
        if(range>=n){
            break;
        }
        tmp = 6 * (cnt++);
        range += tmp;
    }
    //출력
    cout<<cnt<<"\n";
    
    return 0;
}
