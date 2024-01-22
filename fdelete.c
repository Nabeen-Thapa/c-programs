#include <stdio.h>

int main() {
    FILE *ipf,*opf;
	ipf = fopen("D:\\input_file.txt", "r");
    opf = fopen("D:\\output_file.txt", "w");

    char word[100];
    while (fscanf(ipf, "%s", word) != EOF) {
        if (strcmp(word, "three") != 0 && strcmp(word, "bad") != 0 && strcmp(word, "time") != 0) {
            fprintf(opf, "%s ", word);
        }
    }

    fclose(ipf);
    fclose(opf);

    return 0;
}
