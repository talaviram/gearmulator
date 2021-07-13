#include "Virus_ArpEditor.h"
#include "BinaryData.h"
#include "Ui_Utils.h"

using namespace juce;

ArpEditor::ArpEditor()
{
    setupBackground(*this, m_background, BinaryData::bg_arp_1018x620_png, BinaryData::bg_arp_1018x620_pngSize);
    setBounds(m_background->getDrawableBounds().toNearestIntEdges());
}
