// drameloN @01:25 5Jul2024
// Magic Spell with Conic Section http://grader1.cs.sci.ku.ac.th/team/problems/273/text

#include <stdio.h>
#include <math.h>

int main() {
    int mobAmount=0;
    scanf(" %d", &mobAmount);

    char mob[mobAmount][1];
    for (int i=0; i<mobAmount; i++){
        scanf(" %d %d", &mob[i][0], &mob[i][1]);
    };

    int Ax2=0, By2=0, Cx=0, Dy=0, E=0, i, num=0, numexpo=0, numsign=0, afterEqual=0;
    char equation[501];
    
    for (i=0; i<501; i++){
        equation[i] = '\0';
    };

    scanf("%s", &equation);
    for (i=0; i<500; i++){
        if ((int)equation[i]>=0x30 && (int)equation[i]<=0x39){
            if ((int)equation[i]==0x30){ num=num*10+0; }
            else if ((int)equation[i]==0x31){ num=num*10+1; }
            else if ((int)equation[i]==0x32){ num=num*10+2; }
            else if ((int)equation[i]==0x33){ num=num*10+3; }
            else if ((int)equation[i]==0x34){ num=num*10+4; }
            else if ((int)equation[i]==0x35){ num=num*10+5; }
            else if ((int)equation[i]==0x36){ num=num*10+6; }
            else if ((int)equation[i]==0x37){ num=num*10+7; }
            else if ((int)equation[i]==0x38){ num=num*10+8; }
            else if ((int)equation[i]==0x39){ num=num*10+9; }
            if ((int)equation[i-1]==(int)'-'){ numsign=1; }
            numexpo++; continue;
        }

        if ((int)equation[i]==(int)'x' && (int)equation[i+1]==(int)'^' && (int)equation[i+2]==(int)'2'){
            if ((int)equation[i-1]==(int)'-' || (int)equation[i-1]==(int)'+' || (int)equation[i-1]==(int)'='){
                Ax2+=1*pow(-1,numsign)*pow(-1,afterEqual); i+=2; continue;
            }
            Ax2+=num*pow(-1,numsign)*pow(-1,afterEqual); i+=2;
        }
        else if ((int)equation[i]==(int)'y' && (int)equation[i+1]==(int)'^' && (int)equation[i+2]==(int)'2'){
            if ((int)equation[i-1]==(int)'-' || (int)equation[i-1]==(int)'+' || (int)equation[i-1]==(int)'='){
                By2+=1*pow(-1,numsign)*pow(-1,afterEqual); i+=2; continue;
            }
            By2+=num*pow(-1,numsign)*pow(-1,afterEqual); i+=2;
        }
        else if (((int)equation[i]==(int)'x' && (int)equation[i+1]==(int)'^' && (int)equation[i+2]==(int)'1')||
                 ((int)equation[i]==(int)'x')){
            Cx+=num*pow(-1,numsign)*pow(-1,afterEqual);
        }
        else if (((int)equation[i]==(int)'y' && (int)equation[i+1]==(int)'^' && (int)equation[i+2]==(int)'1')||
                 ((int)equation[i]==(int)'y')){
            Dy+=num*pow(-1,numsign)*pow(-1,afterEqual);
        }
        else if ((int)equation[i]==(int)'=' || (int)equation[i]==(int)'+' || (int)equation[i]==(int)'-' || (int)equation[i]==(int)'\0'){
            E+=num*pow(-1,numsign)*pow(-1,afterEqual);
        };

        if ((int)equation[i]==(int)'='){
            afterEqual = 1;
        }

        if ((int)equation[i-1]==(int)'\0'){
            break;
        }

        num=numexpo=numsign=0;
    };
    printf("%d %d %d %d %d\n", Ax2, By2, Cx, Dy, E);

    

    return 0;
}
//0 -354x^2+478y^2+5777x-34424y=20
//0 123456x^2-1y-1y^2-1x