#include <iostream>
#include<math.h>
using namespace std;


int main(){

int n;
cin>>n;
int orignal= n;
int sum=0;
while(n>0){
    int a= n%10;
    sum += pow(a,3);
    n=n/10;
}

if(sum==orignal){
    cout<<"its an Armstrong Number";
}
else{
    cout<<"Please Enter Number Again";
}


return 0;
}
