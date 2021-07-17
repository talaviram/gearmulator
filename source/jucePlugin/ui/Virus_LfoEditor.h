#pragma once

#include "../PluginProcessor.h"

class LfoEditor : public juce::Component
{
public:
    LfoEditor();

private:
    struct LfoBase : juce::Component
    {
        LfoBase();
        juce::Slider m_rate;
        juce::Slider m_keytrack;
        juce::Slider m_amount;
    };

    struct LfoTwoOneShared : LfoBase
    {
        LfoTwoOneShared();
        juce::Slider m_contour;
        juce::Slider m_phase;
    };

    struct LfoOne : LfoTwoOneShared
    {
        LfoOne();
        juce::Slider m_osc1Pitch;
        juce::Slider m_osc2Pitch;
        juce::Slider m_filterGain;
        juce::Slider m_pw12;
        juce::Slider m_reso12;
    } m_lfoOne;

    struct LfoTwo : LfoTwoOneShared
    {
        LfoTwo();
        juce::Slider m_f1cutoff;
        juce::Slider m_f2cutoff;
        juce::Slider m_panning;
        juce::Slider m_shape12;
        juce::Slider m_fmAmount;
    } m_lfoTwo;

    struct LfoThree : LfoBase
    {
        LfoThree();
        juce::Slider m_fadeIn;
    } m_lfoThree;

    struct ModMatrix : juce::Component
    {
        ModMatrix();
        void setupSlot(int slot, std::initializer_list<juce::Point<int>> destsPos);
        struct MatrixSlot : juce::Component
        {
            MatrixSlot(int numOfDests);
            struct Dest : juce::Component
            {
                static constexpr auto kWidth = 173;
                static constexpr auto kHeight = 62;
                Dest();
                juce::Slider m_amount;
            };

            std::vector<std::unique_ptr<Dest>> m_destinations;
        };

        std::vector<std::unique_ptr<MatrixSlot>> m_modMatrix;
    } m_modMatrix;

    std::unique_ptr<juce::Drawable> m_background;
};