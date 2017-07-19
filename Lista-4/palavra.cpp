#include <iostream>
#include <string>
using namespace std;

/* Dada uma lista de palavras, indicar se cada uma delas é ordenada ou não*/

int main () {

    int numpalavras;
    cin >> numpalavras;

    char marcador[numpalavras];
    string palavra[numpalavras];
    cin.ignore();

    for (int i=0; i<numpalavras; i++){
      marcador[i] = 'O';
    }

    for (int i=0; i<numpalavras; i++){
      getline(cin, palavra[i]);
    }

    for (int i=0; i<numpalavras; i++){
      for (int j=0; j<palavra[i].size(); j++){
        if(palavra[i][j] >= 'A' && palavra[i][j] <= 'Z')
          palavra[i][j] += ('a' - 'A');
      }
    }

    for (int i=0; i<numpalavras; i++){
      for (int j=0; j<palavra[i].size(); j++){
        if (palavra[i][j] > palavra[i][j-1]) continue;
        else {
          marcador[i] = 'N'; break;
        }
      }
    }

    for (int i=0; i<numpalavras; i++){
      cout << palavra[i] << ": " << marcador[i] << endl;
    }
}
