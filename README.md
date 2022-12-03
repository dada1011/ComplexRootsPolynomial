# ComplexRootsPolynomial
C++ code that uses Newton Raphson to find the complex roots of quintic(fifth order) polynomials. Method can be extended to higher orders.


How to run: 

Step 1: `sudo apt install build-essential` to get g++ compiler
\
Step 2: Download QUINFINA.CPP from this github
\
Step 3:  `g++  QUINFINA.CPP -o quintic` to compile 



Step 4: `./quintic` to run the program. 

![RunningAndTestingCorrectness](https://user-images.githubusercontent.com/119732589/205438344-4dd06e2c-e3e4-46ae-9844-4a4c32476864.png)
\
Rest is self explanatory and a screenshot is posted above, depicting the steps written above in an actual linux bash environment.
\
\
Comparison with octave roots function(on right panel) is made, see for yourself to get to know how close our answers(on left panel) are to the roots function.
\
\
This program uses the Netwon-Raphson algorithm to remove the real roots from the intended equation to get another equation that contains only complex roots.
\
\
That equation is further decomposed to get the complex roots of the polynomial.
\
\
Users can see my code and use my code , however credit is always due.
\
\
This work is protected under the MIT License.
\
\
Copyright 2022 Sourodip Ghoshdastidar
