#include<iostream>
using namespace std;

char revstring(char a[], int n){

    for (int i = 0; i < n / 2; i++)
        {swap(a[i], a[n - i - 1]);}
        
    return *a;    
}

int main(){

    char ch[100];
    int m;
    cout<<"\nEnter no of characters:\t";
    cin>>m;
    cout<<"Enter string characters:\t";
    
    for(int j=0; j<m;j++){
        cin>>ch[j];
    }
    revstring(ch, m);
    cout<<"\n\nThe reversed string is:\t"<<ch;

}