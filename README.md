QT4Soundmanager
===============

A sound manager class written in QT4 for Phonon.  

This class supports looping of a background music while being able to play sound effects.  
The background music can be switched/played by calling emitPlayBgm(number) from another class.  
And sound effects can be played by calling emitPlayEffect(number) from another class.  

All sounds are zero indexed by the order the are placed into the lists of sound effects and background songs.  
When the background song finishes it is restarted from the beginning.  
  
Currently there are 5 sound outputs for sound effects, so 5 sound effects can be played alongside the background music.  
This number can be changed in Soundmanager.cpp, line 17.  
  
When there is a request to play a sound request, the program sees if there is an available sound output that is not being used, if there is the sound is played, if there is not then the sound is not played. This solution isn't perfect, if too many sounds are requested, then Phonon will produce errors and slow down the program execution. Try to limit the amount of sound effects that are played in one time period.
