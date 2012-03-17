#ifndef GAME_SOUND_OPENAL_OUTPUT_H
#define GAME_SOUND_OPENAL_OUTPUT_H

#include "soundmanager.hpp"

#include "alc.h"
#include "al.h"

namespace MWSound
{
    class OpenAL_Output : public Sound_Output
    {
        ALCdevice *Device;
        ALCcontext *Context;

        virtual bool Initialize(const std::string &devname="");
        virtual void Deinitialize();

        OpenAL_Output(SoundManager &mgr);
        virtual ~OpenAL_Output();

        friend class SoundManager;
    };
#ifndef DEFAULT_OUTPUT
#define DEFAULT_OUTPUT OpenAL_Output
#endif
};

#endif