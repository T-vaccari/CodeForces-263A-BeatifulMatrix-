#include <stdio.h> 
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>




int main (){
    int row,col;
    int counter=0;
    int array[5][5];
    for(int i=0;i<5;i++){
        for(int k=0;k<5;k++){
            scanf("%d ",&array[i][k]);
            if(array[i][k]==1){
                row=i;
                col=k;
            }
        
        }
        printf("\n");
        
    }



    
     
    printf("%d",abs(2-row)+abs(2-col));
    


    return 0;
}


