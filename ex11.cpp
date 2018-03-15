#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int N,i,Somme;
	std::cout <<"entrez un entier"<<std::endl;
	std::cin>> N;
	for(i=5*5*5;i<=N*N*N;i++){
	Somme=5*5*5+i;
	}
	std::cout<< "la somme est" << Somme <<std::endl;
	
	return 0;
}
