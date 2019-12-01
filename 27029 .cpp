#include <iostream>
using namespace std;

int main() {

    int cm;

    do {
        cout << "輸入高度：";
        cin >> cm;
    } while (cm < 1 || cm > 8);

    for (int i = cm;i > 0; i--){
        for (int j = i; j > 1; j--){
            cout << " ";
        }
        for (int k = cm; k >= i; k--){
            cout << "#";
        }
        cout << "  ";
        for (int l = i; l <= cm; l++){
            cout << "#";
        }
        cout << "\n";
    }
}
