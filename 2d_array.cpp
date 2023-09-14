# include<iostream>
using namespace std;

int main()
{
    system("cls");
    int row, col;
    cout<<"enter the rows and column :";
    cin>>row>>col;

    int arr[row][col];
    cout<<"enter the element o 2d array :\n";

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }

    //~! display 2d array 
    cout<<"2d array : \n";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    cout<<endl<<"matrix transpose :\n";
    //~! interchange the loop row--> col and col -->row
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            cout<<arr[j][i]<<" ";
        }cout<<endl;
    }

    return 0;
}