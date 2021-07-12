#include "VirusEditor.h"
#include "BinaryData.h"

using namespace juce;

constexpr auto kPanelWidth = 1377;
constexpr auto kPanelHeight = 800;

VirusEditor::VirusEditor()
{
    m_background = Drawable::createFromImageData (BinaryData::bg_1377x800_png, BinaryData::bg_1377x800_pngSize);

    m_background->setBufferedToImage (true);
    addAndMakeVisible (*m_background);

    setSize (kPanelWidth, kPanelHeight);
}

void VirusEditor::resized()
{
    m_background->setBounds (getLocalBounds());
}
