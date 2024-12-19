# Explanation of the Ordering System Program

## Overview

The Ordering System Program is a simple 🔤 console-based application developed in the C programming language. It facilitates placing 🍲 food orders by navigating through a structured 🗾 menu, selecting customization options, and applying discounts based on user eligibility. The program dynamically calculates the 💵 total price (DZ) and includes a 19% 🌍 tax.

This document provides a detailed explanation of the program, covering its structure, features, functionality, and key implementation details.

---

## Program Structure

The program is divided into multiple logical steps, ensuring an intuitive user experience:

1. **Menu Selection**:
   Users choose a 🍲 food item from the menu: 🍕 Pizza, 🌮 Tacos, 🥗 Salad, or ❌ exit the program.

2. **Ingredient Selection**:
   After selecting a 🍲 dish, users can customize it by choosing from available ingredients.

3. **Size Selection**:
   Users select the size of their order (👍 M, 💪 L, or 🔝 XL), which affects the final price.

4. **Discount Application**:
   Discounts are applied based on user type (🎓 student, 🌞 senior) or valid coupon codes.

5. **Order Summary**:
   The program calculates the total 💵 price, including tax, and provides an estimated ⏳ delivery time.

---

## Features

### 1. **Menu Options**

- 🍕 Pizza: Base price is 450 DZ.
- 🌮 Tacos: Base price is 250 DZ.
- 🥗 Salad: Base price is 150 DZ.

### 2. **Ingredient Customization**

- 🥑 3 Cheese: +50 DZ.
- 🍗 Chicken: +100 DZ.
- 🍖 Beef: +100 DZ.
- 🐟 Tuna: +70 DZ.

### 3. **Size Options**

- 👍 M (default price).
- 💪 L: +5 DZ.
- 🔝 XL: +7 DZ.

### 4. **Discounts**

- 🎓 Students: 30% discount.
- 🌞 Seniors: 25% discount.
- 💳 Coupon Holders: 20% discount (valid code: "yami25").

### 5. **Dynamic Pricing**

- Tax rate: 🌍 19%.
- Price (DZ)s adjust based on user selections and discounts.

---

## Key Implementation Details

### 1. **Input Validation**

- The program uses ➕ `scanf` to capture user input.
- Input is validated at every step to ensure correctness. Invalid inputs prompt the user to try again.

### 2. **Navigation Between Steps**

- Users can go back to previous steps ↩️ or exit the program at any time.
- For example:
  - Select "5" in the ingredient selection step to return to the menu.
  - Select "6" in any step to exit the program.

### 3. **Variable Management**

- **💵 Price Calculation**: The total price is stored in the `Price` variable and updated dynamically.
- **🍲 Order Details**: Variables like `order`, `ingredients`, and `size` store the user’s selections.

### 4. **Discount Handling**

- Discounts are applied sequentially based on user eligibility:
  1. 🎓 Student discount (30%).
  2. 🌞 Senior discount (25%).
  3. 💳 Coupon code discount (20%).
- Only one discount type is applied per order.

---

## Program Flow

The following steps summarize the flow of the program:

1. 🗾 Display the menu and prompt the user to select a dish.
2. If a valid option is selected, allow the user to choose ingredients.
3. Proceed to size selection. Users can choose 👍 M, 💪 L, or 🔝 XL.
4. After confirming the order details, ask the user about discounts:
   - Are you a 🎓 student?
   - Are you a 🌞 senior?
   - Do you have a 💳 coupon code?
5. Display the total 💵 price (before and after tax) and estimated ⏳ delivery time.
6. Prompt the user to place another order or ❌ exit the program.

---

## Sample Execution

### Input:

```plaintext
=== MENU ===
1 - 🍕 Pizza
2 - 🌮 Tacos
3 - 🥗 Salad
4 - ❌ Exit
Enter your choice: 1
You selected: 🍕 Pizza
Choose ingredients:
1 - 🥑 3 Cheese
2 - 🍗 Chicken
3 - 🍖 Beef
4 - 🍏 Tuna
5 - ↩️ Go Back to Menu
6 - ❌ Exit Program
Enter your choice: 2
Ingredient selected: 🍗 Chicken
Choose size:
👍 M
💪 L
🔝 XL
Enter your choice: XL
Order: 🍗 Chicken 🍕 Pizza (Size 🔝 XL)
Are you a 🎓 student? (Y/N): Y
price without tax: 693.00
price with tax: 823.67
Thank you for your order! It will arrive in ⏳ 20 minutes.
```

### Output:

- The order details include selected 🍲 dish, 🍲 ingredient, size, and 💵 price.
- Discount (if applicable) is displayed.
- Final price with 🌍 tax is shown.

---

## Conclusion

This program demonstrates a simple yet effective implementation of an ordering system. By leveraging step-by-step navigation ➕ and dynamic pricing 💵, it ensures a seamless user experience. The 🔧 code is robust, with input validation and easy-to-modify constants for tax rates and coupon codes. This makes it a versatile example for learning structured programming in C.

