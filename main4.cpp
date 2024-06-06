#include <iostream>
using namespace std;

int main(){
    char grade;
    cout <<"Enter your grade:"<<endl;
    cin>>grade;

    
    switch (grade){
        case 'A':cout<<"Your range is 90-100"<<endl;
        break;
        case 'B':cout<<"Your range is 80-90"<<endl;
        break;
        case 'C':cout<<"Your range is 70-80"<<endl;
        break;
        case 'D':cout<<"Your range is 60-70"<<endl;
        break;
        default:cout<<"Your range is 0-60"<<endl ;
  
    }
    return 0;
}


