# Introduction

In this homework assignment, you will practice working with C++ classes and inheritance. 

# Tasks
You will find three C++ classes defined in the `library.h` file that need to be completed. Since the member functions are simple, implement them directly within each class definition. Below are the details for each class:

1. class `Item`: This class is a base class.
* `protected` member variables:
  * string-typed `title`
  * int-typed `year`
* `public` member functions:
  * constructor with parameters `t` and `y`: Initializes the member variables `title` and `year` using the parameters `t` and `y`, respectively.
  * member function `display`: Prints the current values of `title` and `year`. See the format in the expected outputs.

2. class `Book`: This class publicly inherites from the `Item` class.
* `private` member variables:
  * string-typed `authors`
  * int-typed `pages`
* `public` member functions:
  * constructor with parameters `t`, `y`, `a`, and `p`: Initializes the member variables `title` and `year` of the base class and `authors` and `pages` of this class (`Book` class) using the parameters `t`, `y`, `a`, and `p`, respectively.
  * member function `display`: Prints the current values of `title`, `year`, `authors`, and `pages`, preceded by the string "Book Information:". You must call the `display()` function of the base class to print the values of `title` and `year`. See the print format in the expected outputs.

3. class `DVD`: This class also publicly inherites from the `Item` class.
* `private` member variables:
  * string-typed `director`
  * int-typed `minutes`
* `public` member functions:
   * constructor with parameters `t`, `y`, `d`, and `m`: Initializes the member variables `title` and `year` of the base class and `director` and `minutes` of this class (`DVD` class) using the parameters `t`, `y`, `d`, and `m`, respectively.
   * member function `display`: Prints the current values of `title`, `year`, `director`, and `minutes`, preceded by the string "DVD Information:". You must call the `display()` function of the base class to print the values of `title` and `year`. See the print format in the expected outputs.


# Compile and Test

1. Type the following commands on Terminal.

```
g++ -o main *.cpp *.h
```
```
./main
```

2. Input
* This homework assignment does not require any input. Below are the expected outputs:

```
Book Information:
Title   : C++ How to Program
Year    : 2017
Authors : P. Deitel and H. Deitel
Pages   : 1080

DVD Information:
Title   : Toy Story 4
Year    : 2019
Director: Josh Cooley
Minutes : 100

DVD Information:
Title   : Home Alone
Year    : 1999
Director: Chris Columbus
Minutes : 103
```

# Submit

Please upload your `library.h` file to `myCourses > Assignments > HW8`. Do not submit *.docx, *.pdf, *.txt, or *.zip file. Do not modify the `main.cpp` file.
