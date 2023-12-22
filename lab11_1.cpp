#include<iostream>
#include<cstdlib>
#include<string>
#include<ctime>
using namespace std;

int main(){
    srand(time(0));
    int randg = rand() % 9;
    string grade[9] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};
    string og = grade[randg];
    cout << "Press Enter 3 times to reveal your future.";
    for(int i = 0 ; i < 3 ; ++i) cin.get();
    
    cout << "You will get " << og << " in this 261102.";
    return 0;
}
