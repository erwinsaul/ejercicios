import java.util.*;

class AgregandoTareasReloaded {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int p = in.nextInt();
        Stack<Integer> s = new Stack<>();
        for (int i = 0; i < n; i++) {
            s.push(in.nextInt());
        }
        int r;
        while(!s.isEmpty() && s.peek() < p) {
            s.pop();
            r = r + 1;
        }
        System.out.println(r);
    }
}