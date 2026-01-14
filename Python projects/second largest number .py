def second_largest_num(numbers):
    largest = numbers[0]
    for num in numbers :
        if num > largest :
            largest = num
    numbers.remove(largest)
    largest = numbers[0]
    for num in numbers :
        if num > largest :
            largest = num
    return largest
numbers = [7,80,55]
print("The Second Largest Number is : ",second_largest_num(numbers))