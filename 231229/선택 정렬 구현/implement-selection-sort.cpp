#include <iostream>

using namespace std;

int main() {

    int n;
    cin>>n;

    int min;
    int arr[101];

    int temp;

    for(int i=0; i<n; i++){
        int num;
        cin>>num;
        arr[i] = num;
    }

    for(int i=0; i<n-1; i++){
        min = i;
        for(int j= i+1; j<n; j++){
            if(arr[j] < arr[min]){
                temp = arr[j];
                arr[j] = arr[min];
                arr[min] = temp;
                min = j;

            }
        }

    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}