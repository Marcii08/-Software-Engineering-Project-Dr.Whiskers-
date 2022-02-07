
![Screenshot (64)](https://user-images.githubusercontent.com/54645955/152828284-dfda74fb-292b-433c-908f-b3596698319f.png)

###############################################################################
#     Dr. Whiskers++                                                          #
#     Team: Marcielly Nascimento, David Terry, Kevin Racktoo, Lief Watts      #
###############################################################################

See FinalReport.docx for a more detailed description of this project and of the Software Engineering Life Cyle Model, Charts, and Diagrams. 

Source Description:
  Dr. Whiskers++ is a Windows program that is designed to assist the user in locating common mistakes that novice programmers make while 
  programming their own code. If Dr. Whiskers++ is not able to help the user find the issues in their code, the program then suggests
  and describes debugging skills they could use to debug their code. The goal is to both help the user debug their program and to teach
  the user debugging skills. Dr. Whiskers++ contains a User Manual that can be acessed from the start window or by clicking the "Not sure"
  button on the Assistant window. Dr. Whiskers++ was created using C++/CLR Windows Forms for Visual Studio 2019.
  
  
Build Instructions:
  To build and run the code from the source code either install Visual Studio, open the project file, and click the build and run button, or 
  intstall a C++ compiler and run the program using the Windows command line. To run the program without going through the source code, 
  simply open and run DrWhiskers.exe. Visual Studios may need to be installed to run the .exe file since some files that Visual Studios contain 
  are needed in order to run DrWhiskers.exe. 
  
How is the code organized:
  The code is organized into classes. There are 5 classes: Start, Menu, Skills, Assistant, and Questions. Each class corresponds to a 
  different window in Dr. Whiskers++, with one exception of the Questions class. The Start class corresponds to the start window. The Menu 
  class corresponds to the menu window. The Skills class corresponds to the skills window. And the Assistant class corresponds to the  
  assistant window. The Questions class is the parent class to Assistant; it contains variables that the Assistant class inherits. 
  
3rd party library:
  C++/CLR Windows Forms for Visual Studio 2019 was used to create Dr.Whiskers++. It includes the libraries System::ComponentModel, 
  System::Collections, Windows::Forms, System::Data, System::Drawing, and System::Diagnostics. These libraries were used to create windows, 
  buttons, pictureBoxes, panels, labels, and textBoxes. The library System::Diagnostics was used for the process() and start() functions, 
  which were used to open a PDF using a button in the program. To create Dr. Whiskers++ the team programmed the windows, buttons, 
  pictureBoxes, panels, labels, and textBoxes to perform the desired actions when interacted with, and the team customized (color, font, 
  size, etc) them to a desired appearance. The team designed and created all graphic used including the mascot seen on the Assistant window 
  and background image of paw prints seen on every window. The team also wrote all of the text including the articles of text in the Skills 
  window, and the questions & responses in the Assistant window.  

![Dr Wiskers++ smile](https://user-images.githubusercontent.com/54645955/152828417-cfd192d5-1224-4c7b-8ece-6e86109851d9.gif)
