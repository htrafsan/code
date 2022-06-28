
public class Book {
	String title, author, isbn;
	int noOfCopies;
	public Book(String title, String author, String isbn, int noOfCopies) {
		super();
		this.title = title;
		this.author = author;
		this.isbn = isbn;
		this.noOfCopies = noOfCopies;
	}
	@Override
	public String toString() {
		return "Book [title=" + title + ", author=" + author + ", isbn=" + isbn + ", noOfCopies=" + noOfCopies + "]";
	}
	
	public void display() {
		System.out.println(this);
	}

}
