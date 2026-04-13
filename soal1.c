#include <stdio.h>

int main() {
    int izin, suhu, radiasi, jam;
    const char *prompt = "TOLAK";

    scanf("%d" "%d" "%d" "%d", &izin, &suhu, &radiasi, &jam);

    if (radiasi >= 6) {
        prompt = "TOLAK";
    }
    else if (suhu >= 390) {
        prompt = "KARANTINA";
    }
    else if (izin == 1 && jam < 6 || jam > 20) {
        prompt = "TOLAK";
    }
    else if (izin == 1) {
        prompt = "MASUK";
    }
    else if (izin == 2 && radiasi <= 2 && jam > 8 && jam < 18) {
        prompt = "MASUK";
    }
    else if (izin == 2) {
        prompt = "PEMERIKSAAN";
    }
    else if (izin == 3 && radiasi == 0 && suhu < 380) {
        prompt = "MASUK";
    }

    
    printf("%s", prompt);
    return 0;
}
