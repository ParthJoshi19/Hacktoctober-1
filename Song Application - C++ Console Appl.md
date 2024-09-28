Song Application - C++ Console Application Overview This is a simple
console-based Song Application written in C++ that allows users to:

Add songs to a playlist. View the list of songs. Play a specific song
(simulated via text). Remove songs from the playlist. Requirements To
run this application, you need to have:

C++ compiler (e.g., g++, clang, or MS Visual Studio). A terminal or
command prompt to run the compiled binary. Setup Instructions Step 1:
Download the Code Download the song_application.cpp file (this is the
C++ code provided in this repository). Ensure the file is saved to a
local directory on your machine. Step 2: Compile the Code To compile the
code, open your terminal or command prompt, navigate to the directory
where the code is saved, and run the following command:

bash Copy code g++ -o songApp song_application.cpp

This will compile the code into an executable named songApp.

Step 3: Run the Application After the code is successfully compiled, you
can run the executable using the following command:

bash Copy code ./songApp \# On Linux or macOS

songApp.exe \# On Windows Step 4: Using the Application Once the
application is running, you will be prompted with the following menu:

markdown Copy code \-\-- Song Application \-\-- 1. Add Song 2. View
Songs 3. Play Song 4. Remove Song 5. Exit Enter your choice: Features:
Add Song:

When you select this option, you will be prompted to input a song title
and an artist. The song will then be added to your playlist. View Songs:

This option will display all songs currently in your playlist. If no
songs have been added, it will notify you that the playlist is empty.
Play Song:

You will be prompted to enter the number of the song you want to play
from the playlist. If the song number is valid, the application will
\"play\" the song (display a message with the song title and artist).
Remove Song:

You will be prompted to enter the number of the song you want to remove
from the playlist. The song will be removed if the number is valid.
Exit:

This option will exit the application. Example Usage Add a Song:

Choose option 1 to add a song. Enter the song title: \"Imagine\" Enter
the artist name: \"John Lennon\" The song will be added to the playlist.
View Songs:

Choose option 2 to view all songs in the playlist. Play a Song:

Choose option 3 to play a song. If you added multiple songs, enter the
song number to play the corresponding song. Remove a Song:

Choose option 4 to remove a song from the playlist by entering the song
number. Error Handling If you try to remove or play a song from an empty
playlist, the application will notify you. Input validation ensures that
only valid song numbers can be played or removed. If you provide invalid
input (e.g., a string instead of a number), the application will prompt
you to enter a valid choice.
