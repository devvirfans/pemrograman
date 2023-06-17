import java.util.Scanner;

interface BasicArithmetic {
    double add(double a, double b);
    double subtract(double a, double b);
    double multiply(double a, double b);
    double divide(double a, double b);
}

interface AdvancedArithmetic {
    double squareRoot(double a);
    double power(double a, double b);
}

class ScientificCalculator implements BasicArithmetic, AdvancedArithmetic {
    private double currentValue;

    public ScientificCalculator() {
        this.currentValue = 0.0;
    }

    public void clear() {
        this.currentValue = 0.0;
    }

    @Override
    public double add(double a, double b) {
        return a + b;
    }

    @Override
    public double subtract(double a, double b) {
        return a - b;
    }

    @Override
    public double multiply(double a, double b) {
        return a * b;
    }

    @Override
    public double divide(double a, double b) {
        return a / b;
    }

    @Override
    public double squareRoot(double a) {
        return Math.sqrt(a);
    }

    @Override
    public double power(double a, double b) {
        return Math.pow(a, b);
    }

    public double operate(String operator, double operand) {
        switch (operator) {
            case "+":
                this.currentValue = add(this.currentValue, operand);
                break;
            case "-":
                this.currentValue = subtract(this.currentValue, operand);
                break;
            case "*":
                this.currentValue = multiply(this.currentValue, operand);
                break;
            case "/":
                this.currentValue = divide(this.currentValue, operand);
                break;
            case "^":
                this.currentValue = power(this.currentValue, operand);
                break;
            case "#":
                this.currentValue = squareRoot(this.currentValue);
                break;
            case "C":
                clear();
                break;
            default:
                throw new IllegalArgumentException("Invalid operator");
        }

        return this.currentValue;
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ScientificCalculator calculator = new ScientificCalculator();

        while (true) {
            String input = scanner.nextLine();
            if (input.equals("~")) {
                break;
            }

            String[] parts = input.split("\\s+", 2);
            String operator = parts[0];
            double operand = 0.0;
            if (parts.length == 2 && !parts[1].isEmpty()) {  // Check if operand is not empty
                operand = Double.parseDouble(parts[1]);
            }

            try {
                double result = calculator.operate(operator, operand);
                System.out.printf("%.2f\n", result);
            } catch (IllegalArgumentException e) {
                System.out.println(e.getMessage());
            }
        }

        scanner.close();
    }
}
