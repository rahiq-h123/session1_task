

#include <bits/stdc++.h>
using namespace std;

void calculate(){
		int num1, num2; char operatorr;
		cin>>num1>>operatorr>>num2;
		switch(operatorr){
			case '+':
			cout<<num1+num2<<"\n"; break;
			case '-':
			cout<<num1-num2<<"\n"; break;
			case '*':
			cout<<num1*num2<<"\n"; break;
			case '/':
			cout<<num1/num2<<"\n"; break;
		}
}
int main(){ 
	
	calculate();
}