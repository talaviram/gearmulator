#pragma once

#include <juce_gui_extra/juce_gui_extra.h>

namespace Virus
{
    class LookAndFeel : public juce::LookAndFeel_V4
    {
    public:
        LookAndFeel();

        static constexpr auto kKnobSize = 70;

        enum KnobStyle
        {
            GENERIC,
            GENERIC_POL,
            GENERIC_BLUE,
            GENERIC_RED
        };

        static const char *KnobStyleProp;

        void drawRotarySlider(juce::Graphics &, int x, int y, int width, int height, float sliderPosProportional,
                              float rotaryStartAngle, float rotaryEndAngle, juce::Slider &) override;

    private:
        std::unique_ptr<juce::Drawable> m_genKnob, m_genPol, m_genBlue, m_genRed, m_multi;
        juce::NormalisableRange<float> m_knobImageSteps;
    };
} // namespace Virus
