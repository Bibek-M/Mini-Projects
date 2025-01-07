menu = {
    'pizza': 40,
    'burger': 30,
    'pasta': 50,
    'french Fries': 20,
}

print('Welcome to the Hotel Menu')
for item, price in menu.items():
    print(f"{item}: Rs{price}")

order_total = 0

while True:
    item = input("Enter the item you want to order: ")
    if item in menu:
        order_total += menu[item]
        print(f"Added {item}. Your total order amount is: Rs{order_total}")
    else:
        print(f"Ordered item {item} not available")
    
    another_item = input("Do you want to order another item? (yes/no): ")
    if another_item.lower() != 'yes':
        break

print(f"Thank you for your order. Your final total is: Rs{order_total}")
