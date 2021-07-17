#include "Virus_Buttons.h"
#include "BinaryData.h"

using namespace juce;

namespace Buttons
{
    Buttons::HandleButton::HandleButton() : DrawableButton("HandleButton", DrawableButton::ImageRaw)
    {
        auto up = Drawable::createFromImageData(BinaryData::Handle_18x47_png, BinaryData::Handle_18x47_pngSize);
        auto down = up->createCopy();
        setColour(DrawableButton::ColourIds::backgroundColourId, Colours::transparentBlack);
        setColour(DrawableButton::ColourIds::backgroundOnColourId, Colours::transparentBlack);
        setClickingTogglesState(true);
        down->setOriginWithOriginalSize({-18, 0});
        setImages(down.get(), nullptr, up.get(), nullptr, up.get(), nullptr, down.get());
    }

    Buttons::LfoButton::LfoButton() : DrawableButton("LFOButton", DrawableButton::ImageRaw)
    {
        auto off = Drawable::createFromImageData(BinaryData::lfo_btn_23_19_png, BinaryData::lfo_btn_23_19_pngSize);
        auto on = off->createCopy();
        setColour(DrawableButton::ColourIds::backgroundColourId, Colours::transparentBlack);
        setColour(DrawableButton::ColourIds::backgroundOnColourId, Colours::transparentBlack);
        setClickingTogglesState(true);
        on->setOriginWithOriginalSize({0, -19});
        setImages(off.get(), nullptr, on.get(), nullptr, on.get());
    }

}; // namespace Buttons
