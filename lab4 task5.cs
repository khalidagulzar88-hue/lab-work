using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab4task2
{
    //      class Book
    //    {
    //        private string title;
    //        private string author;
    //        private int pages;
    //        private List<string> chapters;
    //        private int bookMark;
    //        private int price;
    //        private bool isAvailable;

    //        public Book(string title, string author, int pages, List<string> chapters, int bookMark, int price, bool isAvailable)
    //        {
    //            this.title = title;
    //            this.author = author;
    //            this.pages = pages;
    //            this.chapters = new List<string>(chapters);
    //            this.bookMark = bookMark;
    //            this.price = price;
    //            this.isAvailable = isAvailable;
    //        }

    //        public bool IsBookAvailable() => isAvailable;

    //        public string GetChapter(int chapterNumber)
    //        {
    //            if (chapterNumber >= 0 && chapterNumber < chapters.Count)
    //                return chapters[chapterNumber];
    //            else
    //                throw new IndexOutOfRangeException("Invalid chapter number.");
    //        }

    //        public int GetBookMark() => bookMark;

    //        public void DisplayInfo()
    //        {
    //        Console.WriteLine("--- Book Details ---");
    //        Console.WriteLine("Title: " + title);
    //        Console.WriteLine("Author: " + author);
    //        Console.WriteLine("Pages: " + pages);
    //        Console.WriteLine("Price: " + price);
    //        Console.WriteLine("Available: " + (isAvailable ? "Yes" : "No"));
    //        Console.WriteLine("Chapters:");
    //        for (int i = 0; i < chapters.Count; i++)
    //        {
    //            Console.WriteLine("  " + (i + 1) + ". " + chapters[i]);
    //        }
    //        Console.WriteLine("Current Bookmark: Page " + bookMark);
    //        Console.WriteLine("-----------------------------");

    //    }
    //}

    //    class Program
    //    {
    //        static void Main()
    //        {
    //            Console.WriteLine("Enter Book Details:");

    //            Console.Write("Title: ");
    //            string title = Console.ReadLine();

    //            Console.Write("Author: ");
    //            string author = Console.ReadLine();

    //            Console.Write("Number of Pages: ");
    //            int pages = int.Parse(Console.ReadLine());

    //            Console.Write("Price: ");
    //            int price = int.Parse(Console.ReadLine());

    //            Console.Write("Is the book available? (yes/no): ");
    //            bool isAvailable = Console.ReadLine().ToLower() == "yes";

    //            Console.Write("Number of Chapters: ");
    //            int numChapters = int.Parse(Console.ReadLine());

    //            List<string> chapters = new List<string>();
    //            for (int i = 0; i < numChapters; i++)
    //            {
    //                Console.Write($"Enter Chapter {i + 1} name: ");
    //                chapters.Add(Console.ReadLine());
    //            }

    //            Console.Write("Current Bookmark Page: ");
    //            int bookMark = int.Parse(Console.ReadLine());


    //            Book myBook = new Book(title, author, pages, chapters, bookMark, price, isAvailable);

    //            myBook.DisplayInfo();


    //            Console.Write("Enter chapter number to view: ");
    //            int chapterNum = int.Parse(Console.ReadLine()) - 1;
    //            Console.WriteLine("Selected Chapter: " + myBook.GetChapter(chapterNum));

    //            Console.WriteLine("Current bookmark page: " + myBook.GetBookMark());
    //            Console.WriteLine("Is book available? " + (myBook.IsBookAvailable() ? "Yes" : "No"));
    //        }
    //    }

    //}


    //    class Book
    //    {
    //        public string Title;
    //        public string[] Authors = new string[4];
    //        public int AuthorCount;
    //        public string Publisher;
    //        public string ISBN;
    //        public double Price;
    //        public int CopiesInStock;
    //        public int Year;

    //        public Book() { }

    //        public Book(string title, string[] authors, int authorCount, string publisher, string isbn, double price, int copies, int year)
    //        {
    //            Title = title;
    //            AuthorCount = authorCount;
    //            for (int i = 0; i < authorCount; i++)
    //                Authors[i] = authors[i];
    //            Publisher = publisher;
    //            ISBN = isbn;
    //            Price = price;
    //            CopiesInStock = copies;
    //            Year = year;
    //        }


    //        public bool CheckTitle(string t) => Title.Equals(t, StringComparison.OrdinalIgnoreCase);
    //        public bool CheckISBN(string i) => ISBN.Equals(i, StringComparison.OrdinalIgnoreCase);
    //        public void UpdateCopies(int change) => CopiesInStock += change;
    //        public void Display()
    //        {
    //            Console.WriteLine("\n--- Book Details ---");
    //            Console.WriteLine("Title: " + Title);
    //            Console.Write("Authors: ");
    //            for (int i = 0; i < AuthorCount; i++)
    //            {
    //                Console.Write(Authors[i]);
    //                if (i != AuthorCount - 1) Console.Write(", ");
    //            }
    //            Console.WriteLine();
    //            Console.WriteLine("Publisher: " + Publisher);
    //            Console.WriteLine("ISBN: " + ISBN);
    //            Console.WriteLine("Price: " + Price);
    //            Console.WriteLine("Copies in stock: " + CopiesInStock);
    //            Console.WriteLine("Year: " + Year);
    //        }
    //    }

    //    class Program
    //    {
    //        static void Main()
    //        {
    //            Book[] library = new Book[100];
    //            int count = 0;
    //            int choice;

    //            do
    //            {
    //                Console.WriteLine("\n1. Add Book\n2. Search by Title\n3. Search by ISBN\n4. Update Copies\n5. Display All Books\n0. Exit");
    //                Console.Write("Enter choice: ");
    //                choice = int.Parse(Console.ReadLine());

    //                switch (choice)
    //                {
    //                    case 1:
    //                        library[count++] = AddBook();
    //                        break;

    //                    case 2:
    //                        SearchByTitle(library, count);
    //                        break;

    //                    case 3:
    //                        SearchByISBN(library, count);
    //                        break;

    //                    case 4:
    //                        UpdateCopies(library, count);
    //                        break;

    //                    case 5:
    //                        DisplayAll(library, count);
    //                        break;

    //                    case 0:
    //                        Console.WriteLine("Exiting...");
    //                        break;

    //                    default:
    //                        Console.WriteLine("Invalid choice!");
    //                        break;
    //                }

    //            } while (choice != 0);
    //        }

    //        static Book AddBook()
    //        {
    //            Console.Write("Title: ");
    //            string title = Console.ReadLine();

    //            Console.Write("Number of Authors (max 4): ");
    //            int ac = int.Parse(Console.ReadLine());
    //            string[] authors = new string[ac];
    //            for (int i = 0; i < ac; i++)
    //            {
    //                Console.Write($"Author {i + 1}: ");
    //                authors[i] = Console.ReadLine();
    //            }

    //            Console.Write("Publisher: ");
    //            string pub = Console.ReadLine();

    //            Console.Write("ISBN: ");
    //            string isbn = Console.ReadLine();

    //            Console.Write("Price: ");
    //            double price = double.Parse(Console.ReadLine());

    //            Console.Write("Copies in stock: ");
    //            int copies = int.Parse(Console.ReadLine());

    //            Console.Write("Year of Publication: ");
    //            int year = int.Parse(Console.ReadLine());

    //            return new Book(title, authors, ac, pub, isbn, price, copies, year);
    //        }

    //        static void SearchByTitle(Book[] lib, int count)
    //        {
    //            Console.Write("Enter title: ");
    //            string t = Console.ReadLine();
    //            bool found = false;
    //            for (int i = 0; i < count; i++)
    //            {
    //                if (lib[i].CheckTitle(t))
    //                {
    //                    lib[i].Display();
    //                    found = true;
    //                }
    //            }
    //            if (!found) Console.WriteLine("Book not found!");
    //        }

    //        static void SearchByISBN(Book[] lib, int count)
    //        {
    //            Console.Write("Enter ISBN: ");
    //            string i = Console.ReadLine();
    //            bool found = false;
    //            for (int j = 0; j < count; j++)
    //            {
    //                if (lib[j].CheckISBN(i))
    //                {
    //                    lib[j].Display();
    //                    found = true;
    //                }
    //            }
    //            if (!found) Console.WriteLine("Book not found!");
    //        }

    //        static void UpdateCopies(Book[] lib, int count)
    //        {
    //            Console.Write("Enter ISBN to update copies: ");
    //            string i = Console.ReadLine();
    //            bool found = false;
    //            for (int j = 0; j < count; j++)
    //            {
    //                if (lib[j].CheckISBN(i))
    //                {
    //                    Console.Write("Enter number of copies to add/remove: ");
    //                    int change = int.Parse(Console.ReadLine());
    //                    lib[j].UpdateCopies(change);
    //                    Console.WriteLine("Copies updated.");
    //                    found = true;
    //                }
    //            }
    //            if (!found) Console.WriteLine("Book not found!");
    //        }

    //        static void DisplayAll(Book[] lib, int count)
    //        {
    //            if (count == 0) Console.WriteLine("No books in library.");
    //            for (int i = 0; i < count; i++)
    //                lib[i].Display();
    //        }
    //    }
    //}


    //    class Member
    //    {

    //        public string Name;
    //        public string MemberID;
    //        public List<string> BooksBought;
    //        public int NumberOfBooks;
    //        public double MoneyInBank;
    //        public double AmountSpent;


    //        public Member()
    //        {
    //            BooksBought = new List<string>();
    //            NumberOfBooks = 0;
    //            AmountSpent = 0;
    //            MoneyInBank = 0;
    //        }

    //        public Member(string name, string id, double money)
    //        {
    //            Name = name;
    //            MemberID = id;
    //            MoneyInBank = money;
    //            BooksBought = new List<string>();
    //            NumberOfBooks = 0;
    //            AmountSpent = 0;
    //        }

    //        public void SetName(string name) => Name = name;
    //        public string GetName() => Name;

    //        public void AddMoney(double amount) => MoneyInBank += amount;

    //        public void BuyBook(string bookName, double price)
    //        {
    //            if (price <= MoneyInBank)
    //            {
    //                BooksBought.Add(bookName);
    //                NumberOfBooks++;
    //                AmountSpent += price;
    //                MoneyInBank -= price;
    //                Console.WriteLine($"Book '{bookName}' bought successfully!");
    //            }
    //            else
    //            {
    //                Console.WriteLine("Not enough money to buy this book.");
    //            }
    //        }

    //        public void DisplayMember()
    //        {
    //            Console.WriteLine("\n--- Member Details ---");
    //            Console.WriteLine("Name: " + Name);
    //            Console.WriteLine("Member ID: " + MemberID);
    //            Console.WriteLine("Money in Bank: " + MoneyInBank);
    //            Console.WriteLine("Amount Spent: " + AmountSpent);
    //            Console.WriteLine("Number of Books Bought: " + NumberOfBooks);
    //            if (NumberOfBooks > 0)
    //            {
    //                Console.WriteLine("Books Bought:");
    //                foreach (string book in BooksBought)
    //                    Console.WriteLine("  " + book);
    //            }
    //            else
    //            {
    //                Console.WriteLine("Books Bought: None");
    //            }
    //            Console.WriteLine("-------------------------");
    //        }
    //    }


    //    class Program
    //    {
    //        static void Main()
    //        {
    //            Member member = null;
    //            int choice;

    //            do
    //            {
    //                Console.WriteLine("\n--- Member Menu ---");
    //                Console.WriteLine("1. Create Member");
    //                Console.WriteLine("2. Display Member Details");
    //                Console.WriteLine("3. Buy a Book");
    //                Console.WriteLine("4. Add Money to Bank");
    //                Console.WriteLine("0. Exit");
    //                Console.Write("Enter choice: ");
    //                choice = int.Parse(Console.ReadLine());

    //                switch (choice)
    //                {
    //                    case 1:
    //                        Console.Write("Enter Name: ");
    //                        string name = Console.ReadLine();
    //                        Console.Write("Enter Member ID: ");
    //                        string id = Console.ReadLine();
    //                        Console.Write("Enter Money in Bank: ");
    //                        double money = double.Parse(Console.ReadLine());
    //                        member = new Member(name, id, money);
    //                        Console.WriteLine("Member created successfully!");
    //                        break;

    //                    case 2:
    //                        if (member != null)
    //                            member.DisplayMember();
    //                        else
    //                            Console.WriteLine("No member created yet!");
    //                        break;

    //                    case 3:
    //                        if (member != null)
    //                        {
    //                            Console.Write("Enter Book Name: ");
    //                            string book = Console.ReadLine();
    //                            Console.Write("Enter Book Price: ");
    //                            double price = double.Parse(Console.ReadLine());
    //                            member.BuyBook(book, price);
    //                        }
    //                        else
    //                            Console.WriteLine("No member created yet!");
    //                        break;

    //                    case 4:
    //                        if (member != null)
    //                        {
    //                            Console.Write("Enter amount to add: ");
    //                            double add = double.Parse(Console.ReadLine());
    //                            member.AddMoney(add);
    //                            Console.WriteLine("Money added successfully!");
    //                        }
    //                        else
    //                            Console.WriteLine("No member created yet!");
    //                        break;

    //                    case 0:
    //                        Console.WriteLine("Exiting...");
    //                        break;

    //                    default:
    //                        Console.WriteLine("Invalid choice!");
    //                        break;
    //                }

    //            } while (choice != 0);
    //        }
    //    }

    //}

        class Book
        {
            public string Title;
            public string[] Authors;
            public string Publisher;
            public string ISBN;
            public double Price;
            public int Stock;
            public int Year;

            public Book(string title, string[] authors, string publisher, string isbn, double price, int stock, int year)
            {
                Title = title;
                Authors = authors;
                Publisher = publisher;
                ISBN = isbn;
                Price = price;
                Stock = stock;
                Year = year;
            }

            public void Display()
            {
                Console.WriteLine($"\nTitle: {Title}");
                Console.WriteLine("Authors: " + string.Join(", ", Authors.Where(a => !string.IsNullOrEmpty(a))));
                Console.WriteLine("Publisher: " + Publisher);
                Console.WriteLine("ISBN: " + ISBN);
                Console.WriteLine("Price: $" + Price);
                Console.WriteLine("Stock: " + Stock);
                Console.WriteLine("Year: " + Year);
            }
        }

        class Member
        {
            public string Name;
            public int MemberID;
            public List<double> LastTenBookPrices;
            public int NumberOfBooks;
            public double AmountSpent;

            public Member(string name, int id)
            {
                Name = name;
                MemberID = id;
                NumberOfBooks = 0;
                AmountSpent = 0;
                LastTenBookPrices = new List<double>();
            }

            public double CalculateDiscount(double price)
            {
                double discount = 0;
                if (MemberID != 0)
                {
                    discount += 0.05 * price;
                    if ((NumberOfBooks + 1) % 11 == 0 && LastTenBookPrices.Count == 10)
                    {
                        discount += LastTenBookPrices.Average();
                        LastTenBookPrices.Clear();
                        AmountSpent = 0;
                    }
                }
                return discount;
            }

            public void BuyBook(double price)
            {
                NumberOfBooks++;
                AmountSpent += price;
                if (MemberID != 0)
                {
                    LastTenBookPrices.Add(price);
                    if (LastTenBookPrices.Count > 10)
                        LastTenBookPrices.RemoveAt(0);
                }
            }

            public void Display()
            {
                Console.WriteLine($"\nName: {Name}, MemberID: {MemberID}");
                Console.WriteLine("Books Purchased: " + NumberOfBooks);
                Console.WriteLine("Total Spent: $" + AmountSpent);
                if (LastTenBookPrices.Count > 0)
                    Console.WriteLine("Last 10 book prices: " + string.Join(", ", LastTenBookPrices));
            }
        }

        class Program
        {
            static List<Book> Books = new List<Book>();
            static List<Member> Members = new List<Member>();
            static double TotalSales = 0;
            static double TotalMembershipFees = 0;

            static void Main()
            {
                while (true)
                {
                    Console.WriteLine("\n--- Bookstore Menu ---");
                    Console.WriteLine("1. Add Book");
                    Console.WriteLine("2. Search Book by Title");
                    Console.WriteLine("3. Search Book by ISBN");
                    Console.WriteLine("4. Update Book Stock");
                    Console.WriteLine("5. Add Member");
                    Console.WriteLine("6. Search Member");
                    Console.WriteLine("7. Update Member Info");
                    Console.WriteLine("8. Purchase Book");
                    Console.WriteLine("9. Display Total Sales & Membership Stats");
                    Console.WriteLine("0. Exit");
                    Console.Write("Choice: ");
                    int choice;
                    if (!int.TryParse(Console.ReadLine(), out choice))
                    {
                        Console.WriteLine("Invalid input, try again.");
                        continue;
                    }

                    switch (choice)
                    {
                        case 1: AddBook(); break;
                        case 2: SearchBookByTitle(); break;
                        case 3: SearchBookByISBN(); break;
                        case 4: UpdateBookStock(); break;
                        case 5: AddMember(); break;
                        case 6: SearchMember(); break;
                        case 7: UpdateMemberInfo(); break;
                        case 8: PurchaseBook(); break;
                        case 9: DisplayStats(); break;
                        case 0: Console.WriteLine("Exiting..."); return;
                        default: Console.WriteLine("Invalid choice!"); break;
                    }
                }
            }

            static void AddBook()
            {
                Console.Write("Title: "); string title = Console.ReadLine();
                string[] authors = new string[4];
                Console.Write("Number of Authors (max 4): "); int ac = int.Parse(Console.ReadLine());
                for (int i = 0; i < ac; i++) { Console.Write($"Author {i + 1}: "); authors[i] = Console.ReadLine(); }
                Console.Write("Publisher: "); string pub = Console.ReadLine();
                Console.Write("ISBN: "); string isbn = Console.ReadLine();
                Console.Write("Price: "); double price = double.Parse(Console.ReadLine());
                Console.Write("Stock: "); int stock = int.Parse(Console.ReadLine());
                Console.Write("Year: "); int year = int.Parse(Console.ReadLine());
                Books.Add(new Book(title, authors, pub, isbn, price, stock, year));
                Console.WriteLine("Book added successfully!");
            }

            static void SearchBookByTitle()
            {
                Console.Write("Enter title: "); string title = Console.ReadLine();
                var found = Books.FindAll(b => b.Title.Equals(title, StringComparison.OrdinalIgnoreCase));
                if (found.Count == 0) Console.WriteLine("No book found!");
                else found.ForEach(b => b.Display());
            }

            static void SearchBookByISBN()
            {
                Console.Write("Enter ISBN: "); string isbn = Console.ReadLine();
                var found = Books.Find(b => b.ISBN.Equals(isbn, StringComparison.OrdinalIgnoreCase));
                if (found == null) Console.WriteLine("No book found!");
                else found.Display();
            }

            static void UpdateBookStock()
            {
                Console.Write("Enter title or ISBN: "); string input = Console.ReadLine();
                var book = Books.Find(b => b.Title.Equals(input, StringComparison.OrdinalIgnoreCase) || b.ISBN.Equals(input, StringComparison.OrdinalIgnoreCase));
                if (book == null) { Console.WriteLine("Book not found!"); return; }
                Console.Write("Enter stock change (+ to add, - to remove): "); int change = int.Parse(Console.ReadLine());
                book.Stock += change;
                Console.WriteLine("Stock updated.");
            }

            static void AddMember()
            {
                Console.Write("Name: "); string name = Console.ReadLine();
                Console.Write("Member ID: "); int id = int.Parse(Console.ReadLine());
                Members.Add(new Member(name, id));
                TotalMembershipFees += 10;
                Console.WriteLine("Member added. $10 membership fee collected.");
            }

            static void SearchMember()
            {
                Console.Write("Enter Name or Member ID: "); string input = Console.ReadLine();
                Member m = null;
                if (int.TryParse(input, out int id))
                    m = Members.Find(x => x.MemberID == id);
                else
                    m = Members.Find(x => x.Name.Equals(input, StringComparison.OrdinalIgnoreCase));
                if (m == null) Console.WriteLine("Member not found!");
                else m.Display();
            }

            static void UpdateMemberInfo()
            {
                Console.Write("Enter Name or Member ID: "); string input = Console.ReadLine();
                Member m = null;
                if (int.TryParse(input, out int id))
                    m = Members.Find(x => x.MemberID == id);
                else
                    m = Members.Find(x => x.Name.Equals(input, StringComparison.OrdinalIgnoreCase));
                if (m == null) { Console.WriteLine("Member not found!"); return; }
                Console.Write("Enter new Name (or press enter to keep current): ");
                string newName = Console.ReadLine(); if (!string.IsNullOrEmpty(newName)) m.Name = newName;
                Console.Write("Enter new Member ID (or 0 to keep current): ");
                string newIDStr = Console.ReadLine();
                if (int.TryParse(newIDStr, out int newID) && newID != 0) m.MemberID = newID;
                Console.WriteLine("Member info updated.");
            }

            static void PurchaseBook()
            {
                Console.Write("Enter Name: "); string name = Console.ReadLine();
                Console.Write("Enter Member ID (0 if non-member): "); int id = int.Parse(Console.ReadLine());
                Member m;
                if (id == 0)
                    m = new Member(name, 0);
                else
                {
                    m = Members.Find(x => x.MemberID == id);
                    if (m == null) { Console.WriteLine("Member not found!"); return; }
                }

                if (Books.Count == 0) { Console.WriteLine("No books in library!"); return; }

                Console.WriteLine("Available Books:");
                for (int i = 0; i < Books.Count; i++)
                    Console.WriteLine($"{i + 1}. {Books[i].Title} - ${Books[i].Price}, Stock: {Books[i].Stock}");
                Console.Write("Select book number: "); int choice = int.Parse(Console.ReadLine()) - 1;
                if (choice < 0 || choice >= Books.Count) { Console.WriteLine("Invalid selection."); return; }
                Book book = Books[choice];

                Console.Write("Enter quantity: "); int qty = int.Parse(Console.ReadLine());
                if (book.Stock < qty) { Console.WriteLine("Not enough stock."); return; }

                double totalPrice = book.Price * qty;
                double discount = m.CalculateDiscount(totalPrice);
                totalPrice -= discount;

                book.Stock -= qty;
                m.BuyBook(totalPrice);
                TotalSales += totalPrice;

                Console.WriteLine($"Purchase successful! Total price after discount: ${totalPrice:F2}");
            }

            static void DisplayStats()
            {
                Console.WriteLine($"\nTotal Sales: ${TotalSales:F2}");
                Console.WriteLine("Total Members: " + Members.Count);
                Console.WriteLine("Total Membership Fees Collected: $" + TotalMembershipFees);
            }
        }
    }