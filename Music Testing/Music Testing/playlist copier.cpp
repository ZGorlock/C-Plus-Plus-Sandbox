#include <stdio.h>
#include <stdlib.h>
#include "filesystem.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main()
{
  fstream fsp;
  fsp.open("playlists.txt", fstream::in);
  string playlist = "";


  while (getline(fsp, playlist)) {

    //string playlist;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "Playlist: " << playlist << endl;
    //getline(cin, playlist);

    string folder = "";
    for (size_t i = 0; i < playlist.length(); i++) {
      if (playlist[i] == '.')
        break;
      folder += playlist[i];
    }
    makeFolder(folder);

    playlist = "C:\\Users\\ZGorlock\\Music\\Music\\" + playlist;

    if (fileExists(playlist)) {

      fstream fs;
      fs.open(playlist, fstream::in);
      string line = "";

      fstream fso;
      fso.open(folder + "/" + playlist, fstream::out);

      while (getline(fs, line)) {
        string title = "";
        string artist = "";
        bool onArtist = false;
        for (size_t i = line.length(); i > 0; i--) {
          if (onArtist) {
            if (line[i] != '\\') {
              artist = line[i] + artist;
            }
            else {
              break;
            }
          }
          else {
            if (line[i] != '\\')
              title = line[i] + title;
            else
              onArtist = true;
          }
        }

        cout << "artist: " << artist << endl;
        cout << "title:  " << title << endl << endl;

        makeFolder(folder + "/" + artist);
        copyFile(line, folder + "/" + artist + "/" + title);
        fso << artist + "/" + title << endl;
      }

      fs.close();
      fso.close();

    }


  }

  fsp.close();

  system("PAUSE");
  return 0;
}