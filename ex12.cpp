#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int Suite(int n) {
	if(n==0)
	 return 3;
	 else if(n==n+1)
	 return 3*Suite(n-1)+4;
}
int main(int argc, char *argv[]) {
	int N,u;
	std::cout<<"entrez la valeur de N"<<std::endl;
	std::cin>>N;
	std::cout<<"le resultat est:"<< Suite(N) <<std::endl;
	return 0;
}
