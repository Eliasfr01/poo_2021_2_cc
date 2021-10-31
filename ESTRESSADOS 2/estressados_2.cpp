#include <iostream>
#include <vector>
#include <time.h>>
using namespace std;

//FILTER
/*vector<int> clonar(vector<int> vet) {
    vector<int> copia_vetor;
    for (int i = 0; i < vet.size(); i++){
        copia_vetor.push_back(vet[i]);
    }
    return copia_vetor;
}*/

/*vector <int> pegar_homens(vector <int> vet){
    vector<int> armazena_homens;
    for (int i = 0; i < vet.size(); i++){
        if (vet[i] > 0){
            armazena_homens.push_back(vet[i]);
        }
    }
    return armazena_homens;
}*/

/*vector <int> pegar_calmos(vector <int> vet) {
    vector <int> calmos;
    int permitido {9};
    for (auto i : vet){
        if (int elem = (i < 0) ? -i : i; elem <= permitido){
            calmos.push_back(i);
        }
    }
    return calmos;
}*/

/*vector <int> pegar_mulheres_calmas(vector <int> vet){
    vector <int> mulheres_calmas;
    int permitido {-9};
    for (auto i : vet){
        if (i >= permitido && i < 0){
            mulheres_calmas.push_back(i);
        }
    }
    return mulheres_calmas;
}*/

//ACESSO

/*vector<int> inverter_com_copia(vector<int> vet) {
    vector<int> copia_vetor;
    for (int i = vet.size() -1; i >= 0; i--){
        copia_vetor.push_back(vet[i]);
    }
    return copia_vetor;
}/*

/*void inverter_inplace(vector<int> &vet) {
    for (int i = 0, j = vet.size() -1; i < vet.size()/2; i++){
        int aux {vet[i]};
        vet[i] = vet[j];
        vet[j] = aux;
    }
}*/

/*int sortear(std::vector<int> vet) {
    srand(time(NULL));
    return vet[rand() % vet.size()];
}*/

/*void embaralhar(vector<int> vet){
    srand(time(NULL));
    for(int i = 0; i < vet.size(); i++){
        int aleatorio {rand() % vet.size()};
        int aux {vet[i]};
        vet[i] = vet[aleatorio];
        vet[aleatorio] = aux;
    }
}*/

/*void ordenar(vector<int> vet){
    for(int i = 0; i < vet.size(); i++){
        int valor_menor {i};
        for(int j = i + 1; j < vet.size(); ++j){
            if(vet[j] < vet[valor_menor]){
                valor_menor = j;
            }
        }
        int aux {vet[i]};
        vet[i] = vet[valor_menor];
        vet[valor_menor] = aux;
    }
}*/

/*vector<int> exclusivos(vector<int> vet){
    vector<int> exclusivos;
    for(int i = 0; i < vet.size(); i++){
        bool achou {false};
        for(int j = 0; j < exclusivos.size(); j++){
            if(vet[i] == exclusivos[j]){
                achou = true;
                break;
        }
            }
            if(!achou){
                exclusivos.push_back(vet[i]);
            }
        
    }
    return exclusivos;
}*/

/*vector<int> diferentes(vector<int> vet){
    vector<int> diferentes;
    for(int i : vet){
        i = abs(i);
        bool achou {false};
        for(int j : diferentes){
            if(i == j){
                achou = true;
                break;
            }
        }
        if(!achou){
            diferentes.push_back(i);
        }
    }
    return diferentes;
}*/

/*vector<int> abandonados(vector<int> vet){
    auto inVector = [](vector<int> vet, int value){for(int i = 0; i < vet.size(); i++) if(vet[i] == value) return true; return false;};
    vector<int> aux;
    vector<int> abandonados;
    for(int i = 0; i < vet.size(); i++){
        if(inVector(aux, vet[i]) == 0){
            aux.push_back(vet[i]);
        } else {
            abandonados.push_back(vet[i]);
        }
    }
    return abandonados;
}*/

int main(){
    /*vector<int> result = clonar({1,3,-10,20,-50});
    for (size_t i = 0; i < result.size(); i++){
        cout << result[i] << '\n';
    }
    vector<int> result2 = clonar({-1,-3,10,-20,50});
    for (size_t i = 0; i < result2.size(); i++){
        cout << result2[i] << '\n';
    }*/
    
    /*vector<int> result = pegar_homens({1,3,-10,20,-50});
    for (size_t i = 0; i < result.size(); i++){
        cout << result[i] << '\n';
    }
    vector<int> result2 = pegar_homens({1,-3,10,-20,50});
    for (size_t i = 0; i < result2.size(); i++){
        cout << result2[i] << '\n';
    }*/
    
    /*vector<int> result = pegar_calmos({1,3,-10,20,-50});
    for (size_t i = 0; i < result.size(); i++){
        cout << result[i] << '\n';
    }
    vector<int> result2 = pegar_calmos({-1,-3,10,-20,50});
    for (size_t i = 0; i < result2.size(); i++){
        cout << result2[i] << '\n';
    }*/

    /*vector<int> result = pegar_mulheres_calmas({1,3,-10,20,-50});
    for (size_t i = 0; i < result.size(); i++){
        cout << result[i] << '\n';
    }

    vector<int> result2 = pegar_mulheres_calmas({-1,-3,10,-20,50});
    for (size_t i = 0; i < result2.size(); i++){
        cout << result2[i] << '\n';
    }
    
    vector<int> result3 = pegar_mulheres_calmas({-1,2,-3,4,-5});
    for (size_t i = 0; i < result3.size(); i++){
        cout << result3[i] << '\n';
    }*/
    
    /*vector<int> result = inverter_com_copia({1,3,-10,20,-50});
    for (size_t i = 0; i < result.size(); i++){
        cout << result[i] << '\n';
    }

    vector<int> result2 = inverter_com_copia({-1,-8, 10,-99,50});
    for (size_t i = 0; i < result2.size(); i++){
        cout << result2[i] << '\n';
    }*/

    //cout << sortear({1,3,-10,20,-50}) << '\n';

    /*vector<int> result = exclusivos({1,3,4,3,-1,-2,-2});
    for (int i = 0; i < result.size(); i++){
        cout << result[i] << '\n';
    }
    cout << '\n';
    vector<int> result2 = exclusivos({-1,-1,-1,-1,-1});
    for (int i = 0; i < result2.size(); i++){
        cout << result2[i] << '\n';
    }*/

    /*vector<int> result = diferentes({1,3,4,3,-1,-2,-2});
    for (int i = 0; i < result.size(); i++){
        cout << result[i] << '\n';
    }
    cout << '\n';
    vector<int> result2 = diferentes({-1,-1,-1,-1,-1});
    for (int i = 0; i < result2.size(); i++){
        cout << result2[i] << '\n';
    }
    cout << '\n';
    vector<int> result3 = diferentes({-5, 6, 1, -2, 3});
    for (int i = 0; i < result3.size(); i++){
        cout << result3[i] << '\n';
    }*/
    
    /*vector<int> result = abandonados({1,3,4,3,-1,-2,-2});
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << '\n';
    }
    cout << '\n';
    vector<int> result2 = abandonados({-1, -1, -1, -1, -1});
    for(int i = 0; i < result2.size(); i++){
        cout << result2[i] << '\n';
    }
    cout << '\n';
    vector<int> result3 = abandonados({-5, 6, 1, -2, 3});
    for (int i = 0; i < result3.size(); i++){
        cout << result3[i] << '\n';
    }*/
}