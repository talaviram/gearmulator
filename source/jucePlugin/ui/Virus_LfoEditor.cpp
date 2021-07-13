#include "Virus_LfoEditor.h"
#include "BinaryData.h"
#include "Ui_Utils.h"

using namespace juce;

LfoEditor::LfoEditor()
{
    setupBackground(*this, m_background, BinaryData::bg_lfo_1018x620_png, BinaryData::bg_lfo_1018x620_pngSize);
    setBounds(m_background->getDrawableBounds().toNearestIntEdges());
}
