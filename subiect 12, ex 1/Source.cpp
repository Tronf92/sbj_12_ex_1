#include <iostream>
using namespace std;

int nr=0,i=0;

int afisare(int n){
	nr+=1;
	if (n==0)
		return 0;
	while(i<nr){
		cout << "*";
		i++;
	}
	cout << endl;
	i=0;
	return afisare(n-1);
}

int main(){
	int n;
	cout << "Introduceti un nr pozitiv" << endl;
	cin >> n;
	afisare(n);
	system("pause");
	return 0;
}