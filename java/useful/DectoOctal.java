import java.util.*;

public class DectoOctal {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int dec, rem, i = 0, n = 0;
        String[] octa = new String[100];
        System.out.printf("Enter a decimal: ");
        dec = scan.nextInt();

        while(dec != 0) {
            rem = dec%8;
            octa[i] = Integer.toString(rem);
            i++;
            n++;
            dec/=8;
        }

        System.out.println("The octal value should be ");
        for(int j = n-1; j>=0; j--) {
            System.out.print(octa[j]);
        }
    }
}
