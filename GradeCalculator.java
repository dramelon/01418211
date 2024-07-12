import java.util.Scanner;

public class GradeCalculator {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.print("กรอกคะแนนรวม(0-100): ");
        int score = in.nextInt();

        System.out.print("คะแนนสอบกลาง ​+ ปลายภาค(0-35): ");
        int scoreExam = in.nextInt();

        System.out.print("จำนวนครั้งที่ขาดเรียน: ");
        int absent = in.nextInt();

        System.out.print("สถานะโปรเจค(true/false): ");
        boolean projectStatus = in.nextBoolean();

        if (scoreExam < 40 || absent > 3) {
            System.out.println("ได้เกรด F");
            return;
        }

        if (projectStatus == false) {
            System.out.println("ได้เกรด I");
            return;
        }

        if (score >= 80) {
            System.out.println("ได้เกรด A");
        } else if (score >= 75) {
            System.out.println("ได้เกรด B+");
        } else if (score >= 70) {
            System.out.println("ได้เกรด B");
        } else if (score >= 65) {
            System.out.println("ได้เกรด C+");
        } else if (score >= 60) {
            System.out.println("ได้เกรด C");
        } else if (score >= 55) {
            System.out.println("ได้เกรด D+");
        } else if (score >= 50) {
            System.out.println("ได้เกรด D");
        } else {
            System.out.println("ได้เกรด F");
        }
    }
}
