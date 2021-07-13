#pragma once

#include "../PluginProcessor.h"

class OscEditor : public juce::Component
{
public:
    OscEditor();

private:
    std::unique_ptr<juce::Drawable> m_background;
};
