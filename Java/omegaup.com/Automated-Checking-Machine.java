import java.util.*;

class AutomatedCheckingMachine {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int v[] = new int[5];
        int w[] = new int[5];
        for (int i = 0; i < 5; i++) {
           v[i] = in.nextInt();
        }

        for (int i = 0; i < 5; i++) {
           w[i] = in.nextInt();
        }

        boolean sw = true;
        
        for (int i = 0; i < 5; i++) {
           if(v[i] == w[i]) {
              sw = false;
           }
        }

        System.out.println(sw ? "Y" : "N");
        
    }
}