#include <iostream>
using namespace std;

int c1, c2;

int fibonacci(int n) {
    if (n == 0) {
        c1++;
        return 0;
    } else if (n == 1) {
        c2++;
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    int t = 0, n, c;
    cin>>t;
    for(int j=0; j<t; j++){
        cin>>n;
        c1=0;
        c2=0;
        fibonacci(n);
        cout<<c1<<" "<<c2<<endl;
    }

    return 0;
}


