#include <stdio.h>
int rechercheSeq(int tab[], int n, int x){
    for(int i=0; i<n; i++){
        if(tab[i]== x)return i;
    }
    return -1;
}

int main(){
    int n, x;
    printf("Combien d'elements souhaitez vous entrez ? : ");
    scanf("%d", &n);

    int tab[n];
    printf("Entrez les %d elements : \n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &tab[i]);
    }
    printf("Entrez l'element rechercher : ");
    scanf("%d", &x);

    int rech= rechercheSeq(tab, n, x);
    if (rech !=-1) printf("L'element %d a ete trouver dans l'indice %d\n", x, rech);
    else printf("L'element %d n'a pas ete trouver ", x);
    return 0;
}