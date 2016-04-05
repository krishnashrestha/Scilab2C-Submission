//Created by: Krishna Shrestha
//E-mail : shresthakrishna1997@gmail.com

//Function name: generateHeaderFile

//Description:
//This will create a C header file in the current working directory of Scilab for the function whose details have been provided by the user as arguments to generateHeaderFile function.

//Input arguments: 
// - functionName (a string)
// - arguments (may be a string or a matrix)
// - returnType (a string)

function generateHeaderFile(functionName, arguments, returnType)
    l = size(arguments)         //This will give the combined total number of arguments (the variable names with their respective data types). 
    m = l(1, 2)
    l = 0                       //The contents of 'l' are deleted and it will be used as a counter henceforth.

 //Now, with the help of a for-loop, we will pick up each of the user-entered argument and check if it is a data type. Only data types in the arguments will be printed in the C header file.
    for (n = 1 : 1 : m)
        o = arguments(1, n)
        
        if (o == 'char' | o == 'char *' | o == 'int' | o == 'int *' | o == 'long int' | o == 'float' | o == 'uint8') then
            l = l + 1
            arg(1, l) = o
            continue
        else
            continue
        end
        
    end
    
      //Now, we may define a new string with the first arguments' data type as its initial value, which may store all the data types of the arguments separated by commas. Next, we create another string to hold the function declaration in proper format, with all the details mentioned by the user.
    ar = arg(1, 1)
    for (n = 2 : 1 : l)
        ar = ar + ", " + arg(1, n) 
    end
    functionDeclaration = returnType + " " + functionName + " " + "(" + ar + ")";
    
//Lastly, we may create a C header file, with the file name same as the function name and a '.h' extension in the current working directory, and the string containing function declaration shall be printed in this newly-created file.
    mputl(functionDeclaration, functionName+".h")
endfunction


//Example :
//The command "generateHeaderFile('foo', ['uint8', 'x', 'float', 'f', 'long int', 's'], 'float')" will create a C header file "foo.h" in the current working directory. The contents of the file "foo.h" will be :
//float foo (int, float, long int)

