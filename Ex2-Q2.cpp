/*Write A Function That Makes This Series 1+2²+3³+n^n
  1-Make A function the makes the power function (n^n) eg.input 3 output 27
  2-At Main Function make a for loop that makes the series given*/
#include <iostream>
using namespace std;
int base(int Number){
    int result=1;
    for(int i=1; i<=Number;i++){
        result=result*Number;
    }
return result;
}
int main(){int result=0,n;
cout <<"Enter a Number"<<endl;
cin>>n;
for(int i =1;i<=n;i++){
    result=result+base(i);
}cout<<"The Sum of the series : "<<result;
}
