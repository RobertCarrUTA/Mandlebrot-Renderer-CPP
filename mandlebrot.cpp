#include <iostream> // Defines the standard input/output stream objects
#include <fstream>  // Input/output stream class to operate on files
#include <cstring>  // This header file defines several functions to manipulate C strings and arrays.

/*
  Goals of program:
    1. Render a Mandelbrot image to a PPM file format
    2. Save the image to the directory the program is being ran
    3. Add multithreading
*/ 

/*
    --------------
    C++ reference: https://m.cplusplus.com/reference/
    --------------

    ------------------------------------------------------------------------------------------------------------------------------
    From https://en.wikipedia.org/wiki/Mandelbrot_set
    Just leaving this hear as a guide for myself, will remove it later

    In pseudocode, this algorithm would look as follows. The algorithm does not use complex numbers and manually simulates
    complex-number operations using two real numbers, for those who do not have a complex data type. The program may be simplified
    if the programming language includes complex-data-type operations.

    for each pixel (Px, Py) on the screen do
        x0 := scaled x coordinate of pixel (scaled to lie in the Mandelbrot X scale (-2.00, 0.47))
        y0 := scaled y coordinate of pixel (scaled to lie in the Mandelbrot Y scale (-1.12, 1.12))
        x := 0.0
        y := 0.0
        iteration := 0
        max_iteration := 1000
        while (x*x + y*y ≤ 2*2 AND iteration < max_iteration) do
            xtemp := x*x - y*y + x0
            y := 2*x*y + y0
            x := xtemp
            iteration := iteration + 1
        
        color := palette[iteration]
        plot(Px, Py, color)
    ------------------------------------------------------------------------------------------------------------------------------
*/ 

int main ()
{
    // The below comments are just to help outline the process of the program

    // Obtain the required inputs from the input file settings.txt (for easier modification by the user)

    // Write the PPM header to the output file
    
    // For every pixel ...
    //   - Determine the real and imaginary numbers associated with pixel x and y on the image
    //   - Based on the previously found c value, find the number of iterations in the Mandelbrot formula
    //   - Map the RGB value of the resulting number
    //   - Output it to the image

}
