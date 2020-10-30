#include <stdio.h>

#define rows 2
#define cols 7
void countOnes(int resultMass[rows], int mass[rows][cols]){
    for (int i=0;i<rows;i++){
        int resultOfRow = 0;
        for(int j=0;j<cols;j++){
            if(mass[i][j]>0){
                resultOfRow++;
            }
            else if(resultOfRow>0){
                    break;
            }
        }
        resultMass[i]=resultOfRow;
    }   
}

void printResult(int resultMass[rows]){
     for(int i=0; i<rows;i++){
         printf("%d \n",resultMass[i]);
     }
}

int main (){
    int result[rows];
    int arr [rows][cols] = {{0,0,0,0,1,1,1},{1,1,1,0,0,0,1}}; 
    countOnes(result, arr);
    printResult(result);
    return 0; 
}  