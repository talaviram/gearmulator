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

    Buttons::EnvPol::EnvPol() : m_pos("Positive", DrawableButton::ImageRaw), m_neg("Negative", DrawableButton::ImageRaw)
    {
        static int radioGroup = 0x4bc3f;
        radioGroup++; // group counter is static to generate group per each button.
        // 27x15
        for (auto *b : {&m_pos, &m_neg})
        {
            b->setRadioGroupId(radioGroup);
            b->setColour(DrawableButton::ColourIds::backgroundColourId, Colours::transparentBlack);
            b->setColour(DrawableButton::ColourIds::backgroundOnColourId, Colours::transparentBlack);
            b->setClickingTogglesState(true);
        }
        auto pos_off = Drawable::createFromImageData(BinaryData::env_pol_50x34_png, BinaryData::env_pol_50x34_pngSize);
        auto pos_on = pos_off->createCopy();
        pos_on->setOriginWithOriginalSize({-25, 0});
        m_pos.setImages(pos_on.get(), nullptr, pos_off.get(), nullptr, pos_off.get(), nullptr, pos_on.get());
        m_pos.setBounds(1, 1, 25, 13);
        addAndMakeVisible(m_pos);

        addAndMakeVisible(m_neg);
        auto neg_off = Drawable::createFromImageData(BinaryData::env_pol_50x34_png, BinaryData::env_pol_50x34_pngSize);
        neg_off->setOriginWithOriginalSize({0, -17});
        auto neg_on = neg_off->createCopy();
        neg_on->setOriginWithOriginalSize({-25, -17});
        m_neg.setImages(neg_off.get(), nullptr, neg_on.get(), nullptr, neg_on.get(), nullptr, nullptr, neg_off.get());
        m_neg.setBounds(1, 18, 25, 13);
    }
}; // namespace Buttons
