import java.util.Scanner;

public class Main {
    private double length;
    private double width;

    public Main(double length, double width){
        this.length = length;
        this.width = width;        
    }

    public double calculateArea(){
        return length * width;
    }

    public static void main(String[] args){
        double length = 5.0;
        double width = 10.0;
        Main persegipanjang = new Main(length,width);
        double area = persegipanjang.calculateArea();
        System.out.println("Area dari persegi panjang adalah: " + area);
    }
}