import java.util.Scanner;

public class Kattis {

    public static void main(String[] args) {
        Scanner scan= new Scanner (System.in) ;
        int w = scan.nextInt();
        int e = scan.nextInt();
        int r = scan.nextInt();
        String q = scan.next();
        String[] kata= q.split("");
        int a,b,c;
        if ((w>=e)&(w>=r)&(e>r)){
            a=w;
            b=e;
            c=r;  
        }
        else if ((w>=e)&(w>=r)&(e<r)){
            a=w;
            b=r;
            c=e;  
        }
        else if ((w<=e)&(e>=r)&(w>r)){
            a=e;
            b=w;
            c=r;  
        }
        else if ((w<=e)&(e>=r)&(w<r)){
            a=e;
            b=r;
            c=w;  
        }
        else if ((r>=e)&(r>=w)&(e<w)){
            a=r;
            b=w;
            c=e;  
        }
        else {
            a=r;
            b=e;
            c=w;  
        }
                
        for (int i=0 ; i<kata.length ; i++){
        if (kata[i].equalsIgnoreCase("A")){
            System.out.print(c+" ");
        }
        else if (kata[i].equalsIgnoreCase("B")){
            System.out.print(b+" ");
        }
        else {
            System.out.print(a+" ");
        }
        }
        
}
}
