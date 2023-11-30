#include <iostream>

using namespace std;

int n,m;
bool vis[1001] = {0};
int x,y;
int map[1001][1001];
int cnt = 0;


void DFS(int start){
    for(int i=1; i<=n; i++){
        if(map[start][i] == 1 && vis[i] != 1){
            vis[i] = true;
            cnt++;
            DFS(i);
        }
    }
}





int main() {
    cin>>n>>m;

    for(int i=0; i<m; i++){
        cin>>x>>y;
        map[x][y] = 1;
        map[y][x] = 1;
        
    }
    vis[1] = true;

    DFS(1);


    cout<<cnt;

    // 여기에 코드를 작성해주세요.
    return 0;
}