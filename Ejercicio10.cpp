#include<iostream>
using namespace std;
int main(){
	int num, cont=0,i=1;
	cout<<Ingrese un numero positivo<<endl;
	cin>>num;
	while(i<=num){
		if(num%i==0){
			cont++;
		}
		i++;
	}
	if(cont==2){
		cout<<Su numero ingresado es primo<<endl;
	}else{
		cout<<Su numero ingresado no es primo<<endl;
	}
	return 0;
}
