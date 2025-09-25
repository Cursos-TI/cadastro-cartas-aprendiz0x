#include <stdio.h>
#include <locale.h>
#include <string.h> // Necessário para a função strcspn

// Função para limpar o buffer de entrada
void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int populacao1, populacao2, numeroPontosTuristicos1, numeroPontosTuristicos2;
    // Corrigido: Variáveis de string declaradas como arrays
    char codigo1[5], codigo2[5]; 
    char nomeCidade1[50], nomeCidade2[50];
    char estado1[3], estado2[3];
    float areaCidade1, areaCidade2, pib1, pib2;

    printf("Vamos iniciar o cadastro de Cartas:\n");

    // --- Coleta da Carta 1 ---
    printf("#----- Iniciar coleta da Carta 1 ----- #\n");
    
    printf("Digite o Código da carta 1 (máx 4 caracteres): "); 
    fgets(codigo1, sizeof(codigo1), stdin);
    codigo1[strcspn(codigo1, "\n")] = '\0'; // Remove o \n

    printf("Digite o nome da cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0'; // Remove o \n

    printf("Digite o Estado em que %s está (Ex: SP, RJ): ", nomeCidade1);
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = '\0'; // Remove o \n

    printf("Digite a quantidade da população de %s: ", nomeCidade1);
    scanf("%d", &populacao1);
    limpar_buffer(); // Limpa o \n restante após o scanf

    printf("Digite a área de %s: ", nomeCidade1);
    scanf("%f", &areaCidade1);
    limpar_buffer(); // Limpa o \n restante após o scanf

    printf("Digite o PIB de %s: ", nomeCidade1);
    scanf("%f", &pib1);
    limpar_buffer(); // Limpa o \n restante após o scanf

    printf("Digite o número de pontos turísticos de %s: ", nomeCidade1);
    scanf("%d", &numeroPontosTuristicos1);
    limpar_buffer(); // Limpa o \n restante após o scanf

    // --- Coleta da Carta 2 ---
    printf("\n#----- Iniciar coleta da Carta 2 ----- #\n");

    printf("Digite o Código da carta 2 (máx 4 caracteres): ");
    fgets(codigo2, sizeof(codigo2), stdin);
    codigo2[strcspn(codigo2, "\n")] = '\0';
    
    printf("Digite o nome da cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0';

    printf("Digite o Estado em que %s está (Ex: SP, RJ): ", nomeCidade2);
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = '\0';

    printf("Digite a quantidade da população de %s: ", nomeCidade2);
    scanf("%d", &populacao2);
    limpar_buffer();

    printf("Digite a área de %s: ", nomeCidade2);
    scanf("%f", &areaCidade2);
    limpar_buffer();

    printf("Digite o PIB de %s: ", nomeCidade2);
    scanf("%f", &pib2);
    limpar_buffer();

    printf("Digite o número de pontos turísticos de %s: ", nomeCidade2);
    scanf("%d", &numeroPontosTuristicos2);
    limpar_buffer();

    printf("\n\n#----- APRESENTANDO AS CARTAS -----#\n");
    printf("----- Carta 1 -----\n");
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nomeCidade1);
    printf("Estado: %s\n", estado1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", areaCidade1);
    printf("PIB: %.2f bi/R$\n", pib1);
    printf("Pontos Turísticos: %d\n", numeroPontosTuristicos1);

    printf("\n----- Carta 2 -----\n");
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nomeCidade2);
    printf("Estado: %s\n", estado2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", areaCidade2);
    printf("PIB: %.2f bi/R$\n", pib2);
    printf("Pontos Turísticos: %d\n", numeroPontosTuristicos2);

    return 0;
}
