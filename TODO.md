# TODO:

OVERALL:

+ Separate GUI and Audio
+ fix audio completely to run separately from gui
  + Make pauseOrResumeProcessing part of ValueTree (and set up commandManager)
  + set up XML? Some other way of serializing data
  + Set up device manager
  + Reset current beat counter????????
+ Build GUI separately


+ Bugs
  + [ ] Memory management


+ UI
+ [ ] Tile grouping coloring working dynamically
+ [ ] Save Session
+ [ ] Add labels for UI components
+ [ ] Labeling of clips / tracks
+ [ ] Creation / Deletion of Tracks
+ [ ] Audio waveform visualizations

MAC:

+ Bugs
  + [ ] Clip scheduling
  + [ ] Component focus when opening application (?)

LINUX:

+ UI
+ [] Help menu


WINDOWS:

+ UI
+ [] Help menu


+ Audio
  + [ ] Testing multiple audio cards / interfaces
  + [ ] Individual Track control of input/output channels
  + [ ] MainAudio.cpp connectNodes function must declare num of channels dynamically
  + [ ] Get rid of commandManager commands in Track.h (only needed for debugging)

+ Dev
  + [ ] Fix build system and CMake files
  + [ ] Try building in Windows/Linux
  + [ ] Improve Testing documentation
  + [ ] Improve app documentation
  + [ ] Add logging for debug mode ONLY

TODO:
*
* TESTING:
* - set up testing
* - test audio classes (test for real time constrains in the audio thread)

* GUI:

* - Project Management (load, save, name)
* - Use Debuggin for screen ((Put JUCE_ENABLE_REPAINT_DEBUGGING=1 in
*   target_compile_definitions in your CMakeLists.txt))
* - Use JUCE_LIVE_CONSTANT (lets you manipulate any value live to fine-tune them)

* AUDIO:
* - Device Manager
* - MIDI

* LOOPER:
* - Looping Recorded audio
