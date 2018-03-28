import java.util.Arrays;
import java.util.Scanner;

class p10050 {

	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		
		int T = sc.nextInt();
		
		int N,P,h;
		boolean days[];
		for (int t = 0; t < T; t++) {
			N = sc.nextInt();
			days = new boolean[N+1];
			P = sc.nextInt();
			for(int p = 0; p<P;p++){
				h = sc.nextInt();
				
				for(int i = h;i<=N;i+=h){
					if(!(i%7==6||i%7==0))
						days[i]=true;
				}
			}
			
			int cont = 0;
			for(int i=1; i<=N;i++)
				if(days[i])cont++;
			
			System.out.println(cont);
		}
		
		sc.close();
	}

}
