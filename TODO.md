# TODO:

OVERALL:

+ Separate GUI and Audio
+ fix audio completely to run separately from gui 
  + set up XML? Some other way of serializing data
  + Set up device manager
  + Make pauseOrResumeProcessing part of ValueTree (and maybe other application states?)
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
