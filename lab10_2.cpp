#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	string txt;
	source.open("cheerbook.txt") ;
	dest.open("cheerbook_copy.txt");
	
	dest << "-------------------- BOOM ---------------------\n";
	while (getline(source,txt)){
		dest << txt <<"\n";
	}
	dest << "-------------------- HA!! ---------------------";

    source.close();
    dest.close();
	return 0;
}
