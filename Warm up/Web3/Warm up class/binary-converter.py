# The purpose of this program is to test the knowlegde of python while creating a program for web3 course of converting binary to decimal

#Function to convert the input to decimal
def convert2decimal(string):
    print("convert2decimal Function reached")
    print(string)
    
    
#Function to convert the input to binary
def convert2binary(string):
    print("convert2binary Function reached")
    result = bin(string)
    # print(type(string))
    # print(type(result))
    print(result.strip("0b"))

while True:
    try:
        conversiontype = input("Type d to convert the string to decimal and b to convert the string to binary: ").lower()
        if (conversiontype == 'b'):
            try: 
                convert2binary(int(input("Enter the decimal number to be converted to binary: "), 10))
            except ValueError:
                print("You entered something other than a decimal number as an input.")
                
        elif (conversiontype == 'd'):
            try: 
                convert2decimal(int(input("Enter the binary number to be converted to decimal: "), 2))
            except ValueError:
                print("You entered something other than 0 or 1 in input.")

        else:
            raise ValueError
    except ValueError:
        print("You wrote something else in place of d or b! \n Try again.")

# Completed ---------------------------------------------------------------------------------------------------------------------------------------------------------------------