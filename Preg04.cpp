#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int numPerfecto = 0;
	int div = 0;
	
	cout<<"Ingrese un numero: "; 
	cin>>numPerfecto;
	
	for ( int i =1; i<numPerfecto; i++){
		if (numPerfecto % i == 0){
			div +=i;
		}
	}
	
	if(numPerfecto == div){
		cout<<numPerfecto<<" Es perfecto";
	}
	else{
		cout<<numPerfecto<<" No es perfecto";
	}
	
	cout<<endl;
	system("pause");
	return 0;
}