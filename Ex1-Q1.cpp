/*Make an array of 5 names that the user inters
then ask the users for a name and print how many times the name was repeated*/
#include <iostream>
using namespace std;
int main(){
string names[5];
string Name;
int counter=0;
cout<<"Enter 5 Names Please"<<endl;
for(int i=0 ; i<5; i++){
    cin>>names[i];
}
cout <<"Enter a name please "<<endl;
cin>>Name;
for(int i=0;i<=5;i++){
    if(names[i]==Name)counter++;
}
cout<<"The Name Was Repeated "<< counter<<" Times"<<endl;
}
