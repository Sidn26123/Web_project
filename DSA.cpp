#include <iostream>
#include <vector>
using namespace std;
const int MAX = 50;
int n = 3;
int arr[MAX][MAX];
bool chuaxet[MAX] = {1};
vector<int> ans;
void DFS(int u){
    chuaxet[u] = false;
    ans.push_back(u+1);
    for (int v =0; v < n; v++){
        if (chuaxet[v] && arr[u][v] == 1){
            DFS(v);
        }
    }
}

int main(){
    for (int i=0; i <n ;i++){
        chuaxet[i] = true;
    }
    for (int i=0; i<n ; i++){
        for (int j=0; j <n; j++){
            cin >> arr[i][j];
        }
    }
    DFS(0);
    for (int i=0 ; i< ans.size(); i++){
        cout << ans[i] << " ";
    }
    system("pause");
    return 0;
}
