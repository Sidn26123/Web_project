#include <iostream>
#include <string>
#include <fstream>

using namespace std;
void print_menu(){
    string file_name = "Yc.txt";
    fstream read_file;
    read_file.open(file_name, ios::in);
    if (!read_file.is_open()){
        std::cout << "Lỗi mở file" << endl;
        return;
    }
    string line;
    int i = 1;
    while (getline(read_file, line)){
        std::cout <<i << ". "<< line << endl;
        ++i;
    }
    read_file.close();
}

int get_line_file(string file_name){
    fstream read_file;
    //Mo file = fstream can co ios::in hoac ios::out de xac dinh mode
    read_file.open(file_name, ios::in);
    if (!read_file.is_open()){
        std::cout << "Lỗi mở file" << endl;
        return -1;
    }
    string line;
    //Khoi tao bien dem so dong
    int num_line = 0;
    //Dem so dong trong file den khi het file, getline het return false break while loop
    //C2: Doc tung char trong file bang read_file >> var, var == "\n" line++, else num_char++
    while (getline(read_file, line)){
        num_line++;
    }
    read_file.close();
    return num_line;
}
void get_arr(int *arr, int &n){
    cout << "Nhap so luong phan tu mang: ";
    cin >> n;
    while (n > 50 || n <= 0){
        cout << "Nhap lai n: (1->50)";
        cin >> n;
    }
    for (int i = 0; i< n; i++){
        std::cout << "Nhap phan tu " << i <<": ";
        cin >> arr[i];
    }
}

void print_arr(int *arr, int n){
    for (int i = 0; i< n; i++){
        cout << arr[i]  << " ";
    }
}

void practice_1(){
    int a,b,c, max;
    std::cout << "Nhap a,b,c: ";
    cin >> a >> b >> c;
    max = a;
    if (a < b){
        max = b;
        if (b < c){
            max = c;
        }
    }
    std::cout << "Max: " << max << endl;
}



void practice_2(){
    int arr[50], n, chan;
    std::cout << "Nhap n: ";
    cin >> n;
    while (n > 50){
        std::cout << "Nhap lai n (n < 50): ";
        cin >> n;
    }
    for (int i = 0; i< n; i++){
        std::cout << "Nhap phan tu " << i <<": ";
        cin >> arr[i];
        if (arr[i] % 2 == 0) ++chan;
    }
    std::cout << "Tong so chan trong mang: "<< chan << endl;
    std::cout << "Tong so le trong mang: "<< n - chan << endl;
}

void practice_3(){
    int arr[50], n, sum;
    std::cout << "Nhap n: ";
    cin >> n;
    while (n > 50){
        std::cout << "Nhap lai n (n < 50): ";
        cin >> n;
    }
    get_arr(arr, n);
    for (int i = 0; i < n; i++){
        sum +=  arr[i];
    }
    std::cout << "Tong: " << sum << endl;
}

int practice_4(){
    int n, sum = 0;
    std::cout << "Nhap n: ";
    if (n == 0) return sum;
    else if (n > 0){
        for (int i = 1; i <= n; i++){
            sum += i;
        }
    }
    else{
        for (int i = n; i > 0; i--){
            sum += i;
        }
    }
    return sum;
}

bool practice_5(){
    int arr[50], n, num_to_find;
    get_arr(arr, n);
    std::cout << "Nhap so can tim: ";
    cin >> num_to_find;
    for (int i = 0; i< n; i++){
        if (arr[i] == num_to_find){
            return true;
        }
    }
    return false;
}
void practice_6(){
    int arr[50][50], arr_A[50][50], arr_B[50][50];
    int n;
    cout << "Nhap n: ";
    cin >> n;
    std::cout << "Ma tran A" << endl;
    for (int i = 0; i< n; i++){
        for (int j = 0; j< n; j++){
            cin >> arr_A[i][j];
        }
    }
    cout << "Ma tran B" << endl;
    for (int i = 0; i< n; i++){
        for (int j = 0; j< n; j++){
            cin >> arr_B[i][j];
        }
    }

    for (int i=0; i< n; i++){
        for (int j =0; j< n; j++){
            arr[i][j] = 0;
            for (int k = 0; k < n; k++){
                arr[i][j] += arr_A[i][k]*arr_B[k][j];
            }
        }
    }
    cout << "Ket qua: " << endl;
    for (int i = 0; i< n; i++){
        for (int j = 0; j< n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void practice_7(){
    cout << "Incre selection sort" << endl;
    int arr[50], n;
    get_arr(arr, n);
    for (int i = 0; i < n; i++){
        int index_min = i;
        for (int j = i + 1; j < n; j++){
            if (arr[index_min] > arr[j]){
                index_min = j;
            }
        }
        if (index_min != i){
            int temp = arr[index_min];
            arr[index_min] = arr[i];
            arr[i] = temp;
        }
    }
    print_arr(arr,n);
}
void practice_8(){
    int arr[50], n;
    get_arr(arr, n);
    for (int i = 1; i < n; i++){
        int temp = arr[i], pos = i-1;
        while (pos >= 0 && arr[pos] < temp){
            arr[pos+1] = arr[pos];
            --pos;
        }
        arr[pos+1] = temp;
    }
    print_arr(arr, n);
}

void practice_9(){
    int arr[50], n;
    get_arr(arr, n);
    for (int i = 0;i <n; i++){
        for (int j = n-1; j > i ; j--){
            if (arr[j] < arr[j-1]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
    print_arr(arr, n);
}
int main(){
    print_menu();
    int num_practice;
    cin >> num_practice;
    switch (num_practice){
        case 1:
            {
                practice_1();
                break;
            }
        case 2:
            {
                practice_2();
                break;
            }
        case 3:
            {
                practice_3();
                break;
            }
        case 4:
            {
                practice_4();
                break;
            }
        case 5:
            {
                practice_5();
                break;
            }
        case 6:
            {
                practice_6();
                break;
            }
        case 7:
            {
                practice_7();
                break;
            }
        case 8:
            {
                practice_8();
                break;
            }
        case 9:
            {
                practice_9();
                break;
            }
        default:
            int num_line = get_line_file("Yc.txt");
            if (num_line < 0){
                break;
            }
            cout << "Loi, lua chon phai nam trong khoang 1-"<<num_line << " " << endl;
    }
    system("pause");
    return 0;
}