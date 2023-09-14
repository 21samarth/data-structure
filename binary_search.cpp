//~! binary search array

//~! logic
//~* find middle element -> let it be mid = (first element + last / 2)
//~* if the element is smaller than mid element --> search for left part
//~* if the element is greater than mid element --> search for right part
//~* repeat this process again and again untill --> element is found
//~? all element should be sorted

# include<iostream>  
using namespace std;

int binary_search(int array[], int srch, int low, int high)
{
    if (low > high)    //~# case to stop recursion when element is not found
    {
        return -1;
    }

    else{

        int mid = (low + high)/2;
        if (array[mid] == srch)  //~? case 2 if element found at mid
        {
            return mid;
        }

        if (array[mid]> srch)    //~? case 3 if element found at left
        { 
            return binary_search(array, srch, low, mid-1);
        }

        if (array[mid]< srch)    //~? if element found at right
        {
            return binary_search(array, srch, mid+1,high);
        }
    }
}

int main()
{
    int size,search;
    cout<<"enter size of an array :";
    cin>>size;

    int arr[size];
    cout<<"enter elements :";
    for (int i =0; i<size ; i++){
        cin>>arr[i];
    }

    cout<<"enter the element to be searched :";
    cin>>search;
    cout<<endl;
   
    int result = binary_search(arr,search,0,size-1); //~?call function 
    if (result == -1)
    {
        cout<<"element not found "<<endl;
    }
    else{
        cout<<"element found at :"<<result;
    }
    return 0;
}
