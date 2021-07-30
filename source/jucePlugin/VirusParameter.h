#pragma once

#include <juce_audio_processors/juce_audio_processors.h>

namespace Virus
{

    class Controller;

    class Parameter : private juce::Value::Listener
    {
    public:
        enum Class
        {
            UNDEFINED = 0x0,
            GLOBAL = 0x1,
            PERFORMANCE_CONTROLLER = 0x2,
            SOUNDBANK_A = 0x4,
            SOUNDBANK_B = 0x8,
            MULTI_OR_SINGLE = 0x10,
            MULTI_PARAM = 0x20,
            NON_PART_SENSITIVE = 0x40,
            BANK_PROGRAM_CHANGE_PARAM_BANK_SELECT = 0x80,
            VIRUS_C = 0x100,
        };

        enum Page
        {
            A = 0x70,
            B = 0x71,
            C = 0x72
        };

        struct Description
        {
            Page page;
            int classFlags;
            uint8_t index;
            juce::String name;
            juce::Range<int> range;
            std::function<juce::String(float, Description ctx)> valueToTextFunction;
            std::function<float(const juce::String &, Description ctx)> textToValueFunction;
            bool isPublic;
            bool isDiscrete;
            bool isBool;
        };

        Parameter(Controller &, const Description desc, uint8_t partNum = 0x40);

        juce::Value &getValueObject() { return m_value; };
        const juce::Value &getValueObject() const { return m_value; };

        const Description getDescription() const { return m_desc; };

    private:
        void valueChanged(juce::Value &) override;

        Controller &m_ctrl;
        Description m_desc;
        uint8_t m_paramNum, m_partNum;
        juce::Value m_value;
    };
} // namespace Virus