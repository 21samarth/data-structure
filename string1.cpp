# include<iostream>
# include<string>

using namespace std;
int main(){
    system("cls");
    string name;
    int len;
    
    cout<<"enter your full name :";
    //cin>>name;
    getline(cin, name);
    cout<<endl<<"your name is :"<<name;
    cout<<endl;
     // for(int i = name.length()-1 ; i>= 0; i--){
     //   cout<<name[i];
     //}
    len = name.length();
    for(int i=0; i<len; i++){
        cout<< name[ (len-1) - i ];
    }

    return 0;
}
