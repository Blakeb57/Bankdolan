/* 
This is the main for the Bank pratice code
*/

#include <iostream>
#include "bank.h"
using namespace std;
using dolan::Bankacct;

int main()
{
    Bankacct mine ("ProfDolan"), yours, ours;
    
    mine.input(cin);
    yours.input(cin);

    ours = yours + mine;

    Bankacct rich;
    rich = yours * 2;

    if(yours < mine)
    {
        cout << "I will buy lunch." << endl;
    }
    cout << mine << yours << endl;
    cin >> rich >> mine;

    ours = yours + mine + rich;
}