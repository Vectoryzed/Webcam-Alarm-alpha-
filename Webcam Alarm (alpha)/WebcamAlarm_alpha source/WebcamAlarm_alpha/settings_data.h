#pragma once

#define IS_ENABLED_DEFAULT true
#define IS_WINDOWA_VISIBLE_DEFAULT true
#define IS_WINDOWB_VISIBLE_DEFAULT false
#define AUDIO_ALERT_FILE_DEFAULT "alarm.wav"
#define IS_ALERT_IN_LOOP_DEFAULT false
#define TAKE_PHOTO_DEFAULT false
#define PHOTO_FOR_MOVEMENT_DEFAULT 1
#define SENSIBILITY_DEFAULT 1
#define PASSWORD_DEFAULT "picariello"

#include <string>
using namespace std;

struct settings_record
{
	bool isEnabled;
	bool isWindowAVisible;
	bool isWindowBVisible;
	string audioAlertFile;
	bool isAlertInLoop;
	bool takePhoto;
	unsigned int photoForMovement;
	unsigned int sensibility;
	string password;
};

class settings_data
{
public:

	settings_data(bool isEnabled = IS_ENABLED_DEFAULT, bool isWindowAVisible = IS_WINDOWA_VISIBLE_DEFAULT, 
				  bool isWindowBVisible = IS_WINDOWB_VISIBLE_DEFAULT, string audioAlertFile = AUDIO_ALERT_FILE_DEFAULT,
				  bool isAlertInLoop = IS_ALERT_IN_LOOP_DEFAULT, bool takePhoto = TAKE_PHOTO_DEFAULT,
				  unsigned int photoForMovement = PHOTO_FOR_MOVEMENT_DEFAULT, unsigned int sensibility = SENSIBILITY_DEFAULT,
				  string password = PASSWORD_DEFAULT);

	void setIsEnabled(bool value);
	void setIsWindowAVisible(bool value);
	void setIsWindowBVisible(bool value);
	void setAudioAlertFile(string value);
	void setIsAlertInLoop(bool value);
	void setTakePhoto(bool value);
	void setPhotoForMovement(unsigned int value);
	void setSensibility(unsigned int value);
	void setPassword(string value);

	bool getIsEnabled( ) const;
	bool getIsWindowAVisible( ) const;
	bool getIsWindowBVisible( ) const;
	string getAudioAlertFile( ) const;
	bool getIsAlertInLoop( ) const;
	bool getTakePhoto( ) const;
	unsigned int getPhotoForMovement( ) const;
	unsigned int getSensibility( ) const;
	string getPassword( ) const;

private:

	settings_record settings;
};

static settings_data globalSettings;
static bool hasToEnd;
static bool windowAHidden;
static bool windowBHidden;
static bool intruderFound;
static bool isLooping;