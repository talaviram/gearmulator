#pragma once

#include "../PluginProcessor.h"

class OscEditor : public juce::Component
{
public:
    OscEditor();
    void resized() override;

private:
    struct OscOne : juce::Component
    {
        OscOne();
        juce::Slider m_shape;
        juce::Slider m_pulseWidth;
        juce::Slider m_semitone;
        juce::Slider m_keyFollow;
    } m_oscOne;

    struct OscTwo : OscOne
    {
        OscTwo();
        juce::Slider m_fmAmount, m_detune, m_envFm, m_envOsc2;
    } m_oscTwo;

    struct OscThree : juce::Component
    {
        OscThree();
        juce::Slider m_semitone;
        juce::Slider m_detune;
        juce::Slider m_level;
    } m_oscThree;

    struct Unison : juce::Component
    {
        Unison();
        juce::Slider m_detune;
        juce::Slider m_panSpread;
        juce::Slider m_lfoPhase;
        juce::Slider m_phaseInit;
    } m_unison;

    struct Mixer : juce::Component
    {
        Mixer();
        juce::Slider m_oscBalance;
        juce::Slider m_oscLevel;
    } m_mixer;

    struct RingMod : juce::Component
    {
        RingMod();
        juce::Slider m_noiseLevel;
        juce::Slider m_ringModLevel;
        juce::Slider m_noiseColor;

    } m_ringMod;

    struct Sub : juce::Component
    {
        Sub();
        juce::Slider m_level;
    } m_sub;

    struct Portamento : juce::Component
    {
        Portamento();
        juce::Slider m_portamento;
    } m_portamento;

    struct Filters : juce::Component
    {
        Filters();
        struct Filter : juce::Component
        {
            Filter();
            juce::Slider m_cutoff;
            juce::Slider m_res;
            juce::Slider m_envAmount;
            juce::Slider m_keyTrack;
            juce::Slider m_resVel;
            juce::Slider m_envVel;
        } m_filter[2];
        juce::Slider m_filterBalance;
    } m_filters;

    struct Envelope : juce::Component
    {
        Envelope();
        juce::Slider m_attack;
        juce::Slider m_decay;
        juce::Slider m_sustain;
        juce::Slider m_time;
        juce::Slider m_release;
    };

    struct FilterEnv : Envelope
    {
    } m_filterEnv;

    struct AmpEnv : Envelope
    {
    } m_ampEnv;

    std::unique_ptr<juce::Drawable> m_background;
};