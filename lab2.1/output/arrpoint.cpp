//WAP using arry and pointer
#include<iostream>
using namespace std;
int main(){
    int a[5];
    

for(int i=0; i<=4;i++){
    cout<<"number: ";
    cin>>a[i];
}
for(int i=0; i<=4;i++){
    cout<<*(a+i)<<"  ";
    
}

     return 0;
}