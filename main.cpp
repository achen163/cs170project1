#include <iostream>
#include <vector>
#include "string"
using namespace std;


int main () {
    int userChoice = 0;
    int defaultPuzzle[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,0,8}
    };
    int userPuzzle[3][3] ;
    
    cout << "Welcome to 862086202 (achen163) Student Alex Chen's 8 puzzle solver." << endl;
    cout << "Type \"1\" to use a default puzzle or \"2\" to enter your own puzzle. " << endl;
    
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++){
            cout << defaultPuzzle[i][j];
        }
        cout << endl;
    }
    
}