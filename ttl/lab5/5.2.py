class Item:
    def __init__(self, code, name, price):
        self.code = code
        self.name = name
        self.price = price

class Bill:
    def __init__(self):
        self.items = []
        self.total = 0

    def add_item(self, item, quantity):
        total_price = item.price * quantity
        self.items.append((item, quantity, total_price))
        self.total += total_price

    def generate_bill(self):
        print("{:<5} {:<10} {:<25} {:<10} {:<10} {:<10}".format("Sl. No.", "Code", "Name", "Price", "Quantity", "Total"))
        print("-" * 70)
        for i, (item, quantity, total_price) in enumerate(self.items, 1):
            print("{:<5} {:<10} {:<25} {:<10} {:<10} {:<10}".format(i, item.code, item.name, item.price, quantity, total_price))
        print("-" * 70)
        print("{:<60} {:<10}".format("Total", "Rs.{}/-".format(self.total)))

# create some sample items
printer_cartridge = Item("rib001", "Printer cartridge", 300)
a4_paper = Item("Pap45", "A4 size paper", 200)
computer_book = Item("Bk2109", "Computer book", 350)

# create a bill and add some items with quantities
bill = Bill()
bill.add_item(printer_cartridge, 2)
bill.add_item(a4_paper, 0)
bill.add_item(computer_book, 5)

# generate the bill
bill.generate_bill()
