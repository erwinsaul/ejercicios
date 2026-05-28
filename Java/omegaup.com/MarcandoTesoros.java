import java.util.*;

public class MarcandoTesoros {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int x1 = in.nextInt();
        int y1 = in.nextInt();
        int x2 = in.nextInt();
        int y2 = in.nextInt();
        String[][] m = new String[21][21];
        for (int i = 1; i < 21; i++) {
            for (int j = 1; j < 21; j++) {
                m[i][j] = ".";
            }
        }

        for (int i = x1; i <= x2; i++) {
            for (int j = y1; j <= y2; j++) {
                if(i == x1 || i == x2 || j == y1 || j == y2) {
                    m[i][j] = "X";
                }
                if(i-x1==j-y1){
                    m[i][j] = "X";
                }
                if(y2-j==i-x1){
                    m[i][j] = "X";
                }
            }
        }

        for (int i = 1; i < 21; i++) {
            for (int j = 1; j < 21; j++) {
                System.out.print(m[i][j]+ " ");
            }
            System.out.println();
        }

        
    }
}