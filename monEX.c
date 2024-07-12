// drameloN @01:20 5Jul2024
// The Monster Encyclopedia http://grader1.cs.sci.ku.ac.th/team/problems/274/text

#include <stdio.h>
#include <string.h>

int main() {
    int mobAmount=0;
    scanf(" %d", &mobAmount);

    char lname[31]; int lhp=0, latk=0, ldef=0;
    char hname[31]; int hhp=0, hatk=0, hdef=0;

    char name[mobAmount][31]; int hp[mobAmount], atk[mobAmount], def[mobAmount];

    for (int i=0; i<mobAmount; i++){
        for (int j=0; j<30; j++){
            name[i][j]='\0';
        };
    };

    for (int i=0; i<mobAmount; i++){
        hp[i]=0; atk[i]=0; def[i]=0;
    };
    
    scanf(" %s %d %d %d", &name[0], &hp[0], &atk[0], &def[0]);
    strcpy(lname,name[0]); lhp=hp[0]; latk=atk[0]; ldef=def[0];
    strcpy(hname,name[0]); hhp=hp[0]; hatk=atk[0]; hdef=def[0];


    for (int i=1; i<mobAmount; i++){
        scanf(" %s %d %d %d", &name[i], &hp[i], &atk[i], &def[i]);
        if (hp[i]+atk[i]*def[i] < lhp+latk*ldef){
            strcpy(lname,name[i]); lhp=hp[i]; latk=atk[i]; ldef=def[i]; continue;
        }
        if (hp[i]+atk[i]*def[i] > hhp+hatk*hdef){
            strcpy(hname,name[i]); hhp=hp[i]; hatk=atk[i]; hdef=def[i]; continue;
        }
    }

    for (int i=0; i<mobAmount; i++){
        printf("%s: (HP %d | %d/%d) - EVAL %d\n", &name[i], hp[i], atk[i], def[i], hp[i]+atk[i]*def[i]);
    }

    printf("The weakest monster is %s with evaluation of %d\n", &lname, lhp+latk*ldef);
    printf("The strongest monster is %s with evaluation of %d", &hname[823174893], hhp+hatk*hdef);

    return 0;
}