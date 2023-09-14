# include<iostream>
using namespace std;
int main(){
    system("cls");
    int row, col;
    cout<<"enter row and column :";
    cin>>row>>col;

    //~? create 3 array 
    int arr1[row][col];
    int arr2[row][col];
    int arr3[row][col];
    //~! enter element for 2d array 1 
    cout<<"enter the element of 2d array 1 : \n";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr1[i][j];
        }
    }
    cout<<endl;
    //~! enter element for 2d array 2 
    cout<<"enter the element of 2d array 1 : \n";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr2[i][j];
        }
    }
    //~# sum of 2 matrix --> 
        for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
           arr3[i][j] = arr1[i][j] + arr2[i][j];    //~* logic is here  
        }
    }

    //~% display the sum of matrix  
    cout<<endl<<"sum of 2 matrix is -->  \n";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr3[i][j]<<"  ";
        }cout<<endl;
    }

    return 0;
}