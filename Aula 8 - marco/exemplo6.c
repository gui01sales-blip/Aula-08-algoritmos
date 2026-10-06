#include <stdio.h>

int main() {
    float temperaturas[7];
    float soma = 0, media;
    float maior, menor;
    int acimaMedia = 0;

    for (int i = 0; i < 7; i++) {
        printf("Digite a temperatura do dia [%d]: ", i + 1);
        scanf("%f", &temperaturas[i]);
        soma += temperaturas[i];
    }

    media = soma / 7;

    maior = temperaturas[0];
    menor = temperaturas[0];

    for (int i = 0; i < 7; i++) {
        if (temperaturas[i] > maior) {
            maior = temperaturas[i];
        }

        if (temperaturas[i] < menor) {
            menor = temperaturas[i];
        }

        if (temperaturas[i] > media) {
            acimaMedia++;
        }
    }

    printf("\nMedia: %.2f °C\n", media);
    printf("Maior temperatura: %.2f °C\n", maior);
    printf("Menor temperatura: %.2f °C\n", menor);
    printf("Dias acima da media: %d\n", acimaMedia);

    return 0;
}
