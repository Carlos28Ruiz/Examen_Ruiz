#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
 int num,aux,resto,numInvertido=0;
 
 cout<<"Ingrese numero: ";
 cin>>num;
 
 aux=num;
 
 while(aux>0){
    	resto=aux%10;
    	aux=aux/10;
    	numInvertido=numInvertido*10+resto;
 }
 
 if(numInvertido==num){
  cout<<"Es capicua";
 }
 else{
  cout<<"No capicua";
  
 }
 cout<<endl;
 system("pause");
 return 0;
}