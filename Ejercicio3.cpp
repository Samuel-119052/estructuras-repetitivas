#include<iostream>
using namespace std;
int main(){
	int n,S=0;
	cout<<"Ingrese el numero de terminos a sumar"<<endl;
	cin>>n;
	if(n<=0){
		cout<<"Numero invalido"<<endl;
	}else{
		for(int i=1;i<=n;i++){
		S=S+i;
	}
	cout<<"La suma de los  "<< n <<"  primeros numeros es: "<<S<<endl;
	}
	return 0;
}
