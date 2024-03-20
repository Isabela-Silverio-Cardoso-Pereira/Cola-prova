/******************************************************************************

 Faça o programa principal que solicita ao usuário 
um número inteiro N e após faça a chamada de um 
procedimento com o nome de “castigo”, passando 
N como parâmetro por valor. O procedimento deve 
imprimir N vezes a frase “Não vou colar na Prova”.

*******************************************************************************/
#include <iostream>
using namespace std;
void castigo();
int n;


int main()
{
    
cin >> n;

castigo();


return 0;
}

void castigo(){
    for(int i=0; i<n; i++){
        cout << "não vou colar na prova" << endl;
        
    }
}