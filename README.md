This is the submission for Scilab2C Toolbox - FOSSEE Summer Internship 

Codes:

1. dsearch.c

Created using Code::Blocks IDE with GCC compiler on Windows 10 platform.

Description:
dsearch.c is a C program analogous to the Scilab function 'dsearch'. 

Input:
n - integer, number of values in matrix x

m - integer, number of values in matrix bins

x - integer matrix, maximum 20 values allowed

bins - integer matrix, maximum 20 values allowed, values must be in ascending order


Output:
i_bins - integer matrix, value of each element depicts the range of two consecutive 'bins' elements in which the corresponding value of x lies

outside - integer, number of values of x which do not lie between any two consecutive 'bins' elements

count - integer matrix, value of each element depicts the number of 'x' elements that lie in each of the range.


It must be noted that the values of 'bins' must be entered in ascending order.

Example:
[i_bin, counts, outside] = dsearch([11 13 1 7 5 2 9], [5 11 15 20])

In the following example, we consider 3 intervals I1 = [5,11], I2 = (11,15] and I3 = (15,20]. We are looking for the location of the entries of X = [11 13 1 7 5 2 9] in these intervals.

Displayed output:

 outside  =
 2.
   
 counts  =
 4.    1.    0.

 i_bin  =
 1.    2.    0.    1.    1.    0.    1.
   
Example copied from Scilab Help.


To execute, paste the code to Notepad, or any other text editor, save it with .c extension and run using any C compiler that supports C99.



2. interp1.c

Created using Code::Blocks IDE with GCC compiler on Windows 10 platform.


Description:

interp1.c is a C program analogous to Scilab function 'interp1'. It must be noted that the optional parameters 'method' and 'extrapolation' of Scilab function 'interp1' are excluded in this program.


Input:

x - float matrix

y - float matrix

xp - float


Output:
yp - float

Using the numerical value of interpolation, the program will locate an unknown y-coordinate of a point (yp) which lies within the given range of points (x and y) and the x-coordinate is known (xp).


To execute, paste the code to Notepad, or any other text editor, save it with .c extension and run using any C compiler that supports C99.



3. generateHeaderFile.sci

Created using Scilab 5.5.2 on Windows 10 platform. 

Function name: generateHeaderFile

Description:

This will create a C header file in the current working directory of Scilab for the function whose details have been provided by the user as arguments to generateHeaderFile function.


Input arguments: 

 - functionName (a string)
 
 - arguments (may be a string or a matrix)
 
 - returnType (a string) 


Example :

The command "generateHeaderFile('foo', ['uint8', 'x', 'float', 'f', 'long int', 's'], 'float')" will create a C header file "foo.h" in the current working directory. The contents of the file "foo.h" will be :
float foo (int, float, long int)

How to use:

1. Launch SciNotes in Scilab 5.5.2 (any platform) and paste the code.

2. Save (Ctrl+S) and execute the code (Ctrl+L)

3. Go to Scilab 5.5.2 Console.

4. Call the function 'generateHeaderFile' with suitable arguments. This will create a C header file as prescribed.

5. To check the header file generated, you may open the Scilab's present working directory in the browser. To check present working directory, push the command 'pwd' in Scilab Console.

6. Locate the header file in the folder, right-click and open with Notepad. The header file contains the declaration of the function as mentioned in the arguments to function 'generateHeaderFile'.
 
