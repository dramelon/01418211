// drameloN @07:15 5Jul2024
// ID Revision http://grader1.cs.sci.ku.ac.th/team/problems/275/text

#include <stdio.h>

int main() {
    char name[101];
    for (int i=0; i<101; i++){ name[i]='\0'; };
    scanf(" %s", &name);

    int i=1;
    if ((int)name[0]>=0x61 && (int)name[0]<=0x7A) {
        printf("%c", name[0]-32);
    }
    else {
        printf("%c", name[0]);
    };

    for (; i<100; i++){
        if ((int)name[i]>=0x30 && (int)name[i]<=0x39){
            if ((int)name[i-1]>=0x30 && (int)name[i-1]<=0x39){
                printf("%c", name[i]); continue;
            }
            printf(" %c", name[i]); continue;
        }
        else if ((int)name[i]>=0x41 && (int)name[i]<=0x5A) {
            if ((int)name[i+1]>=0x61 && (int)name[i+1]<=0x7A) {
                printf(" %c", name[i]); continue;
            }
            else if ((int)name[i-1]>=0x41 && (int)name[i-1]<=0x5A) {
                printf("%c", name[i]); continue;
            }
            printf(" %c", name[i]); continue;
        }
        else if ((int)name[i]>=0x61 && (int)name[i]<=0x7A) {
            if ((int)name[i-1]>=0x30 && (int)name[i-1]<=0x39){
                printf(" %c", name[i]-32); continue;
            }
            printf("%c", name[i]); continue;
        };
    };

    return 0;
}