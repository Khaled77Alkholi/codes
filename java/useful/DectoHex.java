import java.util.*;

public class DectoHex {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int dec, rem, i = 0, n = 0;
        String[] hexa = new String[8];
        System.out.print("Enter the decimal number :");
        dec = scan.nextInt();
        while(dec != 0) {
            rem = dec%16;
            switch(rem) {
                case 10:
                    hexa[i] = "a";
                    break;
                case 11:
                    hexa[i] = "b";
                    break;
                case 12:
                    hexa[i] = "c";
                    break;
                case 13:
                    hexa[i] = "d";
                    break;
                case 14:
                    hexa[i] = "e";
                    break;
                case 15:
                    hexa[i] = "f";
                    break;
                /*   case 0:        //this is an exception for the number 0, because if the remainder is 0, the program will print "null".
                    hexa[i] = "0";
                    break;
                */
                default:
                    hexa[i] = Integer.toString(rem);

            }
            n++;
            i++;
            dec/=16;
        }
        for(int j = n-1; j>=0; j--) {
            System.out.print(hexa[j]);

        }



    }
}
