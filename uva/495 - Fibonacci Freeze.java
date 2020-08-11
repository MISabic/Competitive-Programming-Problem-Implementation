import java.math.BigInteger;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanf=new Scanner(System.in);
        BigInteger[] fibo = new BigInteger[5005]; 
        fibo[0]=BigInteger.ZERO;
        fibo[1]=BigInteger.ONE;
        for(int i=2; i<5005; i++){
            fibo[i] = fibo[i-1].add(fibo[i-2]);
        }
        while(scanf.hasNext()){
            int n = scanf.nextInt();
            System.out.println("The Fibonacci number for " + n + " is " + fibo[n]);
        }
    }  
}
