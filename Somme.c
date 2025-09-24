#include <stdio.h>
#define MAX 50
int main(){
    int l1, c1, l2,c2;
    printf("------------PROGRAMME DE SAISIE, ADDITION ET D'AFFICHAGE D'UNE MATRICE------------\n");
    printf("Entrez le nombre de lignes de la matrice A :");
    scanf("%d",&l1);
    printf("Entrez le nombre de colonnes de la matrice A :");
    scanf("%d",&c1);
    printf("Entrez le nombre de lignes de la matrice B :");
    scanf("%d",&l2);
    printf("Entrez le nombre de colonnes de la matrice B :");
    scanf("%d",&c2);

    int A[l1][c1], B[l2][c2], C[MAX][MAX];
    if(l1 != l2 || c1 != c2){
        printf("Attention : la somme n'est pas possible (dimension differentes).\n");
    }
    printf("Entrez les elements de la matrice A :\n");
    for(int i=0; i<l1; i++){
        for(int j=0; j<c1; j++){
            printf("A[%d][%d]:",i+1,j+1);
            scanf("%d",&A[i][j]);
        }
    }

    printf("Entrez les elements de la matrice B :\n");
    for(int i=0; i<l2; i++){
        for(int j=0; j<c2; j++){
            printf("B[%d][%d]:",i+1,j+1);
            scanf("%d",&B[i][j]);
        }
    }

    if(l1==l2 && c1==c2){

    printf("\nla  somme de la matrice A et B est :\n");
    for(int i=0; i<l1; i++){
        for(int j=0; j<c1; j++){
            C[i][j]= A[i][j] + B[i][j];
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
}
    return 0;
}