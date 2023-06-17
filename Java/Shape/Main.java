import java.util.Scanner;
class Circle {
    int diameter;
    double calculateArea() {
        return Math.PI * Math.pow(diameter / 2.0, 2);
    }
}
class Rectangle {
    int width, height;
    double calculateArea() {
        return width * height;
    }
}
class Cylinder {
    Circle base;
    Rectangle body;
    double calculateVolume() {
        return base.calculateArea() * body.height;
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        Cylinder[] cylinders = new Cylinder[n];
        for (int i = 0; i < n; i++) {
            cylinders[i] = new Cylinder();
            cylinders[i].base = new Circle();
            cylinders[i].body = new Rectangle();
            cylinders[i].base.diameter = input.nextInt();
            cylinders[i].body.width = input.nextInt();
            cylinders[i].body.height = input.nextInt();
        }
        double totalVolume = 0;
        for (int i = 0; i < n; i++) {
            totalVolume += cylinders[i].calculateVolume();
        }
        double avgVolume = totalVolume / n;

        int countAboveAvg = 0;
        for (int i = 0; i < n; i++) {
            if (cylinders[i].calculateVolume() > avgVolume) {
                countAboveAvg++;
            }
        }
        System.out.printf("%.2f %d", avgVolume, countAboveAvg);
    }
}
