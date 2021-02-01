#include <iostream>
#include <iomanip>
#include <fstream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	int liczba;
	int t[1000];
	int minimum =0;
	int maximum =1000;
	int i;
	ifstream plik;
	
	plik.open("liczby1.txt");
	if(plik.good()){
    while(!plik.eof()){
		plik >> oct >> t[i];
		{
		if(minimum < t[i])
		minimum = t[i];

	}
	{
		if(maximum > t[i])
		maximum = t[i];

	}
		
}
	cout << oct <<"Najwieksza liczba: "<< minimum << endl; 
	cout << oct <<"Najwieksza liczba: "<<  maximum;
	
}
	
	
	plik.close();
	return 0;
}

