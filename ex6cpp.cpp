#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int N;
	std::cout<<"veuillez rentrez un entier"<<std::endl;
	std::cin>>N;
	  if(N<56 && N>78)
	  std::cout<<"GAGNE"<<std::endl;
	  else if (N>56 || N<78)
	  std::cout<<"PERDU"<<std::endl;
	return 0;
}
