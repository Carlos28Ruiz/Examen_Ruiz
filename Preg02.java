
package preg;
import java.util.Scanner;
public class preg02 {
    public static void main(String[] args) {
        Scanner dato=new Scanner(System.in);
        System.out.println("numero:");
        int numero=dato.nextInt();
        int tamano=Integer.toString(numero).length();
        int cos;
        int resi;
        int i=1;
        System.out.println("resultado:");
        while(i<=tamano){
            cos=(int)(numero/Math.pow(10.0,tamano-i));
            resi=(int)(numero%Math.pow(10.0,tamano-i));
            System.out.println(cos);
            numero=resi;
            i++;
        }
        System.out.println("--FIN--");
    }
}