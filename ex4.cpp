#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int A,B,C;
	cout<<"rentrez deux entiers"<<endl;
    cin>>A>>B;
    C=A;
    A=B;
    B=C;
    cout<<"les valeurs de A et B deviennent:"<<A<<"        "<<B<<endl;
	
	return 0;
}
