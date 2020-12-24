# Capstone Project (Udacity C++ Nanodegree)

An application that can solve a Sudoko puzzle using C++ and the OpenCV library. 

![Screenshot of puzzle after initial pre-processing](extra/ProcessedImage.png "Title")

## Project Description

The application when run accepts the path to a Sudoku image.

The project is structured as follows:

The project aims to cover the concepts taught as a part of the C++ Nanodegree.

### Assumptions:
* No perspective or warping corrections needed in this version of the application
* Image will have thick lines for outer edges as well as for sub-grids


## Dependencies for running the project locally:
* cmake >= 3.11.3
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
* OpenCV >= 4.1
  * The OpenCV 4.1.0 source code can be found [here](https://github.com/opencv/opencv/tree/4.1.0)
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repository
2. Create a folder named 'build' in the top level directory: 'mkdir build && cd build'
3. Compile: 'cmake .. && make'
4. Run: './sudoko <path_to_the_sudoku_image>'

## Udacity Capstone Project Requirements – Rubric Points Addressed

A short description of how and where the project requirements are fulfilled.

### 1. README (All Rubric Points REQUIRED)
* A README with instructions is included with the project
  * Yes: README.md file included into the project root folder.
* The README indicates which project is chosen
  * Yes: see section "Project Description" in the README.md file.
* The README includes information about each rubric point addressed
  * Yes.

### 2. Compiling and Testing (All Rubric Points REQUIRED)
* The submission must compile and run
  * Yes.

### 3. Loops, Functions, I/O
* The project demonstrates an understanding of C++ functions and control structures
  * Yes.
* The project reads data from a file and process the data, or the program writes data to a file
  * Yes, it accepts an image as input, processes it further and when solution is calculated, stores the results in new image
* The project accepts user input and processes the input
  * Yes. The user must provide the path to the image of the Sudoku puzzle as an argument.

### 4. Object Oriented Programming
* The project uses Object Oriented Programming techniques
  * Yes. 
* Classes use appropriate access specifiers for class members
  * Yes.
* Class constructors utilize member initialization lists
  * Yes.
* Classes abstract implementation details from their interfaces
  * Yes.
* Classes encapsulate behavior
  * Yes. 
* Classes follow an appropriate inheritance hierarchy
  * No, inheritance has not been used.
* Overloaded functions allow the same function to operate on different parameters
  * Yes.
* Derived class functions override virtual base class functions
  * No.
* Templates generalize functions in the project
  * No.

### 5. Memory Management

* The project makes use of references in function declarations
  * Yes.
* The project uses destructors appropriately
  * Yes.
* The project uses scope / Resource Acquisition Is Initialization (RAII) where appropriate
  * Yes.
* The project follows the Rule of 5
  * No, not implemented.
* The project uses move semantics to move data, instead of copying it, where possible
  * No.
* The project uses smart pointers instead of raw pointers
  * Yes, smart pointers are used as well as raw pointers.

### 6. Concurrency
* The project uses multithreading
  * No.
* A promise and future is used in the project
  * No.
* A mutex or lock is used in the project
  * No.
* A condition variable is used in the project
  * No.

## Acknowledgements

## Future Extensions
Initially, it will detect and solve puzzles from a static image and later on try to extend the project for real-time solution using a video stream

