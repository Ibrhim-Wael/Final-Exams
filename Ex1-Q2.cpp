/*Write A Function That Makes This Series 1 +(1+2)+(1+2+3)+(1+2+3+4)+(1+2+3+4+n)
  1-Make A function the makes the sum from o to n for eg.input:5 output: 0+1+2+3+4+5
  2-At Main Function make a for loop that makes the series given 
*/
------------------------------------Sloution-----------------------------------------
#include <iostream>
using namespace std;

int sum(int Number){
    int result=0;
    for(int i =1 ; i<=Number;i++){
        result+=i;
    }
    return result;
}
int main(){int n;
int result=0;
cout<<"Enter A Numnber "<<endl;
cin>>n;
for(int i=1;i<=n;i++){
result+=sum(i);
}
cout <<"The Result Is : "<<result<<endl;
}
