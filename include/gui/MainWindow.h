/*
 * Created by Juan Diego on 10/4/24.
 */

#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include "MainComponent.h"

//#include "melatonin_inspector/melatonin_inspector.h"


class MainWindow final : public juce::DocumentWindow
{
public:
    explicit MainWindow(const juce::String& name, MainComponent* mainComponent);

    void closeButtonPressed();

private:
    //melatonin::Inspector inspector { *this }; //MELATONIN WINDOW

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(MainWindow);
};

#endif /* MAIN_WINDOW_H */