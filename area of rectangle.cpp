#include<iostream>
using namespace std;
int main(){
	int l;
	cout <<"Enter the lenght : ";
	cin >> l;
	int b;
	cout<<"Enter the breath : ";
	cin >> b;
	cout<<endl;
	cout<<"Your area is : "; 
	cout<< l*b<<endl;
	cout<<"Your parameter is : ";
    cout<<  2*(l+b) <<endl;
	if(l*b>2*(l+b)){
		cout << "area is greater than parameter . ";
	}
	else if (l*b<2*(l+b))
	{
		cout << "parameter is  greater than area .";
	}
}//You did id hurrrahhhhhhhhh......