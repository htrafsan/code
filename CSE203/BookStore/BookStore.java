import java.util.Scanner;

public class BookStore {
	Book[] books = new Book[10];
	
	public void sell(String t, int copies) {
		boolean found =false;
		for(int i=0; i<books.length; i++) {
			Book b = books[i];
			if(b == null)
				break;
			
			if(b.title.equals(t)) {
				found = true;
				b.noOfCopies -= copies;
				System.out.println("Sold..");
				break;
			}
		}
		
		if(!found)// found == false
			System.out.println("Book is not available.");
	}
	
	public void order(String _isbn, int copies) {
		boolean found =false;
		int i;
		for(i=0; i<books.length; i++) {
			Book b = books[i];
			if(b == null)
				break;
			
			if(b.isbn.equals(_isbn)) {
				found = true;
				b.noOfCopies += copies;
				System.out.println("Succesful..");
				break;
			}
		}
		
		if(!found && i<10) {
			System.out.println("Book is not available.\nPlease enter title and author of the book with isbn"+_isbn);
			Scanner scan = new Scanner(System.in);
			String t = scan.next();
			String a = scan.next();
			books[i] = new Book(t, a, _isbn, copies);
		}
	}
	
	public void display() {
		for(int i=0; i<books.length; i++) {
			Book b = books[i];
			if(b == null)
				break;
			
			b.display();
		}
	}

}











