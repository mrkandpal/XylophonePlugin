/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"
#include <math.h>

//==============================================================================
/**
*/
class XylophoneModelAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    XylophoneModelAudioProcessorEditor (XylophoneModelAudioProcessor&);
    ~XylophoneModelAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;
    
    void setRingLayout(double radius, float Xcentre, float Ycentre, int numButtons, int keyWidth, int keyHeight);
    int activeButtons = 25;
    float radius = 200;
    float centreX = 400;
    float centreY = 300;
    int keyWidth = 40;
    int keyHeight = 40;
    
private:
    juce::TextButton keys[50];
    //short numKeys = 10;
    
    XylophoneModelAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (XylophoneModelAudioProcessorEditor)
};
