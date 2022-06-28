
public class TestCar {
	public static void main(String[] a) {
		// Creating Object
		Car c = new Car("Toyota", "Camry", 3.5f);
		c.display();
		c.start(15);
		c.display();
		c.speedUp();
		c.speedUp();
		System.out.println(c.getSpeed());
	}

}
