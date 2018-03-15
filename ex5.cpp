#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double Prix_HT,nmbr_kilos,TVA,Prix_TTC;
	cout<<"veuillez entrez le prix HT d'un kilo de tomates"<<endl;
	cin>>Prix_HT;
	cout<<"veuillez entrez le nombre de kilos de tomates achetés"<<endl;
	cin>>nmbr_kilos;
	cout<<"veuillez entrez le taux de TVA"<<endl;
	cin>>TVA;
		Prix_TTC=(1+TVA/100)*Prix_HT*nmbr_kilos;
	cout<<"le prix TTC est :"<<Prix_TTC<<endl;
	return 0;
}
