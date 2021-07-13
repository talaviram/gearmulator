static void setupBackground(juce::Component &parent, std::unique_ptr<juce::Drawable> &bg, const void *data,
                            const size_t numBytes)
{
    bg = juce::Drawable::createFromImageData(data, numBytes);
    parent.addAndMakeVisible(bg.get());
    bg->setBounds(bg->getDrawableBounds().toNearestIntEdges());
}
