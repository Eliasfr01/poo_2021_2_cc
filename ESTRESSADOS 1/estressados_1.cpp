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

/*int procurar_valor_posi(vector<int> vet, int valor, int pos){
    for (int i = pos; i < vet.size(); i++)
    {
        if (vet[i] == valor){
            return i;
        }
    }
    constexpr int fora_pos {-1};
        return fora_pos;
}*/

/*MELHOR CASO*/

/*int menor(vector<int> vet){
    int num_menor{vet[0]};
    for (int i = 0; i < vet.size(); i++){
        if (vet[i] < num_menor){
            num_menor = vet[i];
        }
    }
    return num_menor;
}*/

/*int pos_menor(vector<int> vet){
    int pos{vet[0]};
    for (int i = 0; i < vet.size(); i++){
        if (vet[i] < vet[pos]){
            pos = i;
        }
    }
    return pos;
}*/

/*int pos_menor_valor_apartir(vector<int> vet, int pos){
    int num_menor {pos};
    for (int i = pos; i < vet.size(); i++){
        if (vet[i] < vet[num_menor]){
            num_menor = i;
        }
    }
    return num_menor;
}*/
                
/*int procurar_pos_melhor_se(vector<int> vet){
    int aux {-1};
    for (int i = 0; i < vet.size(); i++){
        if (vet[i] > 0 && (aux == -1 || vet[i] < vet[aux])){
            aux = i;
        }
    }
    return aux;
}*/


/*CONTAGEM*/

/*float calcular_stress_medio(vector<int> vet){
    float media {0};
    for (int i = 0; i < vet.size(); i++){
        media+= (vet[i] < 0) ? -vet[i] : vet[i];
    }
    if (vet.size() == 0){
        return media;
    }
    
    return media/vet.size();
}*/

/*string mais_homem_mais_mulher(vector<int> vet){
    int cont_h {0};
    int cont_m {0};
    
    for (int i = 0; i < vet.size(); i++){
        if (vet[i] > 0){
            cont_h++;
        }
        if (vet[i] < 0){
            cont_m++;
        }
    }

    if (cont_h > cont_m){
        return "homens";
    }
    else if (cont_h < cont_m){
        return "mulheres";
    } 
        return "empate";
}*/

/*string qual_metade_eh_mais_estressada(vector<int> vet){
    int lado1 {0};
    int lado2 {0};
    int dividir = vet.size() / 2;

    for (int i = 0; i < vet.size(); i++){
        int valor {abs(vet[i])};
        if (i < dividir){
            lado1+= valor;
        }
        else{
            lado2+= valor;
        }
    }

        if (lado1 == lado2){
            return "empate";
        }
        else if (lado1 > lado2){
            return "primeira";
        }
        return "segunda";
}*/

/*int homens_sao_mais_estressados_que_mulheres(vector<int> vet){
    double media_h {0};
    double media_m {0};
    int cont_h {0};
    int cont_m {0};

    for (int i = 0; i < vet.size(); i++){
        if (vet[i] < 0){
            media_m+= -vet[i];
            cont_m++;
        }
        if (vet[i] > 0){
            media_h+= vet[i];
            cont_h++;
        }
    }
    if (cont_h > 0){
        media_h /= cont_h;
    }
    if (cont_m > 0){
        media_m /= cont_m;
    }
    
    if (media_m < media_h){
        return true;
    }
    else{
        return false;
    }
}*/

int main(){
    /*cout << existe({-1, -50, -99}, -1) << '\n';
    cout << existe({-1, -50, -99}, 10) << '\n';*/

    /*cout << contar({-1, -50, -1, -99}, -1) << '\n';
    cout << contar({-1, -50, -1, -99}, 10) << '\n';*/

    /*cout<< procurar_valor({-1, -50, -1 -99}, -50) << '\n';
    cout<< procurar_valor({-1, -50, -1, -99}, 10) << '\n';*/

    /*cout << procurar_valor_posi({5, 3, -1, -50, -1, -99}, -1, 0) << '\n'; 
    cout << procurar_valor_posi({5, 3, -1, -50, -1, -99}, -1, 3) << '\n';
    cout << procurar_valor_posi({5, 3, -1, -50, -1, -99}, -1, 4) << '\n';*/

    //cout << menor({5, 3, -1, -50, -1, -99}) << '\n';
    
    //cout << pos_menor({5, 3, -100, -50, -1, -99}) << '\n';

    //cout << pos_menor_valor_apartir({5, 3, -1, -50, -1, 10}, 3) << '\n';

    /*cout << procurar_pos_melhor_se({5, 3, -1, -50, -1, -99}) << '\n';
    cout << procurar_pos_melhor_se({-1, -50, -1, -99}) << '\n';*/

    /*cout << calcular_stress_medio({1,2,3,4,5}) << '\n';
    cout << calcular_stress_medio({20, -90, 30, -40, 15}) << '\n';
    cout << calcular_stress_medio({}) << '\n';*/

    /*cout << mais_homem_mais_mulher({5, 3, -1, -50, -1, -99}) << '\n';
    cout << mais_homem_mais_mulher({5, 3, 1, -50, -1, -99}) << '\n';
    cout << mais_homem_mais_mulher({5, 3, 1, -50, -1, 99}) << '\n';*/

    /*cout << qual_metade_eh_mais_estressada({5, 3, -1, -50, -1, -99}) << '\n';
    cout << qual_metade_eh_mais_estressada({50, 98, 2, -50, -1, -99}) << '\n';
    cout << qual_metade_eh_mais_estressada({-51, 99, 1, -50, -1, -99}) << '\n';*/

    /*cout << homens_sao_mais_estressados_que_mulheres({1,3,-10,20,-50}) << '\n';
    cout << homens_sao_mais_estressados_que_mulheres({-1,-3,10,-20,50}) << '\n';
    cout << homens_sao_mais_estressados_que_mulheres({1,2,3,4,5}) << '\n';
    cout << homens_sao_mais_estressados_que_mulheres({-1,-2,-3,-4,-5}) << '\n';
    cout << homens_sao_mais_estressados_que_mulheres({}) << '\n';*/
}