#ifndef SQUEEZEBOX_SOUND_HPP
#define SQUEEZEBOX_SOUND_HPP

#include <iostream>
#include <string>

#include <SDL2/SDL_mixer.h>

using namespace std;

namespace squeezebox {
	class Sound {
		public:
			Sound(string path);

			void play();
		private:
			Mix_Chunk *sound;
	};
}

#endif
