void matrizc(int matrizA[100][100] , int matrizB[100][100] , int matrizC[100][100] , int n , int m) {
    int i , j;
    for (i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

