#pragma once

#include "../PluginProcessor.h"

class ArpEditor : public juce::Component
{
public:
    ArpEditor();

private:
    struct VelocityAmount : juce::Component
    {
        VelocityAmount();
        juce::Slider m_osc1Shape;
        juce::Slider m_filter1Freq;
        juce::Slider m_filter1Res;
        juce::Slider m_pulseWidth;
        juce::Slider m_volume;
        juce::Slider m_panorama;
        juce::Slider m_osc2Shape;
        juce::Slider m_filter2Freq;
        juce::Slider m_filter2Res;
        juce::Slider m_fmAmount;
    } m_velocityAmount;

    struct Inputs : juce::Component
    {
    } m_inputs;

    struct Arpeggiator : juce::Component
    {
        Arpeggiator();
        juce::Slider m_globalTempo;
        juce::Slider m_noteLength;
        juce::Slider m_noteSwing;
    } m_arp;

    struct SoftKnobs : juce::Component
    {
    } m_softKnobs;

    struct PatchSettings : juce::Component
    {
        PatchSettings();
        juce::Slider m_patchVolume;
        juce::Slider m_panning;
        juce::Slider m_outputBalance;
        juce::Slider m_transpose;
    } m_patchSettings;

    std::unique_ptr<juce::Drawable> m_background;
};
