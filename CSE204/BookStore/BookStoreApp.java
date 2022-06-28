
public class BookStoreApp {

	public static void main(String[] args) {
		BookStore bs = new BookStore();
		System.out.println("Displaying list");
		bs.display();
		
		bs.books[0] = new Book("Java", "HS", "123", 50);
		System.out.println("Displaying list");
		bs.display();
		
		bs.order("234", 20);
		
		System.out.println("Displaying list");
		bs.display();
		
		bs.sell("Java", 10);
		System.out.println("Displaying list");
		bs.display();

	}

}
