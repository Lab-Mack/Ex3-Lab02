#include <stdio.h>

void verificarSituacao(float media, float frequencia) {
    if (frequencia < 75.0) {
        printf("Situacao: REPROVADO (frequencia insuficiente: %.1f%%)\n", frequencia);
    } else if (media >= 7.5) {
        printf("Situacao: APROVADO (media: %.1f, frequencia: %.1f%%)\n", media, frequencia);
    } else {
        printf("Situacao: DE EXAME (media: %.1f, frequencia: %.1f%%)\n", media, frequencia);
    }
}

int main() {
    float media, frequencia;

    printf("Digite a media (0.0 a 10.0): ");
    scanf("%f", &media);
    printf("Digite a frequencia (0 a 100): ");
    scanf("%f", &frequencia);

    verificarSituacao(media, frequencia);

    return 0;
}
