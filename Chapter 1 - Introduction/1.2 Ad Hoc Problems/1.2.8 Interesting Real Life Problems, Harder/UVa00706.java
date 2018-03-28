import java.util.Scanner;

class Maina {

	public static void main(String[] args) {
		Scanner
		sc = new Scanner(System.in);
		
		int s;
		char c;
		String numero;
		
		s = sc.nextInt();
		numero = sc.next();
		
		while(s!=0){
			
			for (int i = 1; i <= 2*s+3; i++) {
				for (int j = 0; j < numero.length(); j++) {
					c = numero.charAt(j);
					
					if(i==1){
						System.out.print(" ");
						
						if(c=='1'||c=='4'){
							for(int k = 0; k<s;k++){
								System.out.print(" ");
							}
						}else{
							for(int k = 0; k<s;k++){
								System.out.print("-");
							}
						}
						
						System.out.print(" ");
					}else if(i==s+2){
						System.out.print(" ");
						
						if(c=='0'||c=='1'||c=='7'){
							for(int k = 0; k<s;k++){
								System.out.print(" ");
							}
						}else{
							for(int k = 0; k<s;k++){
								System.out.print("-");
							}
						}
						
						System.out.print(" ");
					}else if(i==2*s+3){
						System.out.print(" ");
						
						if(c=='1'||c=='4'||c=='7'){
							for(int k = 0; k<s;k++){
								System.out.print(" ");
							}
						}else{
							for(int k = 0; k<s;k++){
								System.out.print("-");
							}
						}
						
						System.out.print(" ");
						
					}else if(i>1&&i<s+2){
						if(c=='0'||c=='4'||c=='5'||c=='6'||c=='8'||c=='9'){
							System.out.print("|");
						}else{
							System.out.print(" ");
						}
						
						for(int k = 0; k<s;k++){
							System.out.print(" ");
						}
						
						if(c=='5'||c=='6'){
							System.out.print(" ");
						}else{
							System.out.print("|");
						}
						
					}else{
						if(c=='0'||c=='2'||c=='6'||c=='8'){
							System.out.print("|");
						}else{
							System.out.print(" ");
						}
						
						for(int k = 0; k<s;k++){
							System.out.print(" ");
						}
						
						if(c=='2'){
							System.out.print(" ");
						}else{
							System.out.print("|");
						}
					}
					
					if(j<numero.length()-1)
						System.out.print(" ");
					else
						System.out.print("\n");
				}
			}
			
			System.out.print("\n");
			
			s = sc.nextInt();
			numero = sc.next();
		}
		
		sc.close();
	}

}
