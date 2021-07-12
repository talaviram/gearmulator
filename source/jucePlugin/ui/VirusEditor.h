#pragma once

#include <juce_gui_extra/juce_gui_extra.h>

class VirusEditor : public juce::Component
{
public:
    VirusEditor();
    void resized() override;
private:
    struct MainButtons : juce::Component
    {
        MainButtons();
        void setupButton (int i, std::unique_ptr<juce::Drawable>&& btn, juce::DrawableButton&);
        juce::DrawableButton m_oscFilter, m_lfoMatrix, m_effects, m_arpSettings;
        static constexpr auto kMargin = 5;
        static constexpr auto kButtonWidth = 141;
        static constexpr auto kButtonHeight = 26;
        static constexpr auto kGroupId = 0x3FBBA;
    } m_mainButtons;

    std::unique_ptr<juce::Drawable> m_background;
};
