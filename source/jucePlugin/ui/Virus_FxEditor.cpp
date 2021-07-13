#include "Virus_FxEditor.h"
#include "BinaryData.h"
#include "Ui_Utils.h"

using namespace juce;

FxEditor::FxEditor()
{
    setupBackground(*this, m_background, BinaryData::bg_fx_1018x620_png, BinaryData::bg_fx_1018x620_pngSize);
    setBounds(m_background->getDrawableBounds().toNearestIntEdges());
}
