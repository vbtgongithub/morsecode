#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    char output[100][10];

    printf("Please enter a string: ");
    fgets(input, sizeof(input), stdin);

    for (int i = 0; input[i] != '\0' && input[i] != '\n'; i++) {
        if (input[i] == 'A' || input[i] == 'a') strcpy(output[i], ".-");
        else if (input[i] == 'B' || input[i] == 'b') strcpy(output[i], "-...");
        else if (input[i] == 'C' || input[i] == 'c') strcpy(output[i], "-.-.");
        else if (input[i] == 'D' || input[i] == 'd') strcpy(output[i], "-..");
        else if (input[i] == 'E' || input[i] == 'e') strcpy(output[i], ".");
        else if (input[i] == 'F' || input[i] == 'f') strcpy(output[i], "..-.");
        else if (input[i] == 'G' || input[i] == 'g') strcpy(output[i], "--.");
        else if (input[i] == 'H' || input[i] == 'h') strcpy(output[i], "....");
        else if (input[i] == 'I' || input[i] == 'i') strcpy(output[i], "..");
        else if (input[i] == 'J' || input[i] == 'j') strcpy(output[i], ".---");
        else if (input[i] == 'K' || input[i] == 'k') strcpy(output[i], "-.-");
        else if (input[i] == 'L' || input[i] == 'l') strcpy(output[i], ".-..");
        else if (input[i] == 'M' || input[i] == 'm') strcpy(output[i], "--");
        else if (input[i] == 'N' || input[i] == 'n') strcpy(output[i], "-.");
        else if (input[i] == 'O' || input[i] == 'o') strcpy(output[i], "---");
        else if (input[i] == 'P' || input[i] == 'p') strcpy(output[i], ".--.");
        else if (input[i] == 'Q' || input[i] == 'q') strcpy(output[i], "--.-");
        else if (input[i] == 'R' || input[i] == 'r') strcpy(output[i], ".-.");
        else if (input[i] == 'S' || input[i] == 's') strcpy(output[i], "...");
        else if (input[i] == 'T' || input[i] == 't') strcpy(output[i], "-");
        else if (input[i] == 'U' || input[i] == 'u') strcpy(output[i], "..-");
        else if (input[i] == 'V' || input[i] == 'v') strcpy(output[i], "...-");
        else if (input[i] == 'W' || input[i] == 'w') strcpy(output[i], ".--");
        else if (input[i] == 'X' || input[i] == 'x') strcpy(output[i], "-..-");
        else if (input[i] == 'Y' || input[i] == 'y') strcpy(output[i], "-.--");
        else if (input[i] == 'Z' || input[i] == 'z') strcpy(output[i], "--..");
        else if (input[i] == '0') strcpy(output[i], "-----");
        else if (input[i] == '1') strcpy(output[i], ".----");
        else if (input[i] == '2') strcpy(output[i], "..---");
        else if (input[i] == '3') strcpy(output[i], "...--");
        else if (input[i] == '4') strcpy(output[i], "....-");
        else if (input[i] == '5') strcpy(output[i], ".....");
        else if (input[i] == '6') strcpy(output[i], "-....");
        else if (input[i] == '7') strcpy(output[i], "--...");
        else if (input[i] == '8') strcpy(output[i], "---..");
        else if (input[i] == '9') strcpy(output[i], "----.");
        else strcpy(output[i], "");  // Ignore unsupported characters
    }

    printf("\nThe Morse Code is:\n");
    for (int i = 0; input[i] != '\0' && input[i] != '\n'; i++) {
        if (strlen(output[i]) > 0) {
            printf("%s ", output[i]);
        }
    }

    return 0;
}
