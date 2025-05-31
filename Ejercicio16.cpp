#include<iostream>
using namespace std;
int main(){
	int n,a=0,b=1,c;
	cout<<"Ingrese cuantos terminos de la serie fibonacci quiere ver"<<endl;
	cin>>n;
	if(n>0){
		cout<<"La serie fibonacci es: "<<endl;
	    for(int i=1;i<=n;i++){
		    cout<< a <<endl;
		    c=a+b;
		    a=b;
		    b=c;
	    }
	}else{
		cout<<"Erro: Se dectecto un numero invalido"<<endl;
	}
	return 0;
}
