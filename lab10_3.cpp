#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main(){
    
    ifstream source("score.txt");
    string txt;
    int count=0;
    double num=0.0,N=0.0;

    while (getline(source,txt)){
        num += stod(txt);
        count++;
        N += pow(stod(txt),2);
    }

    double mean = num/count;
    double SD = sqrt((N/count)-(mean*mean));

    cout << "Number of data = " << count <<"\n";
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << SD ;
}