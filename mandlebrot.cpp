#include <iostream> // Defines the standard input/output stream objects
#include <fstream>  // Input/output stream class to operate on files
#include <cstring>  // This header file defines several functions to manipulate C strings and arrays.
#include <string>
#include <fstream>

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
    // Obtain the required inputs from the input file settings.txt (for easier modification by the user)
    std::ifstream settingsFile ("settings.txt");

    if (settingsFile.is_open())
    {
        std::cout << "Opened settings.txt... Now reading the file...\n"<< std::endl;

        int width, height, iterations, threads;

        // We need to get values of width, height, iterations, and threads
        while (settingsFile >> height >> width >> iterations >> threads)
        {
            settingsFile >> height;
            settingsFile >> width;
            settingsFile >> iterations;
            settingsFile >> threads;
        }

        // Now read back the contents of settings.txt to ensure the values are being saved
        std::cout << "height: " << height << std::endl;
        std::cout << "width: " << width << std::endl;
        std::cout << "iterations: " << iterations << std::endl;
        std::cout << "threads: " << threads << "\n" << std::endl;

        // We should make sure that the file is closed the after we are done using it
        // This may be done automatically however, see here: https://m.cplusplus.com/reference/fstream/ifstream/close/
        std::ifstream::close;
    }
    else std::cout << "Error: Unable to open settings.txt";

    // Write the PPM header to the output file
    
    // For every pixel ...
    //   - Determine the real and imaginary numbers associated with pixel x and y on the image
    //   - Based on the previously found c value, find the number of iterations in the Mandelbrot formula
    //   - Map the RGB value of the resulting number
    //   - Output it to the image


}
