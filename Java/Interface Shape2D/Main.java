import java.util.Scanner;
import java.text.DecimalFormat;

interface Shape2D {
    void set(int n, double[] x, double[] y);
    void print();
    double keliling();
}

class Polygon implements Shape2D {
    private int n;
    private double[] x;
    private double[] y;

    public void set(int n, double[] x, double[] y) {
        this.n = n;
        this.x = x;
        this.y = y;
    }

    public void print() {
        System.out.printf("[%1$.2f,%2$.2f]-[%3$.2f,%4$.2f]\n", x[0], y[0], x[n-1], y[n-1]);
    }

    public double keliling() {
        double perimeter = 0.0;
        for (int i = 0; i < n - 1; i++) {
            double dx = x[i+1] - x[i];
            double dy = y[i+1] - y[i];
            perimeter += Math.sqrt(dx*dx + dy*dy);
        }
        double dx = x[0] - x[n-1];
        double dy = y[0] - y[n-1];
        perimeter += Math.sqrt(dx*dx + dy*dy);
        return perimeter;
    }

}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        if (n <= 3) {
            sc.close();
            return;
        }
        double[] x = new double[n];
        double[] y = new double[n];
        for (int i = 0; i < n; i++) {
            x[i] = sc.nextDouble();
            y[i] = sc.nextDouble();
        }
        Shape2D polygon = new Polygon();
        polygon.set(n, x, y);
        polygon.print();

        double perimeter = polygon.keliling();
        DecimalFormat decimalFormat = new DecimalFormat("#.00");
        String formattedPerimeter = decimalFormat.format(perimeter);
        System.out.println(formattedPerimeter);
        sc.close();
    }
}

