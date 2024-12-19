# home-work-of-rustaurant-order-

# Ordering System Program

## Description
This program is a console-based ordering system for food items. It allows users to place an order by selecting items from a menu, choose ingredients, size, and apply any eligible discounts. The program calculates the final price including tax and provides an estimated delivery time.

## Features
- **Menu Options**: Users can select from Pizza, Tacos, or Salad.
- **Customization**: Choose ingredients (e.g., cheese, chicken, beef, or tuna) and size (M, L, XL).
- **Discounts**: Discounts are applied for students, seniors, or valid coupon codes.
- **Dynamic Pricing**: Prices are calculated based on selected options, including tax.
- **Multi-Step Navigation**: Users can navigate between steps and go back to modify their choices.

## How to Use
1. **Run the Program**:
   Compile and execute the program in a C environment.

2. **Menu Selection**:
   - Choose an item from the menu.
   - Options: 
     - 1: Pizza (450 units)
     - 2: Tacos (250 units)
     - 3: Salad (150 units)
     - 4: Exit the program.

3. **Choose Ingredients**:
   - Select ingredients to customize your order.
   - Choices:
     - 1: 3 Cheese (+50 units)
     - 2: Chicken (+100 units)
     - 3: Beef (+100 units)
     - 4: Tuna (+70 units)
     - 5: Return to the main menu.
     - 6: Exit the program.

4. **Choose Size**:
   - Enter size (M, L, or XL).
   - Size impacts the final price (L: +5 units, XL: +7 units).

5. **Discounts**:
   - After finalizing the order, specify if you are:
     - A student: 30% discount.
     - A senior: 25% discount.
     - A coupon holder: 20% discount (valid code: `yami25`).

6. **Final Price**:
   - View the price with and without tax.
   - Tax rate: 19%.

7. **Additional Orders**:
   - Option to place another order or exit the program.

## Requirements
- **Language**: C
- **Libraries Used**: `stdio.h`, `string.h`

## Sample Run
```plaintext
=== MENU ===
1 - Pizza
2 - Tacos
3 - Salad
4 - Exit
Enter your choice: 1
You selected: Pizza
Choose ingredients:
1 - 3 Cheese
2 - Chicken
3 - Beef
4 - Tuna
5 - Go Back to Menu
6 - Exit Program
Enter your choice: 2
Ingredient selected: Chicken
Choose size:
M
L
XL
5 - Go Back to Ingredients
6 - Exit Program
Enter your choice: XL
Order: Chicken Pizza (Size XL)
price without tax: 627.00
price with tax: 746.13
Thank you for your order! It will arrive in 20 minutes.
