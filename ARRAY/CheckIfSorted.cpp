#include <iostream>
using namespace std;

int main() {
    int arr[5] = {3, 6, 6, 9, 9};
    bool sorted = true;  

    for (int i = 0; i < 4; i++) { 
        if (arr[i+1] < arr[i]) {
            sorted = false;
            break;  
        }
    }

    if (sorted)
        cout << "True";
    else
        cout << "False";

    return 0;
}
