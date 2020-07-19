#include <cstdio>
#include <algorithm>
using namespace std;
void Print(int *arr){
    
}
 
int main(){
    int N, arr[100000];
    scanf("%d", &N);
    for(int i=0; i<N; i++)
        scanf("%d", arr+i);
    sort(arr, arr+N);
    printf("%d\n", arr[N-1]+arr[N-2]);
}
