#include<iostream>
using namespace std;
int main(){
	//This whole code is the sol of th ques "if cp and sp of item is entered to keyboard.
	//then determine
	//1.weather it is profit
	//2.weather it is loss
    //3.no profit no loss
	//4.how much profit or loss
	int cp; //cp is cost price,sp is selling price.
	cout<<"Enter cost price : ";
	cin>>cp;
	int sp;
	cout<<"enter selling price : ";
	cin>>sp;
	if(sp>cp){
	cout<<"its your profit ... yeah. And it is : "<<sp-cp;
	}
	
	else if (sp<cp){
	
	cout<<"Its your loss ooooh . And it is : "<<cp-sp;
	}
	else {
		cout<<"its nor profit nor loss .";
	}

}//you can also write if in whole conditions but it will be easier for computer to read one so use if else.
