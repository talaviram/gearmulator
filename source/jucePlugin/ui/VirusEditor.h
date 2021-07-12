#pragma once

#include <juce_gui_extra/juce_gui_extra.h>

class VirusEditor : public juce::Component
{
public:
    VirusEditor();
    void resized() override;
private:
    std::unique_ptr<juce::Drawable> m_background;
};
