package studio0;

public class Heartbeat {

	public static void main(String[] args) {
		int time = 0;
		while(true) {
			try {
				Thread.sleep(1000); //Interrupted Exception
			} catch (InterruptedException e) {
				e.printStackTrace();  //Handling exception
			}
		System.out.println(time + " seconds has passed.");
		time++;
		}
	}
}
