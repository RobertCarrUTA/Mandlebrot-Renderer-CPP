*This project is not yet finished and is still under construction (so the README and code is unfinished)*

## Table of Contents
- Mandlebrot Renderer in C++
  * [Compile Instructions](#compile-instructions)
  * [About the Project](#about-the-project)
  * [What is the Mandlebrot Set?](#what-is-the-mandlebrot-set)
  * [Other Mandlebrot Softwares You Should Use](#other-mandlebrot-softwares-you-should-use)
  * [Planned Features](#planned-features)

## Compile Instructions
*compile instructions will be added at a later time*


*If you want to run this project in VSCode on Windows and setup G++, click [here and follow the instructions](https://code.visualstudio.com/docs/languages/cpp).*


Using VSCode on Windows 10:
* Enter "g++ -o mandlebrot mandlebrot.cpp" into the terminal
* Then enter ".\mandlebrot " to run the program

## About the project
Using C++, this project aims to render Mandelbrot images and display the results in the PPM format (**this is a self-study project**, so no tutorials were followed). I have always loved the Mandlebrot set. It is fun to explore and mess around with the images, and the images can be beautiful. Moreover, the Mandelbrot set is a great way to test multithreading and how far a program can be pushed to use a system's memory and its processing power when rendering highly detailed and large images (especially in higher precision parts of the set).

## What is the Mandlebrot Set?
Information for the Mandlebrot Set can be found by clicking [here](https://en.wikipedia.org/wiki/Mandelbrot_set).

## Other Mandlebrot Softwares You Should Use
Mandlebrot tools I like to use:
 * [The online Mandlebrot viewer](https://math.hws.edu/eck/js/mandelbrot/MB.html) (seriously, check this one out)
 * [Mandlebrot Explorer](https://www.mandel.org.uk/) (not online but you can go a little higher on the rendering resoultions)
 
 ## Planned Features
 * Multithreading
 * Consider making the program an object-oriented one with a file structure
 * Testing the speed differences between different thread counts (to show that the maximum number of threads is not always the most efficient)
 * Improved usability for the user
 * Once the program is completed, translate it into different languages
