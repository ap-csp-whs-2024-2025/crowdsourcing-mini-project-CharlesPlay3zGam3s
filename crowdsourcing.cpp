#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> songTitles;
    vector<string> artists;
    vector<int> durations;

    int numSongs;
    cout << "Enter the number of songs: ";
    cin >> numSongs;
    cin.ignore(); // Clear buffer

    for (int i = 0; i < numSongs; i++) {
        string title, artist;
        int duration;

        cout << "\nEnter details for song " << i + 1 << ":\n";
        cout << "Song Title: ";
        getline(cin, title);

        cout << "Artist: ";
        getline(cin, artist);

        cout << "Duration (seconds): ";
        cin >> duration;
        cin.ignore(); // Clear buffer

        // Store data in vectors
        songTitles.push_back(title);
        artists.push_back(artist);
        durations.push_back(duration);
    }

    // Display stored songs
    cout << "\nList of Entered Songs:\n";
    cout << "----------------------------------------\n";
    for (size_t i = 0; i < songTitles.size(); i++) {
        cout << i + 1 << ". " << songTitles[i] << " by " << artists[i] 
             << " (" << durations[i] << " seconds)\n";
    }

    return 0;
}
