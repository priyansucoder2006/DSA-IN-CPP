/* #include<iostream>
using namespace std;
int main(){
    int arr[6]={7,8,978,4,-89,02};
    int MAX=arr[0];
    for(int i=1;i<6;i++){
        if(arr[i]>MAX){
            MAX=arr[i];
        }
    }
int SMAX=-1;
 for(int i=0;i<6;i++){
        if(SMAX<arr[i]&&arr[i]!=MAX){
            SMAX=arr[i];
        }
    }
    cout<<SMAX;
} */
//Time complexity O(2N)
//2nd Method Optimal
#include<iostream>
using namespace std;
int main(){
    int arr[7]={15,3,18,2,7,192,20};
    int max=arr[0];
    int smax=-1;
    for(int i=0;i<7;i++){
        if(arr[i]>max){
            smax=max;
            max=arr[i];
        }
    
    if(arr[i]<max && arr[i]>smax){
        smax=arr[i];
    }
}
cout<<max<<endl;
cout<<smax;
}
//Time complexity- O(N)
