#include <iostream>
#include <string>
using namespace std;

int solution(string& input){
    int count=0;
    
    for(int i=0; i<input.length(); i++){
        if(input[i]=='c'){
            if(input[i+1]=='='||input[i+1]=='-'){
                i++;
            }
        }
        else if(input[i]=='d'){
            if(input[i+1]=='-'){
                i++;
            }
            else if(input[i+1]=='z'&&input[i+2]=='='){
                i++;
                i++;
            }
        }
        else if(input[i]=='l'){
            if(input[i+1]=='j'){
                i++;
            }
        }
        else if(input[i]=='n'){
            if(input[i+1]=='j'){
                i++;
            }
        }
        else if(input[i]=='s'){
            if(input[i+1]=='='){
                i++;
            }
        }
        else if(input[i]=='z'){
            if(input[i+1]=='='){
                i++;
            }
        }
        count++;
    }
    return count;
}


int main() {
    string input;
    getline(cin, input);
    
    int result;
    result=solution(input);
    
    cout<<result<<endl;
    return 0;
}
