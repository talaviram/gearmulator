#pragma once

#include <juce_gui_extra/juce_gui_extra.h>

namespace Buttons
{
    class HandleButton : public juce::DrawableButton
    {
    public:
        HandleButton();
        static constexpr auto kWidth = 18;
        static constexpr auto kHeight = 47;
    };

    class LfoButton : public juce::DrawableButton
    {
    public:
        LfoButton();
        static constexpr auto kWidth = 23;
        static constexpr auto kHeight = 19;
    };
} // namespace Buttons
