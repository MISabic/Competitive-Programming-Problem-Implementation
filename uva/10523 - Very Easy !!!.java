import java.math.BigInteger;
import java.util.Scanner;

class Main{
    public static void main(String args[]) {
        Scanner scanf = new Scanner(System.in);
        while(scanf.hasNext()){
            BigInteger total = new BigInteger("0");
            int n = scanf.nextInt();
            int a = scanf.nextInt();
            for(int i=1; i<=n; i++)
                total=total.add(BigInteger.valueOf(i).multiply(BigInteger.valueOf(a).pow(i)));
            System.out.println(total);
        }
    }
}
