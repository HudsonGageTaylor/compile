# All-In-One Compiler For Windows!
### MinGW Setup
Download the official minimalist .exe [from here.](https://sourceforge.net/projects/mingw/files/latest/download)  Proceed with the installation until you get an install screen similar to this:  
  
![Banner](screen1.jpg)  

Then select these tools for installation:  
  
**mingw32-base**  
**mingw32-gcc-fortran**  
**mingw32-gcc-g++**  

Once done, hit install and wait!  

Once the installation is finished, go to the Windows search bar and type "Environment Variables" and select **Edit the system environment variables.**  
You should get a screen like this:  

![Banner](screen2.png)  

Click the button that says **"Environment Variables..."** and a new window should appear. In the lower box which says "System variables", double click "Path":   
  
![Banner](screen3.png)  
  
Press the **"New"** button and add this into the prompt: `C:\MinGW\bin`. It should look like this:  
    
![Banner](screen4.png)  






### Languages supported (from v1):
C++ (.cpp)  
C (.c)  
Rust (.rs)  
Fortran (.f, .for, .ftn, .f77, .f90, .f95, .f03, .f08, .f18)  

  
**More coming soon!**
