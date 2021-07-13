#pragma once

#include <juce_gui_extra/juce_gui_extra.h>

class OscEditor;
class LfoEditor;
class FxEditor;
class ArpEditor;

class VirusEditor : public juce::Component
{
public:
    VirusEditor();
    void resized() override;

private:
    struct MainButtons : juce::Component, juce::Value::Listener
    {
        MainButtons();
        void setupButton (int i, std::unique_ptr<juce::Drawable>&& btn, juce::DrawableButton&);
        void valueChanged(juce::Value &) override;

        std::function<void()> updateSection;
        juce::DrawableButton m_oscFilter, m_lfoMatrix, m_effects, m_arpSettings;
        static constexpr auto kMargin = 5;
        static constexpr auto kButtonWidth = 141;
        static constexpr auto kButtonHeight = 26;
        static constexpr auto kGroupId = 0x3FBBA;
    } m_mainButtons;

    void applyToSections(std::function<void(juce::Component *)>);

    std::unique_ptr<OscEditor> m_oscEditor;
    std::unique_ptr<LfoEditor> m_lfoEditor;
    std::unique_ptr<FxEditor> m_fxEditor;
    std::unique_ptr<ArpEditor> m_arpEditor;

    std::unique_ptr<juce::Drawable> m_background;
};
