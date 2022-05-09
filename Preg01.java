
package preg;
import java.util.Scanner;
public class preg01 {
    public static void main(String[] args) {
        Scanner dato=new Scanner(System.in);
        System.out.println("limite (n):");
        double n=dato.nextDouble();
        double resu=0.25-(1/(n+4));
        System.out.println("resultado:");
        System.out.println(resu);
        System.out.println("--FIN--");
    }
}