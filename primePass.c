// drameloN @10:51 28Jun2024
#include <stdio.h>
#include <math.h>

int main() {
	long int n, dn;
    scanf("%ld", &n); dn = n;
    printf("%ld = ", n);

    int comp=0;
    for (int x=2; x<sqrt(dn); x++){
        int t=0;
        for (;n%x==0;){
            n/=x; t+=1;
        }
        if (comp && n>1){printf(" x "); comp=0; };
        if (t==1){printf("%d", x); comp=1; }
        else if (t>1){printf("%d^%d", x, t); comp=1; };
    }
    if (n>1) printf("%ld", n);

	return 0;
}
