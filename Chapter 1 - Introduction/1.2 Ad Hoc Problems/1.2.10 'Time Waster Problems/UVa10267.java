import java.util.Scanner;

class Main10267 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String ins;
		String []elementosIns;
		
		char[][] imagen = new char[1][1];
		
		int M=0, N=0; //Columnas, y filas
		char C;
		int X, X1, X2, Y, Y1, Y2, max;
		
		
		while(sc.hasNext()){
			ins = sc.nextLine();
			elementosIns = ins.split(" ");
			
			switch (elementosIns[0]) {
				case "I":
					M = Integer.parseInt(elementosIns[1]);
					N = Integer.parseInt(elementosIns[2]);
					
					imagen = new char[N][M];
					
					for (int i = 0; i < N; i++) {
						for (int j = 0; j < M; j++) {
							imagen[i][j]='O';
						}
					}
					break;
				case "L":
					X = Integer.parseInt(elementosIns[1]);
					Y = Integer.parseInt(elementosIns[2]);
					C = elementosIns[3].charAt(0);
					
					imagen[Y-1][X-1] = C;
					break;
				case "V":
					X = Integer.parseInt(elementosIns[1]);
					Y1 = Integer.parseInt(elementosIns[2]);
					Y2 = Integer.parseInt(elementosIns[3]);
					
					max = Math.max(Y1, Y2);
					Y1 = Math.min(Y1,  Y2);
					Y2 = max;
					
					C = elementosIns[4].charAt(0);
					for(int i = 0; i<(Y2-Y1+1); i++){
						imagen[Y1+i-1][X-1]=C;
					}
					
					break;
				case "H":
					X1 = Integer.parseInt(elementosIns[1]);
					X2 = Integer.parseInt(elementosIns[2]);
					Y = Integer.parseInt(elementosIns[3]);
					
					max = Math.max(X1, X2);
					X1 = Math.min(X1,  X2);
					X2 = max;
					
					C = elementosIns[4].charAt(0);
					for(int i = 0; i<(X2-X1+1); i++){
						imagen[Y-1][X1+i-1]=C;
					}
					
					break;
				case "K":
					X1 = Integer.parseInt(elementosIns[1]);
					Y1 = Integer.parseInt(elementosIns[2]);
					X2 = Integer.parseInt(elementosIns[3]);
					Y2 = Integer.parseInt(elementosIns[4]);
					C = elementosIns[5].charAt(0);
					
					for (int i = Y1-1; i < Y2; i++) {
						for (int j = X1-1; j < X2; j++) {
							imagen[i][j]=C;
						}
					}
					
					break;
				case "F":
					X = Integer.parseInt(elementosIns[1]);
					Y = Integer.parseInt(elementosIns[2]);
					C = elementosIns[3].charAt(0);
					
					llenar(imagen, X-1, Y-1, M, N, imagen[Y-1][X-1], C);
					
					break;
				case "S":
					System.out.println(elementosIns[1]);
					
					for (int i = 0; i < N; i++) {
						for (int j = 0; j < M; j++) {
							System.out.print(imagen[i][j]);
						}
						System.out.print("\n");
					}
					break;
					
				case "C":
					for (int i = 0; i < N; i++) {
						for (int j = 0; j < M; j++) {
							imagen[i][j]='O';
						}
					}
					break;
	
				default:
					break;
			}
			
			if(elementosIns[0].equals("X")){
				//System.out.print("\
				break;	
			}
		}
		
		sc.close();
	}
	
	public static void llenar(char[][]arr, int x, int y, int M, int N, char temp, char C){
		if (temp == C)
			return;
		if(x<0||x>=M||y<0||y>=N)
			return;
		
		if(arr[y][x]==temp)
			arr[y][x]=C;
		else
			return;
		
		//checar izquierda
		llenar(arr, x-1, y, M, N, temp, C);
		
		//checar arriba
		llenar(arr, x, y-1, M, N, temp, C);
		
		//checar derecha
		llenar(arr, x+1, y, M, N, temp, C);
		
		//checar abajo
		llenar(arr, x, y+1, M, N, temp, C);
	}
}
