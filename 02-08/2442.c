#include <stdio.h>
#include <stdlib.h>

int main(){
    int qntDias, numArvores, i, total = 0, j;
    scanf("%d%d", &qntDias, &numArvores);
    int frutas[numArvores];
    char dias;
    for(i = 0;i<numArvores;i++){
        scanf("%d", &frutas[i]);
    }
    for (i = 0; i < qntDias; i++)
    {
        setbuf(stdin, NULL);
        scanf("%c", &dias);
        getchar();
        if(dias == 'C'){
            for (j = 0; j < numArvores; j++)
            {
                if(frutas[j] != 0){
                    frutas[j]++;
                    total += frutas[j];
                }
            }
        }
        else if(dias == 'E'){
            for (j = 0; j < numArvores; j++)
            {
                if(frutas[j] != 0){
                    frutas[j]--;
                    total += frutas[j];
                }
            }
        }
    }
    printf("%d\n", total);
    
}