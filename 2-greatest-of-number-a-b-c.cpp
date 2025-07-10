#include<iostream>
using namespace std;
int main(){
int a, b, c;
cout <<"Enter your fist number : ";
cin >> a;
cout <<"Enter your 2nd number : ";
cin >> b;
cout <<"Enter your 3rd number : ";
cin >> c;
//a>b and b>c then aoutomatically a>c a is greatest .
if(a>b){//b can never be the greatest 
if(a>c){
cout<<a<<" is greatest . ";
}
else{ //c>a
cout<<c<<" is greatest . ";
}
}

else{
//b>a if above is not true .
if(b>c){
	cout<<b<<" is greatest . ";
}
	else{//c>b,c>b>a
		cout<<c<<" is greatest . ";
	}
}
}