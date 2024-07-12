// drameloN @16:46 28jun2024
#include <stdio.h>

int main() {
	int ppl, xsam, i, v;
    scanf("%d %d", &ppl, &xsam);

    int answer[xsam];
    for (i=0; i<xsam; i++){
        scanf(" %d", &answer[i]);
    };

    int scores[ppl];
    for (i=0; i<ppl; i++){
        scores[i]=0;
    };
    for (i=0; i<ppl; i++){
        for (int v=0; v<xsam; v++){
            int ip;
            scanf(" %d", &ip);
            if (answer[v]==ip){
                scores[i]+=1;
            }
        };
    };

    for (int b6610402027=0; b6610402027<ppl; b6610402027++){printf("%d ", scores[b6610402027]); };

	return 0;
}
