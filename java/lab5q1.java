import java.util.Scanner;
interface motor {
	void run();
	int c = 10;
	void consume();
}
class WM implements motor {
	Scanner input = new Scanner(System.in);
	int lt;
	public void consume() {
		System.out.println("litres of water available:");
		lt = input.nextInt();
	}
	public void run() {
		if (lt > c) {
			System.out.println("Error,cannot run");
		} else {
			System.out.println("Okay,can run");
		}
	}
}
class Lab7Q2 {
	public static void main(String[] args) {
		motor a = new WM();
		a.consume();
		a.run();
	}
}