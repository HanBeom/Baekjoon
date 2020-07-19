#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int visited[26];

int main(void)
{
    string s;
    cin >> s;
    
    memset(visited, -1, sizeof(visited));
    for (int i = 0; i < s.length(); i++)
        if (visited[s[i] - 'a'] == -1)
            visited[s[i] - 'a'] = i;
    
    for (int i = 0; i < 26; i++)
        cout << visited[i] << " ";
    cout << "\n";
    return 0;
}
