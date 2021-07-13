#pragma once

#include "../PluginProcessor.h"

class FxEditor : public juce::Component
{
public:
    FxEditor();

private:
    std::unique_ptr<juce::Drawable> m_background;
};
