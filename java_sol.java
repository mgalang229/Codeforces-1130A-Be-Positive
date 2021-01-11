import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
       Scanner in = new Scanner(System.in);
       int n = in.nextInt();
       int pos = 0;
       int neg = 0;
       for (int i = 0; i < n; i++)  {
           int a = in.nextInt();
           if (a > 0) {
               pos++;
           } else {
               neg++;
           }
       }
       int tmp = (n % 2 == 0 ? n / 2 : n / 2 + 1);
       if (pos > neg) {
           System.out.println(pos >= tmp ? 1 : 0);
       } else {
           System.out.println(pos >= tmp ? -1 : 0);
       }
    }
}
