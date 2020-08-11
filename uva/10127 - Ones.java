import java.util.Scanner;
import java.math.*;

class Main {
    public static void main(String[] args) {
        Scanner scanf = new Scanner(System.in);
        while(scanf.hasNext()){
            int a = scanf.nextInt();
            BigInteger num = new BigInteger("0");
            for(int i=0; ; i++){
                num=num.add(BigInteger.valueOf(10).pow(i));
                if(num.mod(BigInteger.valueOf(a))==BigInteger.valueOf(0)){
                    System.out.println(i+1);
                    break;
                }
            }
        }
    }    
}
