#include<iostream>
using namespace std;
int main(){
	int num, fact=1;
	cout<<Ingrese un numero positivo<<endl;
	cin>>num;
	if(num>=1){
		for(int i=1;i<=num;i++){
			fact=fact*i;
		}
	cout<<El factorial de su numero ingresado es: <<fact<<endl;
	}
	return 0;
}
