#include <iostream>
using namespace std;

float peng(float sum, float n){
    return sum/n;
}

int main(void)
{
    int n;
    float count;
    float sum = 0.0, sum2 = 0.0;
    float su[1000];
    cin >> n;
    
    for(int i = 0; i < n; i++){
        float m;
        cin >> m;
        
        for(int i = 0; i < m; i++){
            cin >> su[i];
            sum += su[i];
        }
        for(int i = 0; i < m; i++){
            if(su[i] > peng(sum, m)){
                count++;
            }
        }
        cout.precision(3);
        cout << fixed << count/m*100 << "%"<< endl;
        sum = 0;
        count = 0;
    }
}
