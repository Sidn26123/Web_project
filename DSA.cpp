#include <iostream>
#include <vector>
using namespace std;
const int MAX = 50;
int n = 3;
int arr[MAX][MAX];
bool chuaxet[MAX] = {1};
int truoc[MAX];
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

void DFS_F(int u){
    ans.push_back(u);
    chuaxet[u] = false;
    while (!ans.empty()){
        int temp = ans[ans.size()-1];
        ans.pop_back();
        for (int i = 0; i< n; i++){
            if (arr[temp][i] == true && chuaxet[i] == true){
                chuaxet[i] = false;
                ans.push_back(temp);
                ans.push_back(i);
                truoc[i] = temp;
            } 
        }
    }
}

void print_path(int u, int v){
    if (truoc[v] == 0)
        cout << "Khong path";
    else{
        while (u != v){
            v = truoc[v];
            cout << v << " ";
        }
    }
}
int main(){
    for (int i=0; i <n ;i++){
        chuaxet[i] = true;
        truoc[i] = 0;
    }
    for (int i=0; i<n ; i++){
        for (int j=0; j <n; j++){
            cin >> arr[i][j];
        }
    }
    DFS_F(0);
    print_path(0,1);
    system("pause");
    return 0;
}
