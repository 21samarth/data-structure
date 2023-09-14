/*
~! 1 --> create an array of size n 
~! 2 --> create an array 
~! 3 --> take user input 
~! 4 --> take user input  to search an element 
~? 5 --> create a logic 
~?   --> while ( start < end )
~#   --> find the mid element => s + e / 2
~#   --> logic
*/

# include<iostream>
using namespace std;

//~* declare a function 

int bsearch(int arr[], int search, int start, int end);

int main(){
    system("cls");
    int size;
    cout<<"enter the size";
    cin>>size;

    //~? array [size]
    int arr[size];
    cout<<"enter the sorted element :";
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }
    int search;
    cout<<"enter element to be searched :";
    cin>> search;
  
  //~*           bsearch(arr, search, start, end)
    int result = bsearch(arr, search, 0,     size-1);
    if(result == -1){
        cout<<"element not found";
    }
    else{
        cout<<"element found";
    }
}

int bsearch(int arr[], int search, int start, int end){
    while(start <= end){

        //~# mid 

        int mid = (start + (end - start))/2;
        if(arr[mid]==search){
            return mid;
        }

        //~! left side
        else if(arr[mid]> search){
            end = mid - 1;
        }

        //~! right side
        else{
            start = mid + 1;
        }
    }

    return -1; //~! incase element not found
}