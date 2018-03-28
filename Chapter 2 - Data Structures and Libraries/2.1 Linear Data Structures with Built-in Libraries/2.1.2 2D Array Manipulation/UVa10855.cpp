#include <stdio.h>
#include <string>
#include <iostream>

int main (){
	int N, n;

	bool flag;

	scanf("%d %d", &N, &n);
	getchar();

	while(N!=0 && n!=0){
		std::string m1[N];
		std::string m2[n];

		int cont1=0, cont2=0, cont3=0, cont4=0;

		for (int i = 0; i < N; i++)
			std::getline (std::cin,m1[i]);

		for (int i = 0; i < n; i++)
			std::getline (std::cin,m2[i]);
		//REG
		for (int NI = 0; NI < (N-n+1); NI++){
			for (int NJ = 0; NJ < (N-n+1); NJ++){
				flag = true; 
				for (int ni = 0; ni < n && flag; ni++){
					for (int nj = 0; nj < n && flag; nj++){
						if (m1[NI+ni][NJ+nj]!=m2[ni][nj]){
							flag = false;
						}
					}
				}

				if (flag)
					cont1++;
			}
		}

		//Rotated 90
		for (int NI = 0; NI < (N-n+1); NI++){
			for (int NJ = 0; NJ < (N-n+1); NJ++){
				flag = true; 
				for (int ni = 0; ni < n && flag; ni++){
					for (int nj = 0; nj < n && flag; nj++){
						// printf("%d %d\n", NI+ni, NJ+nj);
						// printf("%d %d\n", n-nj-1, ni);
						// printf("Checando %c con %c\n\n", m1[NI+ni][NJ+nj], m2[n-nj-1][ni]);
						if (m1[NI+ni][NJ+nj]!=m2[n-nj-1][ni]){
							flag = false;
						}
					}
				}

				if (flag)
					cont2++;
			}
		}

		//Rotated 180
		for (int NI = 0; NI < (N-n+1); NI++){
			for (int NJ = 0; NJ < (N-n+1); NJ++){
				flag = true; 
				for (int ni = 0; ni < n && flag; ni++){
					for (int nj = 0; nj < n && flag; nj++){
						// printf("%d %d\n", NI+ni, NJ+nj);
						// printf("%d %d\n", n-ni-1, n-nj-1);
						// printf("Checando %c con %c\n\n", m1[NI+ni][NJ+nj], m2[n-ni-1][n-nj-1]);
						if (m1[NI+ni][NJ+nj]!=m2[n-ni-1][n-nj-1]){
							flag = false;
						}
					}
				}

				if (flag)
					cont3++;
			}
		}

		//Rotated 270
		for (int NI = 0; NI < (N-n+1); NI++){
			for (int NJ = 0; NJ < (N-n+1); NJ++){
				flag = true; 
				for (int ni = 0; ni < n && flag; ni++){
					for (int nj = 0; nj < n && flag; nj++){
						// printf("%d %d\n", NI+ni, NJ+nj);
						// printf("%d %d\n", nj, n-ni-1);
						// printf("Checando %c con %c\n\n", m1[NI+ni][NJ+nj], m2[nj][n-ni-1]);
						if (m1[NI+ni][NJ+nj]!=m2[nj][n-ni-1]){
							flag = false;
						}
					}
				}

				if (flag)
					cont4++;
			}
		}

		printf("%d %d %d %d\n", cont1, cont2, cont3, cont4);

		scanf("%d %d", &N, &n);
		getchar();
	}
	
	return 0;
}