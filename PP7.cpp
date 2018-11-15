#include <string>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

class Song
{
public:
   Song();
   Song(const Song & song);
   ~Song();

   // Set Methods
   void SetArtist(const string artist);
   void SetTitle(const string title);
   void SetGenre(const string genre);
   void SetYear(const string year);
   void SetDuration(const string duration);

   // Get Methods
   void GetArtist(string & artist) const;
   void GetTitle(string & title) const;
   void GetGenre(string & genre) const;
   void GetYear(string & year) const;
   string GetDuration() const;

   void Print() const;

private:
   string Artist;
   string Title;
   string Genre;
   string Year;
   string Duration;
};

Song::Song()
{
Artist = " ";
Title = " ";
Genre = " ";
Year = " ";
Duration = " ";
}

Song::Song(const Song & song)
{
Artist = song.Artist;
Title = song.Title;
Genre = song.Genre;
Year = song.Year;
Duration = song.Duration;
}

Song::~Song()
{
}

// Set Methods //

void Song::SetArtist(const string artist)
{
Artist = artist;
}

void Song::SetTitle(const string title)
{
Title = title;
}

void Song::SetGenre(const string genre)
{
Genre = genre;
}

void Song::SetYear(const string year)
{
Year = year;
}

void Song::SetDuration(const string duration)
{
Duration = duration;
}

// Get Methods //

void Song::GetArtist(string &artist) const
{
artist = Artist;
}

void Song::GetTitle(string &title) const
{
title = Title;
}

void Song::GetGenre(string &genre) const
{
genre = Genre;
}

void Song::GetYear(string &year) const
{
year = Year;
}

string Song::GetDuration() const
{
return Duration;
}


void Song::Print() const
{
cout << left << setw(45) << Artist << setw(30) << Title << setw(8) << Genre <<
setw(5) << Year << setw(6) << Duration <<  endl;
}

// Sort Function //

void sort(Song songdata[], int size)
{
   for(int index = 0; index < size; index++)
   {
      int location = index;
      for(int pos = index; pos < size; pos++)
         if (songdata[pos].GetDuration() < songdata[location].GetDuration())
            location = pos;

      Song temp = songdata[index];
      songdata[index] = songdata[location];
      songdata[location] = temp;
   }
}

// Main Function //

int main()
{
const int MAX_SONGS = 20;
Song songdata[MAX_SONGS];

string artist;
string title;
string genre;
string year;
string duration;
string space;
int year1;
int duration1;

for(int index = 0; index < MAX_SONGS; index++)
{

getline(cin, artist);
songdata[index].SetArtist(artist);

getline(cin, title);
songdata[index].SetTitle(title);

getline(cin, genre);
songdata[index].SetGenre(genre);

getline(cin, year);
year1 = atoi(year.c_str());
songdata[index].SetYear(year);

getline(cin, duration);
duration1 = atoi(duration.c_str());
songdata[index].SetDuration(duration);

getline(cin, space);
}

cout << left << setw(45) << "Artist" << setw(30) << "Title" << setw(8) << "Genre" <<
setw(5) << "Year" << setw(6) << "Duration" <<  endl;

// Print 1st Time
for(int index = 0; index < MAX_SONGS; index++)
{
songdata[index].Print();
}

cout << endl;

// Sort
sort(songdata, MAX_SONGS);

cout << "Organized by Duration from Least to Greatest:" << endl << endl;

cout << left << setw(45) << "Artist" << setw(30) << "Title" << setw(8) << "Genre" <<
setw(5) << "Year" << setw(6) << "Duration" <<  endl;

// Print 2nd Time
for(int index = 0; index < MAX_SONGS; index++)
{
songdata[index].Print();
}

return 0;
}

