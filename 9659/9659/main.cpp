#include <iostream>
#include <ctime>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    srand((unsigned int)time(NULL));
    int n,r,cnt=0;
    for(int i=0; i<10; i++){
        r = rand()%4;
        cout<<r<<"\n";
    }
    
    
    return 0;
}
