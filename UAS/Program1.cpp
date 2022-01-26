#include<iostream>
using namespace std;
int main(){
    string nama; 
    int nim;
    cout<<"Nama saya    : ";
    getline(cin,nama);
    cout<<"NIM saya     : ";
    cin>>nim;
    cout<<"Memory Alokasi String : "<<sizeof(string)<<endl;
    cout<<"Alamat Memory Nama : "<<&nama<<endl;
    cout<<"Alamat Memory NIM : "<<&nim<<endl;
    return 0;
}
