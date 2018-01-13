#include "stdafx.h"
#include "settings_data.h"

settings_data::settings_data(bool isEnabled, bool isWindowAVisible, bool isWindowBVisible, string audioAlertFile,
							 bool isAlertInLoop, bool takePhoto, unsigned int photoForMovement, unsigned int sensibility,
							 string password)
{
	settings.isEnabled = isEnabled;
	settings.isWindowAVisible = isWindowAVisible;
	settings.isWindowBVisible = isWindowBVisible;
	settings.audioAlertFile = audioAlertFile;
	settings.isAlertInLoop = isAlertInLoop;
	settings.takePhoto = takePhoto;
	settings.photoForMovement = photoForMovement;
	settings.sensibility = sensibility;
	settings.password = password;
}

void settings_data::setIsEnabled(bool value)
{settings.isEnabled = value;}

void settings_data::setIsWindowAVisible(bool value)
{settings.isWindowAVisible = value;}

void settings_data::setIsWindowBVisible(bool value)
{settings.isWindowBVisible = value;}

void settings_data::setAudioAlertFile(string value)
{settings.audioAlertFile = value;}

void settings_data::setIsAlertInLoop(bool value)
{settings.isAlertInLoop = value;}

void settings_data::setTakePhoto(bool value)
{settings.takePhoto = value;}

void settings_data::setPhotoForMovement(unsigned int value)
{settings.photoForMovement = value;}

void settings_data::setSensibility(unsigned int value)
{settings.sensibility = value;}

void settings_data::setPassword(string value)
{settings.password = value;}

bool settings_data::getIsEnabled( ) const
{return settings.isEnabled;}

bool settings_data::getIsWindowAVisible( ) const
{return settings.isWindowAVisible;}

bool settings_data::getIsWindowBVisible( ) const
{return settings.isWindowBVisible;}

string settings_data::getAudioAlertFile( ) const
{return settings.audioAlertFile;}

bool settings_data::getIsAlertInLoop( ) const
{return settings.isAlertInLoop;}

bool settings_data::getTakePhoto( ) const
{return settings.takePhoto;}

unsigned int settings_data::getPhotoForMovement( ) const
{return settings.photoForMovement;}

unsigned int settings_data::getSensibility( ) const
{return settings.sensibility;}

string settings_data::getPassword( ) const
{return settings.password;}