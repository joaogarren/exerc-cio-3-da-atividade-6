#include <iostream>
using namespace std;

int main()
{
    int op;

    cout << "1. Porta Misteriosa" << endl;
    cout << "2. Tunel escuro" << endl;
   cin >> op;

    switch(op)
    {
        case 1:
            cout << "Parabens,você ganhou suprimentos e armas"<<endl;
            break;
            
        case 2:
            cout << "Que azar,voce encontrou um monstro que devora seus suprimentos e rouba suas armas"<<endl;
            break;
        }
        
        return 0;
}