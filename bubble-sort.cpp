# include<iostream>
using namespace std;

int main(){
    system("cls");
    int size;
    cout<<"enter the size :";
    cin>>size;
    int arr[size];
    cout<<"enter the element of array :";
    for(int i=0; i< size; i++){
        cin>>arr[i];
    }

    //~* swapping starts here 
    for(int i=0; i<size; i++){
        for(int j= i+1; j<size; j++){
            if(arr[i]>arr[j]){
                //~# swap them 
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"\n sorted array is :";
    for(int i=0; i< size; i++){
        cout<<arr[i]<<" ";
    }

}