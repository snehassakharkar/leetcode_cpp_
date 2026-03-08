#include <iostream>
using namespace std;

int main() {
    int arr[4] = {1,2,3,4};

    for(int i = 1; i < 4; i++) {
        arr[i] = arr[i] + arr[i-1];
    }

    for(int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
