# Sridhara's Formula :

# Importing :
import math as m
import time

# Intro :
print("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tSridhara's Formula\n")
time.sleep(1)
print("\t\t\t\t\t\t\t\t\t\t\t\t\t\t    ax² + bx + c = 0\n")
time.sleep(1)

# Input :
try:

    # Values :

    value_of_a = int(input("--> Enter the Value of a :  \n"))

    value_of_b = int(input("--> Enter the Value of b :  \n"))

    value_of_c = int(input("--> Enter the Value of c :  \n"))

    # Negative Discriminant Error :
    try:

        # Variables :
        discriminant = (value_of_b * value_of_b) - (4 * value_of_a * value_of_c)
        two_a = (2 * value_of_a)
        sqrt_dscrmnt = m.sqrt(discriminant)  # --> Math Module Error
        pos_simplify = (-value_of_b + sqrt_dscrmnt)
        neg_simplify = (-value_of_b - sqrt_dscrmnt)


        def real_explanation():
            answer = input("Do you want Explanation?  \n(Press y or Y for Explanation\nPress any key to Exit :     \n")

            if answer in ("y", "Y"):
                print("\nThe actual formula is --> x = -b ± √‾ b² - (4ac) / 2a.\n"
                      "\nIn Your Equation ,", value_of_a, "x² + ", value_of_b, "x + ", value_of_c,
                      "\nValue of a = ",
                      value_of_a, " ,\n ", "\nValue of b = ", value_of_b, " ,\n ", "\nand Value of c = ",
                      value_of_c,
                      ".\n",
                      "\n"
                      "\nSo Substitute for the Formula.\n"
                      "\nThen find the value of DISCRIMINANT (b² - 4ac)\nHere the Discriminant is", discriminant,
                      "(Positive or Neutral).\n"
                      "\nSo the Equation has Real Values and the PARABOLA intersects x-axis.\n"
                      "\nSubstitute the Discriminant value to the Formula.\n"
                      "\nThen Simplify,\n"
                      "\nNote : You will get 2 Real values , Because the DEGREE of the Eqaution is 2.\n"
                      "\nTo Know more about Parabola and Discriminant Click the Link Below :\n"
                      "\nhttps://bit.ly/3sgdLwX\n")

                print("\nSee You Soon:)\n")

            else:
                print("\nHave a Great Time:)\n")


        # Operation :
        print("\n1. x = (-b ± √‾ b² - 4ac) / 2a\n")
        print("2. a = ", value_of_a, " , ", "b = ", value_of_b, " , ", "c = ", value_of_c, "\n")
        print("3. x = -", value_of_b, " ± √‾ ", value_of_b, "² - (4", "*", value_of_a, "*", value_of_c, ")", " / 2",
              "(",
              value_of_a, ")", "\n")
        print("Discriminant : \n")
        print("4. \t\tb² - (4ac) = ", value_of_b, "² - (4", "*", value_of_a, "*", value_of_c, ")", "\n")
        print("5. \t\tb² - (4ac) = ", discriminant, "\n")

        # Simplify and Answer :
        print("Answer : \n")
        print("6. x = -", value_of_b, " ± √‾ ", discriminant, " / ", two_a, "\n")
        print("Simplified Answer : \n")
        print("7. x = -", value_of_b, " ± ", sqrt_dscrmnt, " / ", two_a, "\n")

        print("--> x = -", value_of_b, "+", sqrt_dscrmnt, " / ", two_a, "\n", "=",
              pos_simplify / two_a)
        print("\nor\n")
        print("--> x = -", value_of_b, " - ", sqrt_dscrmnt, " / ", two_a, "\n", "=",
              neg_simplify / two_a, "\n")

        real_explanation()


    except Exception:
        print("\nDiscriminant is Less than 0.\n")
        print("\nThe Parabola it represents Does Not Intersect x-axis.")
        print("\nThe Equation has NO REAL SOLUTIONS.\n")
        print("\nIn Your Equation ,", value_of_a, "x² + ", value_of_b, "x + ", value_of_c,
              "\nValue of a = ",
              value_of_a, " ,\n ", "\nValue of b = ", value_of_b, " ,\n ", "\nand Value of c = ",
              value_of_c,
              ".\n",
              "\n"
              "\nSo Substitute for the Formula.\n"
              "\nThe value of DISCRIMINANT (b² - 4ac) is", discriminant,
              "(Negative).\n")
        print("\nAnswer : ")
        print("\nx = -", value_of_b, " ± √‾ ", discriminant, " / ", two_a, "\n")
        print("\nThis topic is related to COMPLEX NUMBERS\n")
        print("\nTo know more about COMPLEX NUMBERS , Click the link below : \n")
        print("\nhttps://bit.ly/2MYlJdZ\n")

except ValueError:
    print("\nInvalid Input:(\n")
    print("Run Again\n")
    print("Try an Integer\n")