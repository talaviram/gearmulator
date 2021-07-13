#include "Virus_OscEditor.h"
#include "BinaryData.h"
#include "Ui_Utils.h"

using namespace juce;

OscEditor::OscEditor()
{
    setupBackground(*this, m_background, BinaryData::bg_osc_1018x620_png, BinaryData::bg_osc_1018x620_pngSize);
    setBounds(m_background->getDrawableBounds().toNearestIntEdges());
}
