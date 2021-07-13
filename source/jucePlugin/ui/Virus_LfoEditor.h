#pragma once

#include "../PluginProcessor.h"

class LfoEditor : public juce::Component
{
public:
    LfoEditor();

private:
    std::unique_ptr<juce::Drawable> m_background;
};
