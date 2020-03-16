
import java.util.Scanner;

public class Kattistry {
 public static void main(String[] args)  {
     Scanner scan= new Scanner (System.in);
     String a= scan.nextLine();
     
     if (a.toLowerCase().equalsIgnoreCase("oct 31") || a.toLowerCase().equalsIgnoreCase("dec 25")) {
         System.out.println("yup");
     }
     else {
         System.out.println("nope");
     }
     
   
     
    }}
