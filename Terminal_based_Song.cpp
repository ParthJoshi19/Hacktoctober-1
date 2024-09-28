#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>  
#include <limits>  

using namespace std;

class Song {
private:
    string title;
    string artist;

public:

    Song(const string& songTitle, const string& songArtist) : title(songTitle), artist(songArtist) {}


    string getTitle() const {
        return title;
    }

    string getArtist() const {
        return artist;
    }
};


class SongApp {
private:
    vector<Song> playlist;  

public:

    void addSong() {
        
    }

    void viewSongs() const {
        if (playlist.empty()) {
            cout << "Your playlist is empty.\n";
            return;
        }

        cout << "\n--- Playlist ---\n";
        for (size_t i = 1; i < playlist.size(); ++i) {  
            cout << i + 1 << ". " << playlist[i].getTitle() << " - " << playlist[i].getArtist() << "\n";
        }
    }

    void playSong() const {
        if (playlist.empty()) {
            cout << "Your playlist is empty. Add songs first.\n";
            return;
        }

        int choice;
        cout << "\nWhich song would you like to play? Enter the song number: ";
        viewSongs();
        cout << "Enter song number: ";
        cin >> choice;


        while (cin.fail() || choice <= 0 || choice > playlist.size()) {  
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Invalid input. Please enter a valid song number: ";
            cin >> choice;
        }

        cout << "\nPlaying: " << playlist[choice - 1].getTitle() << " by " << playlist[choice - 1].getArtist() << "...\n";
        cin.ignore();
    }

    void removeSong() {
        if (playlist.empty()) {
            cout << "Your playlist is empty. Add songs first.\n";
            return;
        }

        int choice;
        cout << "\nWhich song would you like to remove? Enter the song number: ";
        viewSongs();
        cout << "Enter song number: ";
        cin >> choice;

        while (cin.fail() || choice < 0 || choice > playlist.size()) {  
            cin.clear();  
            cout << "Invalid input. Please enter a valid song number: ";
            cin >> choice;
        }

        playlist.erase(playlist.begin() + choice - 1);
        cout << "Song removed from the playlist.\n";
        cin.ignore(); 
    }
};

int displayMenu() {
    int choice;
    cout << "\n--- Song Application ---\n";
    cout << "1. Add Song\n";
    cout << "2. View Songs\n";
    cout << "3. Play Song\n";
    cout << "4. Remove Song\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;
    

    while (cin.fail() || choice < 1 || choice > 5) {
        cin.clear();
        cout << "Invalid choice. Please enter a number between 1 and 5: ";
        cin >> choice;
    }
    
    cin.ignore(); 
    return choice;
}

int main() {
    SongApp app;
    bool running = true;

    while (running) {
        int choice = displayMenu();
        
        switch (choice) {
            case 1:
                app.addSong();
                break;
            case 2:
                app.viewSongs();
                break;
            case 3:
                app.playSong();
                break;
            case 4:
                app.removeSong();
                break;
            case 5:
                cout << "Exiting application. Goodbye!\n";
                running = false;
                break;
            default:
                cout << "Invalid option! Try again.\n";
        }
    }

    return 0;
}
