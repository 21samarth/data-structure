# include<iostream>
using namespace std;

int main(){
    system("cls");
int count = 0;
int size;  //~! step 1
cout<<"enter the size of an array :";
cin>>size;

int arr[size];  //~# --> step 2
cout<<"enter element in an array :";
for(int i=0; i <size; i++){
    cin>>arr[i];
}

int search;
cout<<"enter element to be searched :";
cin>>search;

//~? step --> 3 
for(int i=0; i<size; i++){
    if(arr[i] == search){
        count++;
   }}
//~* --> step 4
if(count == 0){
    cout<<"element not found";
}
else{
    cout<<"element found";
}

}