#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <fstream>
#include <cstdlib>
using namespace std;

double mean(){
    int count = 0;
    double sum = 0;
    string num;
    ifstream source("score.txt");
    while(getline(source,num)){
        sum += atof(num.c_str());
        count++;
    }
    return sum/count;
}


int main(){
    double sum = 0;
    double sum_sqr = 0;
    int count = 0;
    string num;
    ifstream source("score.txt");
    while(getline(source,num)){
        sum = sum + pow(atof(num.c_str()),2);
        count++;
    }

    sum_sqr = sqrt(((1.0/count)*sum)-pow(mean(),2));

    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean() << endl;
    cout << "Standard deviation = " << sum_sqr ;
}