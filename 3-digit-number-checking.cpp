#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter a number : ";
    cin >> n;
    if(n<1000 && n>99){ //you can also use "and".
    	cout<<"Your number is 3 digit . ";
	}
    else{
    	cout<<"Your number is not 3 digit . ";
	}
}