#include <iostream>

using namespace std;
void exibirTabuleiro(char matriz[3][3]){
    for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
            if(j == 2) cout << " " << matriz[i][j] << " ";
            else{ 
                cout << " " << matriz[i][j] << " " << "|";
            }
            }
            if(i != 2){
            cout << endl;
            cout << "-----------" << endl;
        }
    }
}
int verificarVitoria(char matriz[3][3]){
    
    for(int i = 0; i < 3; i++){
        int auxXh = 0;
        int auxOh = 0;
        int auxXv = 0;
        int auxOv = 0;
        for(int j = 0; j < 3; j++){
            if(matriz[i][j] == 'X'){
                auxXh++;
            }
            if(matriz[j][i] == 'X'){
                auxXv++;
            }
            if(matriz[i][j] == 'O'){
                auxOh++;
            }
            if(matriz[j][i] == 'O'){
                auxOv++;
            }
            
        }
        
        if(auxXh == 3 || auxXv == 3){
            cout << "Parabéns! Jogador 1 venceu!" << endl;
            return 0;
        }
        else if(auxOh == 3 || auxOv ==  3){
            cout << "Parabéns! Jogador 2 venceu!" << endl;
            return 0;
        }
    }
    int auxd1 = 0;
    int auod1 = 0;
    for(int i = 0; i < 3; i++){
        if(matriz[i][i] == 'X'){
            auxd1++;
        }
        else if(matriz[i][i] == 'O'){
            auod1++;
        }
    }
    if(auxd1 == 3){
        cout << "Parabéns! Jogador 1 venceu!" << endl;
        return 0;
    }
    if(auod1 == 3){
        cout << "Parabéns! Jogador 2 venceu!" << endl;
        return 0;
    }
    if(matriz[0][2] == 'X' && matriz[1][1] == 'X' && matriz[2][0] == 'X'){
        cout << "Parabéns! Jogador 1 venceu!" << endl;
        return 0; 
    }
    else if(matriz[0][2] == 'O' && matriz[1][1] == 'O' && matriz[2][0] == 'O'){
        cout << "Parabéns! Jogador 2 venceu!" << endl;
        return 0;  
    }
  
    return 1;
    
}
bool verificarEmpate(char matriz[3][3]){
    int aux = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(matriz[i][j] == 'X' || matriz[i][j] == 'O'){
                aux++;
            }
        }
    }
    if(aux == 9){
        cout << "Empate! Nenhum jogador venceu." << endl;
        return true;
    }
    return false;
}
bool validarJogada(int entrada, char matriz[3][3]){
    if(1 > entrada || entrada > 9 || matriz[entrada/3][(entrada%3)-1] == 'X' || matriz[entrada/3][(entrada%3)-1] == 'O'){
        return false;
    }
    return true;
}
int main(){
    bool jogadorx = true;
    char matriz[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            matriz[i][j] = (3*i + j + 1) + '0';
        }
    }
    exibirTabuleiro(matriz);
    while(true){
        if(verificarVitoria(matriz) == 0 || verificarEmpate(matriz)){
            cout << "Deseja reiniciar o jogo? (S/N)" << endl;
            char aux;
            cin >> aux;
            if (aux == 'S'){
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    matriz[i][j] = (3*i + j + 1) + '0';
                }
            }
                continue;
            }
            else if (aux == 'N'){
                return 0;
            }
        }
        cout << endl;
        if(jogadorx){
            cout << "Jogador 1 (X), escolha uma posição: ";
            int aux;
            cin >> aux;
            while(!validarJogada(aux, matriz)){
                cout << "Posição inválida ou já ocupada! Escolha outra posição."<< endl;
                cin >> aux;
                
            }
            matriz[aux/3][(aux%3)-1] = 'X';
            jogadorx = false;
        }
        else{
            cout << "Jogador 2 (O), escolha uma posição: ";
            int aux;
            cin >> aux;
            while(!validarJogada(aux, matriz)){
                cout << "Posição inválida ou já ocupada! Escolha outra posição." << endl;
                cin >> aux;
                
            }
            matriz[aux/3][(aux%3)-1] = 'O';
            jogadorx = false;
            jogadorx = true;
        }
        
        cout << endl;
        exibirTabuleiro(matriz);
        cout << endl;
    }
}
