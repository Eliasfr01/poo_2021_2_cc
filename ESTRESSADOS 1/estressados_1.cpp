#include <iostream>
#include <vector>
using namespace std;

/* Buscar */
/*bool existe(vector<int> vet, int valor){
    for (int i = 0; i < vet.size(); i++){
            if (vet[i] == valor)
                return true;
        
    }
    return false;
}*/

/*int contar(vector<int> vet, int valor){
    int cont {0};
    for (int i = 0; i < vet.size(); i++){
        if (vet[i] == valor){
            cont++;
        }
    }
    return cont;
}*/

/*int procurar_valor(vector<int> vet, int valor){
    for (int i = 0; i < vet.size(); i++){
        if (vet[i] == valor){
            return i;
        }
    }
    constexpr int fora_pos {-1};
        return fora_pos;
}*/

int procurar_valor_posi(vector<int> vet, int valor, int pos){
    for (int i = pos; i < vet.size(); i++)
    {
        if (vet[i] == valor){
            return i;
        }
    }
    constexpr int fora_pos {-1};
        return fora_pos;
}

int main(){
    /*cout << existe({-1, -50, -99}, -1) << '\n';
    cout << existe({-1, -50, -99}, 10) << '\n';*/

    /*cout << contar({-1, -50, -1, -99}, -1) << '\n';
    cout << contar({-1, -50, -1, -99}, 10) << '\n';*/

    /*cout<< procurar_valor({-1, -50, -1 -99}, -50) << '\n';
    cout<< procurar_valor({-1, -50, -1, -99}, 10) << '\n';*/

    cout << procurar_valor_posi({5, 3, -1, -50, -1, -99}, -1, 0) << '\n'; 
    cout << procurar_valor_posi({5, 3, -1, -50, -1, -99}, -1, 3) << '\n';
    cout << procurar_valor_posi({5, 3, -1, -50, -1, -99}, -1, 4) << '\n';
}