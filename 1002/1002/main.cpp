#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x1 = 0, y1 = 0, r1 = 0, x2 = 0, y2 = 0, r2 = 0, t;
    float count[10000];
    
    cin>>t;
    
    for(int i=0; i<t; i++){
        cin>>x1>>y1>>r1>>x2>>y2>>r2;
        
        if(abs(r2-r1)<abs(sqrt(pow(x2-x1,2)+pow(y2-y1,2))) && abs(r2+r1)>abs(sqrt(pow(x2-x1,2)+pow(y2-y1,2)))){
            count[i]=2;
        }
        else if(abs(r2+r1)<abs(sqrt(pow(x2-x1,2)+pow(y2-y1,2))) || abs(r2-r1)>abs(sqrt(pow(x2-x1,2)+pow(y2-y1,2)))){
            count[i]=0;
        }
        else if(abs(sqrt(pow(x2-x1,2)+pow(y2-y1,2)))==0){
            count[i]=-1;
        }
        else if(abs(r2+r1)==abs(sqrt(pow(x2-x1,2)+pow(y2-y1,2))) || abs(r2-r1)==abs(sqrt(pow(x2-x1,2)+pow(y2-y1,2)))){
            count[i]=1;
        }
    }
    
    for(int i=0; i<t; i++){
        cout<<count[i]<<endl;
    }
    return 0;
}
