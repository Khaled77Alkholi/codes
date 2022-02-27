import java.util.*;


public class BintoDec {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        String bin;

        int total = 0;
        System.out.println("Enter hte binary number: ");
        bin = in.nextLine();
        for(int i = 0; i<bin.length(); i++) {
            if(bin.charAt(i) == '0' || bin.charAt(i) == '1') {
                total += Integer.parseInt(Character.toString(bin.charAt(i))) * Math.pow(2, (bin.length() - i - 1));
                //System.out.println(Integer.parseInt(Character.toString(bin.charAt(i))) * Math.pow(2, (bin.length() - i - 1)));
            }
            else {
                System.out.println("This isn't a binary number");
            }
        }
        System.out.println(total);








    }
}
