#include <iostream>
#include <vector>
#include <string>
#include <math.h>
using namespace std;
void cou(int n, int *arr){
    for (int i=0; i< n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void generate_binary(int n, int *arr){
    for (int i=n-1; i > 0; i--){
        if (arr[i] == 0){
            arr[i] = 1;
            cou(n, arr);
            break;
        }
        else{
            arr[i] = 0;
        }
    }
}
int main(){
    int arr[5] = {0};
    for (int i=0; i < 32; i++){
        generate_binary(5, arr);
    }
    system("pause");
    return 0;
}