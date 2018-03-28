import java.util.Scanner;

public class p10038 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		while(sc.hasNext()){
			int second, first, n, dif;
			
			n = sc.nextInt();
			boolean jolly = true;
			
			if(n>0){
			
				boolean[] difArr = new boolean[n];
				
				first = sc.nextInt();
				
				for (int i = 0; i < (n-1); i++) {
					second = sc.nextInt();	
					dif = Math.abs(second-first)-1;
					
					if(dif>=0&&dif<=(n-2)&&!difArr[dif]){
						difArr[dif]=true;
					}else{
						jolly=false;
						//break;
					}
					
					first = second;
				}
			}
			
			System.out.println(jolly?"Jolly":"Not jolly");
		}
		
		sc.close();
	}

}
