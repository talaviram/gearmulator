#pragma once

#include "../PluginProcessor.h"

class ArpEditor : public juce::Component
{
public:
    ArpEditor();

private:
    std::unique_ptr<juce::Drawable> m_background;
};
