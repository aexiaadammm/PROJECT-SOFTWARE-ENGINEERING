public class Main {

     public static int sum(int[] v) {
            int s = 0;
            for (int x : v) {
                s += x;
            }
            return s;
        }

    public static void main(String[] args) {
        int[] v = {4, 8, 15, 16, 23};

       System.out.println("Suma: " + sum(v));
    }
}