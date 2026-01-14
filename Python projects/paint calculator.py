str_lenght = input("please type lenght : \n")
str_width = input("please type width : \n")

lenght = float(str_lenght)
width = float(str_width)

money_for_meter = input("How much for 1 meter? \n")
float_money_for_meter = float(money_for_meter)

area = lenght * width
str_area = str(area)

print("the total area = \n" + str_area)

total_price =  float(money_for_meter) * area
str_total_price = str(total_price)

print("Give the guy:  $",str_total_price)
