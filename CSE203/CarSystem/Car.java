
public class Car {
	public String make, model;
	public float enginePower;
	public int speed;
	
		
	// constructor
	public Car(String make, String mdl, float engP) {
		this.make = make;
		this.model = mdl;
		this.enginePower = engP;
	}
	
	// Methods
	public void start(int initSpeed) {
		speed = initSpeed;
	}
	
	public void stop() {
		speed = 0;
	}
	
	public int getSpeed() {
		return speed;
	}
	
	public void speedUp() {
		speed += 5;
	}
	
	public void display() {
		System.out.printf("%s-%s-%.1f-%d\n", make, model, enginePower, speed);
	}
	
}
