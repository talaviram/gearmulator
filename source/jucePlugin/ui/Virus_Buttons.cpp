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
        setImages(down.get(), nullptr, nullptr, nullptr, up.get());
    }
}; // namespace Buttons
