#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

//Function signatures
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

//Function for find factors and add them to array
vector<int> Factorize(int workingNum){
    vector<int> factorVec;
    while (workingNum % 2 == 0){                //Divides by 2 as much as possible
        workingNum /= 2;
        factorVec.push_back(2);         
    }                                           //Resulting number must be odd

    for(int i = 3; i <= sqrt(workingNum) ;){    //Goes through every number between 3 and sqrt of input
        if (workingNum % i == 0){               // to check if there are any possible factors
            workingNum /= i;
            factorVec.push_back(i);
        }
        else{
            i = i+2;                            //Iterates by 2 because number must be odd
        }
    }
    factorVec.push_back(workingNum);

    return factorVec;
}

//Function to output factors from vector
void OutputVec(vector<int> vec){
    if(vec.size() == 1){                            //Different output if input is already prime
        cout << vec.at(0) << " is prime." << endl; 
    }
    else{
        cout << "Factors: " << endl;                //Normal output, iterates through vector
        cout << vec.at(0);
        for (int i = 1; i < vec.size(); i++){
            cout << " * " << vec.at(i);
        }
    }
}

