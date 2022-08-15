#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> Factorize(int input);

int main()
{
    int input;
    vector<int> factors;

    cout << "What number would you like to factor? " << endl;    
    cin >> input;

    factors = Factorize(input);

    return 0;  
}

vector<int> Factorize(int input){


}
