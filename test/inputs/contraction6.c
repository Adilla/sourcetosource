int E[1024][1024][1024];
int A[1024][1024];
int B[1024][1024];
int C[1024][1024];
int D[1024][1024][1024];

void contraction1() {

#pragma scop
  for (int i = 0; i < 1024; i++)
    for (int j = 0; j < 1024; j++) 
        for (int k = 0; k < 1024; k++)
          for (int l = 0; l < 1024; l++)
            for (int m = 0; m < 1024; m++)
              for (int n = 0; n < 1024; n++) 
                E[i][j][k] += A[i][l] * B[j][m] * C[k][n] * D[l][m][n];        
#pragma endscop
}
