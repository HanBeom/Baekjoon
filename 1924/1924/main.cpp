#include <iostream>
using namespace std;

void Searchday(int d){
    int a;
    a=d%7;
    
    switch (a) {
        case 1:cout<<"MON"<<endl; break;
        case 2:cout<<"TUE"<<endl; break;
        case 3:cout<<"WED"<<endl; break;
        case 4:cout<<"THU"<<endl; break;
        case 5:cout<<"FRI"<<endl; break;
        case 6:cout<<"SAT"<<endl; break;
        case 0:cout<<"SUN"<<endl; break;
    }
}

int main() {
    int x,y,day=0;
    cin>>x>>y;
    switch (x) {
        case 1:day=y; break;
        case 2:day=31+y; break;
        case 3:day=59+y; break;
        case 4:day=90+y; break;
        case 5:day=120+y; break;
        case 6:day=151+y; break;
        case 7:day=181+y; break;
        case 8:day=212+y; break;
        case 9:day=243+y; break;
        case 10:day=273+y; break;
        case 11:day=304+y; break;
        case 12:day=334+y; break;
    }
    Searchday(day);
}
