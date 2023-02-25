#WAP to convert a quantity in meter entered through
#keyboard into its equivalent kilometer and meteras per the following format. 
#Example. 2430 meter = 2 Km and 430 meter. 

def convert_to_km_m(meter):
    km = meter // 1000
    m = meter % 1000
    return f"{km} Km and {m} meter"

meter = int(input("Enter a distance in meter: "))
print(convert_to_km_m(meter))
