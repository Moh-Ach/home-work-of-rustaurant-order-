#include <stdio.h>
#include <string.h>
int main() {
    // if you want coupon enter: yami25
    // المتغيرات 
    int choice, step = 1;
    double Price = 0;
    const double tax = 0.19; 
    char order[10] = "None";
    char ingredients[20] = "None";
    char size[3];
    char continue_order[3], student[3], senior[3], coupon[3], coupon_code[6] ;

    while (1) {
        // الخطوة الأولى: اختيار الطبق
        if (step == 1) { 
            printf("\n=== MENU ===\n");
            printf("1 - Pizza\n");
            printf("2 - Tacos\n");
            printf("3 - Salad\n");
            printf("4 - Exit\n");
            printf("Enter your choice: ");

            // التحقق من الإدخال
            if (scanf("%d", &choice) != 1) {
                printf("Invalid input. Please enter a number (1, 2, 3, or 4).\n");
                // مسح المخزن المؤقت
                while (getchar() != '\n'); 
                continue;
            }
            //الخيارات 
            switch (choice) {
                case 1:
                    strcpy(order, "Pizza");
                    Price += 450;
                    printf("You selected: %s\n", order);
                    step = 2; // الانتقال إلى اختيار المكونات
                    continue;
                case 2:
                    strcpy(order, "Tacos");
                    Price += 250;
                    printf("You selected: %s\n", order);
                    step = 2; // الانتقال إلى اختيار المكونات
                    continue;
                case 3:
                    strcpy(order, "Salad");
                    Price += 150;
                    printf("You selected: %s\n", order);
                    step = 2; // الانتقال إلى اختيار المكونات
                    continue;
                case 4:
                    printf("Exiting the program. Thank you!\n");
                    return 0;
                default:
                    printf("Invalid choice. Please enter a number (1, 2, 3, or 4).\n");
                    continue;
            }
        } 
        // الخطوة الثانية: اختيار المكونات
        else if (step == 2) { 
            printf("\nChoose ingredients:\n");
            printf("1 - 3 Cheese\n");
            printf("2 - Chicken\n");
            printf("3 - Beef\n");
            printf("4 - Tuna\n");
            printf("5 - Go Back to Menu\n");
            printf("6 - Exit Program\n");
            printf("Enter your choice: ");

            // التحقق من الإدخال
            if (scanf("%d", &choice) != 1) {
                printf("Invalid input. Please enter a number (1, 2, 3, 4, 5, or 6).\n");
                // مسح المخزن المؤقت
                while (getchar() != '\n'); 
                continue;
            }
            // الخيارات
            switch (choice) {
                case 1:
                    strcpy(ingredients, "3 Cheese");
                    printf("Ingredient selected: %s\n", ingredients);
                    Price = Price + 50 ;
                    step = 3; // الانتقال إلى اختيار الحجم
                    continue;
                case 2:
                    strcpy(ingredients, "Chicken");
                    printf("Ingredient selected: %s\n", ingredients);
                    Price = Price + 100;
                    step = 3; // الانتقال إلى اختيار الحجم
                    continue;
                case 3:
                    strcpy(ingredients, "Beef");
                    printf("Ingredient selected: %s\n", ingredients);
                    Price = Price + 100;                
                    step = 3; // الانتقال إلى اختيار الحجم
                    continue;
                case 4:
                    strcpy(ingredients, "Tuna");
                    printf("Ingredient selected: %s\n", ingredients);
                    Price = Price + 70; 
                    step = 3; // الانتقال إلى اختيار الحجم
                    continue;
                case 5:
                    printf("Going back to the main menu...\n");
                    step = 1; // العودة إلى قائمة الطعام
                    strcpy(order, "None"); // إعادة تعيين الطلب
                    strcpy(ingredients, "None"); // إعادة تعيين المكونات
                    continue;
                case 6:
                    printf("Exiting the program. Thank you!\n");
                    return 0;
                default:
                    printf("Invalid choice. Please select a valid number.\n");
                    continue;
            }

            
        } 
        // الخطوة الثالثة: اختيار الحجم
        else if (step == 3) { 
            printf("\nChoose size:\nM\nL\nXL\n");
            printf("5 - Go Back to Ingredients\n");
            printf("6 - Exit Program\n");
            printf("Enter your choice: ");
            scanf("%s", size);
            // خيارات الحجم
            if (strcmp(size, "M") == 0 || strcmp(size, "m") == 0) {
                printf("Order: %s %s (Size %s)\n", ingredients, order, size);
                step = 4;
                continue;
            } 
            else if (strcmp(size, "L") == 0 || strcmp(size, "l") == 0) {
                Price += 5;
                printf("Order: %s %s (Size %s)\n", ingredients, order, size);
                step = 4;
                continue;
            } 
            else if (strcmp(size, "XL") == 0 || strcmp(size, "xl") == 0) {
                Price += 7;
                printf("Order: %s %s (Size %s)\n", ingredients, order, size);
                step = 4;
                continue;
            } 
            else if (strcmp(size, "5") == 0) { // العودة إلى اختيار المكونات
                printf("Going back to choose ingredients...\n");
                step = 2; 
                continue;
            } 
            else if (strcmp(size, "6") == 0) { // الخروج من البرنامج
                printf("Exiting the program. Thank you!\n");
                return 0;
            }
            else {
                printf("Invalid size. Please try again.\n");
                continue;
            }
        }
        //  الخطوة الرابعة سؤال المستخدم عما إذا كان يريد طلب المزيد 
        else if ( step == 4) {
            printf("Would you like to order more?\n enter (Y/N): \n");
            printf("or enter 5 to return to size and 6 to exit \n");
            printf("Enter your choise: "); 
            scanf("%s", continue_order);

            if (strcmp(continue_order, "Y") == 0 || strcmp(continue_order, "y") == 0) {
                step = 1; // العودة إلى بداية الطلب
                continue;
            } 
            else if (strcmp(continue_order, "N") == 0 || strcmp(continue_order, "n") == 0){
                step = 5; 
                continue;
            } 
            else if (strcmp(continue_order, "5") == 0) { // العودة إلى اختيار الحجم
                printf("Going back to choose ingredients...\n");
                step = 3; 
                continue;
            } 
            else if (strcmp(continue_order, "6") == 0) { // الخروج من البرنامج
                printf("Exiting the program. Thank you!\n");
                return 0;
                
            }
            else {
                printf("Invalid input. Please try again.\n");
                continue;
            }
        }
        //الجطوة الخامسة الخصومات 
        else if ( step == 5) {
             printf("Are you a student? (Y/N): ");
                scanf("%s", student);
                
                if (strcmp(student, "Y") == 0 || strcmp(student, "y") == 0) {
                    printf("Congratulations! You get a 30%% discount.\n");
                    Price *= 0.7;
                } 
                
                else if (strcmp(student, "N") == 0 || strcmp(student, "n") == 0){
                    printf("Are you a senior? (Y/N): ");
                    scanf("%s", senior);
                    
                    if (strcmp(senior, "Y") == 0 || strcmp(senior, "y") == 0) {
                        printf("Congratulations! You get a 25%% discount.\n");
                        Price *= 0.75;
                    }
                    
                    else if (strcmp(senior, "N") == 0 || strcmp(senior, "n") == 0){
                        printf("Do you have a coupon? (Y/N): ");
                        scanf("%s", coupon);
                        
                        if (strcmp(coupon, "Y") == 0 || strcmp(coupon, "y") == 0) {
                            printf(" Please enter the coupon\n");
                            scanf("%s",coupon_code);
                            if (strcmp(coupon_code, "yami25") == 0){
                                printf ("Congratulations! You get a 20%% discount.");
                                Price *= 0.80;
                            }
                            else {
                                printf(" sorry this code doesn't exist");
                                continue;
                            }
                        }
                        else if (strcmp(coupon, "N") == 0 || strcmp(coupon, "n")){
                            continue;
                        }
                        
                        else {
                            printf("Invalid input. Please try again.\n");
                            continue;
                        }
                    }
                    else {
                        printf("Invalid input. Please try again.\n");
                        continue;
                    }
                }
                else {
                    printf("Invalid choice try again\n");
                    continue;
                }
        }
        else {
            return 0;
        }
                printf("price without tax : %.2f\n", Price );
                Price = Price * tax + Price ;
                printf("price with tax : %.2f \n", Price);
                printf("Thank you for your order! It will arrive in 20 minutes.\n");
                break;
    }
    return 0;
}
