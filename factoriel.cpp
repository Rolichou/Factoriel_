#include<iostream>
int main(int argc, char**argv){
	unsigned int n,i,fact=0;
	std::cout<<"Entrer un nombre"<<std::endl;
	std::cin>>n;
	if(n==0){
		std::cout<<"le factoriel est 1"<<std::endl;
	}else if(n==1){
		std::cout<<"le factoriel est 1"<<std::endl;
	}else{
		fact=n*(n-1);
		for(i=2;i<=(n-1);i++){
			fact=fact*(n-i);	
		}
		std::cout<<"le factoriel est:"<<fact<<std::endl;
	}
}


