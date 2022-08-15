#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> Factorize(int input);
void OutputVec(vector<int> vec);

int main()
{
    int input;
    vector<int> factors;

    cout << "What number would you like to factor? " << endl;    
    cin >> input;

    factors = Factorize(input);

    OutputVec(factors);

    return 0;  
}

vector<int> Factorize(int workingNum){
    vector<int> factorVec;
    while (workingNum % 2 == 0){        //Divides by 2 as much as possible
        workingNum /= 2;
        factorVec.push_back(2);         
    }                                   //Resulting number must be odd

    for(int i = 3; i <= sqrt(workingNum) ;){
        if (workingNum % i == 0){
            workingNum /= i;
            factorVec.push_back(i);
        }
        else{
            i = i+2;
        }
    }
    factorVec.push_back(workingNum);

    return factorVec;
}

void OutputVec(vector<int> vec){
    cout << "Factors: " << endl;
    if(vec.size() == 1){
        cout << vec.at(0) << " is prime." << endl; 
    }
    else{
        cout << vec.at(0);
        for (int i = 1; i < vec.size(); i++){
            cout << " * " << vec.at(i);
        }
    }
}

