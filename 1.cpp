#include <iostream>
using namespace std;

class anime 
{
public:
string hero;
int age;
char gender;

void printInfo(){
    cout<<hero<<endl;
     cout<<age<<endl;
      cout<<gender<<endl;
    }
 

};


int  main(){

anime arr[3];

for (int i=0 ; i<3; i++){

cout<<"hero="<<endl;
cin>>arr[i].hero;
 cout<<"age="<<endl;
cin>>arr[i].age;
 cout<<"gender="<<endl;
cin>>arr[i].gender;
 
 }

 for(int i=0;i<3;i++){
    arr[i].printInfo();
    
 }

    return 0;
}

