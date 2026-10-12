public class average {

    public static double average(int[] numbers) {
        if (numbers == null || numbers.length == 0) {
            return 0;
        }
        int sum = 0;
        for (int n : numbers) {
            sum += n;
        }
        return (double) sum / numbers.length;
    }

    public static void main(String[] args) {
        System.out.println(average(new int[]{1, 2}));        // 1.5
        System.out.println(average(new int[]{10, 20, 30}));  // 20.0
        System.out.println(average(new int[]{}));            // 0.0
        System.out.println(average(null));                   // 0.0
    }
}