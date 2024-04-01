#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main() {
    FILE* text = fopen("../mips/text.txt", "r");
    FILE* ktext = fopen("../mips/handler.txt", "r");
    FILE* code = fopen("../mips/code.txt", "w");
    char* buff;
    int ret;
    buff = (char*)malloc(sizeof(char) * 1024);
    int text_line_cnt = 0;
    int i;
    for (i = 0; i < 1120; i++) {
        ret = fread(buff, 1, 9, text);
        if (ret != 0 && buff[0] != 0) {
            fwrite(buff, ret, 1, code);
        } else {
            fwrite("00000000\n", 9, 1, code);
        }
    }
    while (1) {
        ret = fread(buff, 1, 9, ktext);
        if (ret != 0 && buff[0] != 0) {
            fwrite(buff, ret, 1, code);
        } else {
            break;
        }
    }

    fclose(text);
    fclose(ktext);
    fclose(code);
    return 0;
}