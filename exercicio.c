#include <stdio.h>

void listarNotas( float notas[], int quantidade);
float calculaMedia( float notas[], int quantidade);

int main() {
    int alunos[10]; // Array para armazenar os dados dos alunos
    float notas[10]; // Array para listar as notas dos alunos
    int quantidade = 0;
    int opcao;

    do {

        printf("\n==== Sistema de Notas ====\n");
        printf("1 - Cadastrar nota!\n");
        printf("2 - Listar notas!\n");
        printf("3 - Média das notas!\n");
        printf("0 - Sair!\n");
        
        printf("Opcao: \n");
        scanf("%d", &opcao);

        switch ( opcao ){
            // O case 1 é para cadastrar as notas dos alunos
            case 1:
                if ( quantidade < 10 ){
                    printf("Digite a nota: \n");
                    scanf("%f", &notas[ quantidade ]);

                    quantidade++; // ++ Aumenta a quantidade em 1

                } else {
                    printf("Limite de notas atingido.\n");
                }
                
                break; 
            // Fim do primeiro case
            
            // O case 2 é para listar as notas dos alunos
            case 2:
                listarNotas( notas, quantidade ); // Chama a função listarNotas para exibir as notas cadastradas
            break;
            // Fim do segundo case

            // O case 3 é para calcular a média das notas dos alunos
            case 3:
                printf("Média das notas: %.2f\n", calculaMedia( notas, quantidade ));
            break;
            // Fim do terceiro case
        }

    } while ( opcao != 0 ); // O loop continua até que o usuário escolha a opção 0 para sair
    {
        return printf("Saindo do sistema...\n"); // Mensagem de saída do sistema
    }
}
// Final das chaves do main

// Parte do modulos
void listarNotas( float notas[], int quantidade ){
    for ( int i = 0; i < quantidade; i++ ){
        printf("%.1f\n", notas[ i ] );
    }
}

float calculaMedia( float notas[], int quantidade ){
    float soma = 0;

    for ( int i = 0; i < quantidade; i++){
        soma += notas[ i ];
    } 

    return soma / quantidade;
}