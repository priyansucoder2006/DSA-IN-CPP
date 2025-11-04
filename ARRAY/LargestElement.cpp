#include<iostream>
using namespace std;
int main(){
    int arr[6]={7,8,978,4,-89,02};
    int MAX=arr[0];
    for(int i=1;i<6;i++){
        if(arr[i]>MAX){
            MAX=arr[i];
        }
    }
    cout<<MAX;

}
