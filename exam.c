// drameloN @13:59 28Jun2024
#include <stdio.h>

int main() {
    int i, v, i2, v2, x, y, x2, y2, mana, cps;
    scanf("%d %d", &y, &x);
    scanf("%d %d", &mana, &cps);

    int table[x][y];
    for (i=0; i<x; i++){
        for (v=0; v<y; v++){
            scanf(" %d", &table[i][v]);
        };
    };

    int rt=0, tmp=0;
    for (i=0; i<x; i++){
        for (v=0; v<y; v++){
            for (i2=i; i2<x; i2++){
                for (v2=v; v2<y; v2++){
                    if ((i2-i+1)*(v2-v+1)*cps > mana){break;};
                    tmp=0;
                    for (x2=i; x2<=i2; x2++){
                        for (y2=v; y2<=v2; y2++){
                            tmp+=table[x2][y2];
                        };
                    };
                    if (tmp>rt){
                        rt=tmp;
                    };
                };
            };
        };
    };
    printf("%d", rt);
    return 0;
}