#include <iostream> //biblioteca padrao
#include <sstream> //para usar a funcao stringstream
#include <vector>

using namespace std;

int main()
{
    string linha;
    getline(cin, linha); //igual ao fgets de c

    stringstream ss(linha);
    string palavra;
    vector<string> palavras; //cria um vetor de strings

    while(ss >> palavra){
        palavras.push_back(palavra);
    }

    if (palavras.size() < 2){
        cout << "Invalido" << endl;
        return 0;
    }

    cout << palavras.size() << endl;

    for(string p : palavras) {
        cout << p[0];
    }
    cout << endl;

    cout << palavras.back() << " " << palavras[0][0] << "." << endl;

    return 0;
}