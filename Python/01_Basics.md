# Python #
- python is a programming language . created by Guido van Rossum 1991 
-  Used in web development(server-side),software development , system scripting
-  While using any conditional or any function , keep the indentation a block of code
```
print("Hello world)
```

## comments ##

### singline line comment ###
 for single line comment we use #
```
#this is comment 
```

### Multiline comment ###

for multi line comment we use """ (triplet quotes)
```
"""
this is for the 
multiline comment

"""
```

## Variables ##

- A variable is created the moment you assign a value to it
- can even change type after they have been set

- if we want than we can specify the data type of the variable

- we can the data type of any variable by using type(var_name)

```
x=5
y="John"

z = int(3)
z = str(3) # z will be '3'


#for checking the data type
print(type(x))

a=2
A="ANsh" 
#both will be treated as the different variables, because python is case sensitive
```

## asign mutilple values

```
x,y,z = "orange","banana","cherry"
# we can assign values, without writing multi line code

#we can unpack collection as

fruits = ["apple", "banana", "cherry"]
x, y, z = fruits
print(x)
print(y)
print(z)

x=y=z="ram"

#all x,y,z have same values
```

Built-in Data Types
In programming, data type is an important concept.

Variables can store data of different types, and different types can do different things.

Python has the following data types built-in by default, in these categories:

- Text Type:	str
- Numeric Types:	int, float, complex
- Sequence Types:	list, tuple, range
- Mapping Type:	dict
- Set Types:	set, frozenset
- Boolean Type:	bool
- Binary Types:	bytes, bytearray, memoryview
- None Type:	NoneType

```
x = 1    # int
y = 2.8  # float
z = 1j   # complex

#convert from int to float:
a = float(x)

#convert from float to int:
b = int(y)

#convert from int to complex:
c = complex(x)

print("It's alright")
print("He is called 'Johnny'")
print('He is called "Johnny"')

```

## For Random Number

```
import random

print(random.randrange(1, 10))
```