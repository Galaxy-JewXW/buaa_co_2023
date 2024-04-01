#include <bits/stdc++.h>
using namespace std;
#define M 100007
#define N 1007
#define INF 0x3f3f3f3f
#define ll long long
#define db double

int main() {
    char s1[400], s2[400];
    char s3[400], s4[400];
    int flag = 1;
    FILE* fp1;
    FILE* fp2;
    FILE* fp3;
    FILE* fp4;
    FILE* fp5;
    FILE* fp6;
    fp1 = fopen(
        "D:\\coding_file\\study\\Lesson\\co_"
        "lesson\\lesson\\p7\\statistic\\mips_out_another.txt",
        "r");
    fp2 = fopen(
        "D:\\coding_file\\study\\Lesson\\co_"
        "lesson\\lesson\\p7\\statistic\\isim_out.txt",
        "r");
    fp3 = fopen(
        "D:\\coding_file\\study\\Lesson\\co_"
        "lesson\\lesson\\p7\\statistic\\result.txt",
        "a+");
    fp4 = fopen(
        "D:\\coding_file\\study\\Lesson\\co_"
        "lesson\\lesson\\p7\\statistic\\test.asm",
        "r");
    fp5 = fopen(
        "D:\\coding_file\\study\\Lesson\\co_lesson\\lesson\\p7\\statistic\\p7_"
        "error_code.asm",
        "a+");
    fp6 = fopen(
        "D:\\coding_file\\study\\Lesson\\co_"
        "lesson\\lesson\\p7\\statistic\\isim_out_another.txt",
        "w");
    int i = 0, j = 0;
    int n = 0;
    int line = 0;
    int l1 = 0, l2 = 0;
    while (fgets(s1, 400, fp1)) {
        string s = s1;
        // printf("%d", s.find("$0"));
        if (s.find("$0") != -1) {
            continue;
        }
        line++;
        if (s1[0] == 'I') {
            fgets(s1, 400, fp1);
            fgets(s1, 400, fp1);
        }
        fgets(s2, 400, fp2);
        if (s2[0] == 'I') {
            fgets(s2, 400, fp2);
            fgets(s2, 400, fp2);
        }
        l1++;
        l2++;
        for (i = 0; s1[i] != '\0'; i++) {
            if (s1[i] == '@') {
                break;
            }
        }
        for (j = 0; s2[j] != '\0'; j++) {
            if (s2[j] == '@') {
                break;
            }
        }
        fprintf(fp6, "%s", s2 + j);
        if (strcmp(s1 + i, s2 + j)) {
            fprintf(fp3, "Error in line %d\n", line);
            fprintf(fp3, "get     :%s", s2);
            fprintf(fp3, "expect  :%s\n\n", s1 + i);
            flag = 0;
        }
    }
    if (flag) {
        fprintf(fp3, "Accept\n");
        printf("Accept\n");
    } else {
        printf("Error\n");
        fprintf(fp5, "#error begin with\n");
        while (fgets(s3, 400, fp4)) {
            fputs(s3, fp5);
        }
        fprintf(fp5, "#error end\n\n\n");
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return 0;
}
